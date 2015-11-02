/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 17:39:46
** 
** @statu: solved
** @brief:
** 
**/

#include <iostream>
#include <cstdio>
#include <sstream>

using namespace std;

istream& func(istream &is) {
    std::string buf;
    while (getline(is, buf)) // read each line
//  while (cin >> buf)          read each word
        cout << buf << endl;
    is.clear(); // reset stream state
    return is;

}

int main(int argc, char const *argv[]) {
    istringstream iss("hello, world!\n");
    func(iss);
    
    getchar();
    return 0;
}