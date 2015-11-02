/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 17:48:02
** 
** @statu: solved
** @brief:
** Write a program to store each line from a file in a vector<string>.
** Now use an istringstream to read each element from the vector a word at a time.
**/

#include <iostream>
#include <cstdio>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    ifstream ifs("../data/book.txt");
    if (!ifs) {
        cerr << "no data?!" << endl;
        return -1;
    }
    vector<string> vecLine;
    string buf;
    while (getline(ifs, buf))
        vecLine.push_back(buf);
    for (auto &e : vecLine) {
        istringstream iss(e);
        string word;
        while (iss >> word)
            cout << word << endl;
    }
    
    getchar();
    return 0;
}