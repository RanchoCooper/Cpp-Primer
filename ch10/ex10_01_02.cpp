/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-22 21:59:56
**  
**  @statu  solved
**  @brief
**  
**/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main(int argc, char const *argv[]) {
    // 10.1
    vector<int> v = { 1, 2, 3, 4, 5, 6, 6, 6, 2 };
    cout << "ex 10.01: " << count(v.cbegin(), v.cend(), 6) << endl;

    // 10.2
    list<std::string> l = { "aa", "aaa", "aa", "cc" };
    cout << "ex 10.02: " << count(l.cbegin(), l.cend(), "aa") << endl;

    
    getchar();
    return 0;
}