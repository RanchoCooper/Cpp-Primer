/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-11-06 20:39:13
**  
**  @status  solved
**  @brief
**  
**/

#include <cstdio>
#include <iostream>


using namespace std;

void runQuery(ifstream&);

int main(int argc, char const *argv[]) {
    
    getchar();
    return 0;
}

void runQuery(ifstream& infle) {
    // infile is a ifstream quote to the file we'll handle to
    TextQuery tq(infile);
    while (true) {
        cout << "enter the word to query, or q to quit:" << endl;
        string s;
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
}