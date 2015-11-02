/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 17:56:18
** 
** @statu: solved
** @brief:
** The program in this section defined its istringstream object 
** inside the outer while loop. What changes would you need to make 
** if record were defined outside that loop? Rewrite the program, 
** moving the definition of record outside the while, and see whether 
** you thought of all the changes that are needed.
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

int main(int argc, char const *argv[]) {
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while (getline(cin, line)) {
        PersonInfo info;
        // reset record's state
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
    for (auto &p : people) {
        cout << p.name << " ";
        for (auto &s : p.phones)
            cout << s << " ";
        cout << endl;
    }

    getchar();
    return 0;
}