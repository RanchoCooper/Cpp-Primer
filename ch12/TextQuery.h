/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-11-06 21:17:22
**  
**  @status  solved
**  @brief
**  
**/
#include <vector>
#include <string>
#include <memory>

class QueryResult;  // define return type of method query

class TextQuery {
public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery(std::ifstream&);
    QueryResult query(const string&) const; 
private:
    // input file, it's a shared_ptr points to the file data
    std::shared_ptr<std::vector<std::string>> file;
    // mapping from word to line_no
    std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

TextQuery::TextQuery(std::ifstream& ifile) : file(new vector<std::string>) {
    string text;
    while (getline(ifile, text)) {  // for each line in file
        file->pushback(text);       // save current line
        int n = file->size() - 1;   // save current line_no
        istringstream line(text);   // try to discard text, convert it to istringstream first
        string word;
        while (line >> word) {      // for each word in line
            auto &lines = wm[word]; // lines is a shared_ptr
            if (!lines)
                lines.reset(new set<line_no>);  // allot a new set for a new word
            lines->insert(n);       // insert line_no to set
        }
    }
}

TextQuery::query(const string& sought) const {
    // if not found, return a empty shared_ptr
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    // using find rather than index operator to avoid add word to wm
    auto location = wm.find(sought);
    if (location == wm.end())
        return QueryResult(sought, nodata, file);
    else
        return QueryResult(sought, location->second, file); // $second? what the hell???
}

class QueryResult {
friend std::ostream& print(std::ostream&, const QueryResult&);
public:
    QueryResult(std::string s, 
                std::shared_ptr<std::set<line_no>> p, 
                std::shared_ptr<std::vector<std::string>> f) :
        sought(s), lines(p), file(f) { }

private:
    std::string sought;                             // the word to seek
    std::shared_ptr<std::set<line_no>> lines;       // line number where it occur
    std::shared_ptr<std::vector<std::string>> file  // input file
};

ostream& print(std::ostream& os, const QueryResult& qr) {
    // if find the word, print occur times and position 
    os << qr.sought << " occurs " << qr.lines->size() << " "
       << make_plural(qr.lines->size(), "time", "s") << endl;
    // print each line the word occurs
    for (auto num : *qr.lines)
        os << "\t(line " << num + 1 << ") "
           << *(qr.file->begin() + num) << endl;
    return os;
}