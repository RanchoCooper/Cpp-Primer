/*
 * author:  rancho
 * email:   rancho941110@gmail.com
 * created: 2015-10-21 21:57:02
 *
 * status: solved
 * [main description]
**/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void ReadFileToVec(const string& fileName, vector<string>& svec) {
    ifstream ifs(fileName);
    if (ifs) {
        string buf;
        while (ifs >> buf)  // save each word as element
            svec.push_back(buf);
    }
}

int main(int argc, char const *argv[]) {
    vector<string> vec;
    ReadFileToVec("../data/book.txt", vec);
    for (const auto &str : vec)
        cout << str << endl;

    getchar();
    return 0;
}