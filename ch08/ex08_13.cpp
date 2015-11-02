/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 18:15:31
** 
** @statu: solved
** @brief:
** Rewrite the phone number program from this section to read from 
** a named file rather than from cin.
**/

#include <iostream>
#include <cstdio>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

bool valid(const string& str) {
    return isdigit(str[0]);
}

string format(const string& str) {
    return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main(int argc, char const *argv[]) {
    ifstream ifs("../data/phonenumbers.txt");
    if (!ifs) {
        cerr << "no phone number?!" << endl;
        return -1;
    }
    string word, line;
    vector<PersonInfo> people;
    istringstream record;
    while (getline(ifs, line)) {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
    for (const auto &entry : people) {
        ostringstream formatted, badNums;
        for (const auto &nums : entry.phones)
            if (!valid(nums)) badNums << " " << nums;
            else formatted << " " << format(nums);
        if (badNums.str().empty())
            cout << entry.name << " " << formatted.str() << endl;
        else
            cerr << "input error: " << entry.name << endl
                 << "invalid number(s): " << badNums.str() << endl;
    }

    getchar();
    return 0;
}