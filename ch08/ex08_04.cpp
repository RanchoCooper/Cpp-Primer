/*
 * author:  rancho
 * email:   rancho941110@gmail.com
 * created: 2015-10-21 21:45:20
 *
 * status: solved
 * [main description]
 * Write a function to open a file for input and read its contents into 
 * a vector of strings, storing each line as a separate element in the vector.
**/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void ReadFileToVec(const string& fileName, vector<string>& vec) {
    ifstream ifs(fileName);
        // check the file was valid
    if (ifs) {
        string buf;
        while (getline(ifs, buf))  // save each line as element
            vec.push_back(buf);
    }
}

int main(int argc, char const *argv[]) {
    vector<string> svec;
    ReadFileToVec("../data/book.txt", svec);
    for (const auto &str : svec)
        cout << str << endl;
    
    getchar();
    return 0;
}