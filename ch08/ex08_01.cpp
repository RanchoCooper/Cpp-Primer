/*
 * author:  rancho
 * email:   rancho941110@gmail.com
 * created: 2015-10-21 16:17:36
 *
 * status: solved
 * [main description]
 * Write a function that takes and returns an istream&. 
 * The function should read the stream until it hits end-of-file. 
 * The function should print what it reads to the standard output. 
 * Reset the stream so that it is valid before returning the stream.
**/
#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;

istream& func(istream &is);

int main(int argc, char const *argv[]) {
    ifstream ifile;
    ifile.open("date");
    func(ifile);
    
    getchar();
    return 0;
}

istream& func(istream &is) {
    string buf;
    while (is >> buf)
        cout << buf << endl;
    is.clear();  // reset
    return is;
}