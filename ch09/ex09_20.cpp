/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 13:23:43
** 
** @statu: solved
** @brief:
** Write a program to copy elements from a list<int> into two deques.
** The even-valued elements should go into one deque and the odd ones into the other.
**/

#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <list>

using namespace std;

int main(int argc, char const *argv[]) {
    list<int> lst{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    deque<int> odd, even;
    for (auto i : lst)
        // @awsome
        (i & 0x1 ? odd : even).push_back(i);
    for (auto i : odd) cout << i << " ";
    cout << endl;
    for (auto i : even)cout << i << " ";
    cout << endl;
    
    getchar();
    return 0;
}