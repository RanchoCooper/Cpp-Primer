/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-26 17:12:11
**  
**  @statu  solved
**  @brief
**  Write your own version of the StrBlob class including the const versions 
**  of front and back.
**/

#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <exception>

using namespace std;

class StrBlob {
public:
    using size_type = vector<string>::size_type;

    StrBlob() : data(make_shared<vector<string>>()) {}
    StrBlob(initializer_list<string> il) : date(make_shared<vector<string>>(il)) {}

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const string & t) { data->push_back(t); }
    void pop_back() {
        check(0, "pop_back() on empty StrBlob\n");
        data->pop_back();
    }
    string& front() {
        check(0, "front() on empty StrBlob\n");
        return data->front();
    }
    string& back() {
        check(0, "back() on empty StrBlob\n");
        return data->front();
    } 
    const string& front() const {
        check(0, "front() on empty StrBlob\n");
        return data->front();
    }
    const string& back() const {
        check(0, "pop_back on empty StrBlob\n");
        return data->back();
    }
private:
    shared_ptr<vector<string>> data;

    void check(size_type i, const string &msg) const {
        if (i >= data->size())
            throw out_of_range(msg);
    }
};

int main(int argc, char const *argv[]) {
    
    getchar();
    return 0;
}