/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 11:11:23
** 
** @statu: solved
** @brief:
** Write a program to assign the elements from a list of char* pointers
** to C-style character strings
** 
**/

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <list>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {
    list<const char*> clst{ "Rancho", "Cooper" };
    vector<string> svec;
    svec.assign(clst.cbegin(), clst.cend());


    for (auto ptr : svec) {
        // string word;
        // istringstream iss;
        // iss.str(ptr);
        // iss >> word;
        // cout << word << endl;
        cout << ptr << endl;
    }
    
    getchar();
    return 0;
}