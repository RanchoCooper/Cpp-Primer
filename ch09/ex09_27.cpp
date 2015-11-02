/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 14:18:02
** 
** @statu: solved
** @brief:
** Write a program to find and remove the odd-valued
** elements in a forward_list<int>.
**/

#include <iostream>
#include <cstdio>
#include <forward_list>

using namespace std;

void remove_odds(forward_list<int>& flst) {
    auto is_odd = [] (int i) { return i & 0x1; };
    flst.remove_if(is_odd);
}

int main(int argc, char const *argv[]) {
    forward_list<int> data = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    remove_odds(data);
    for (auto i : data) 
        cout << i << " ";

    getchar();
    return 0;
}