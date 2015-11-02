/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 13:50:35
** 
** @statu: solved
** @brief:
** Using the following definition of ia, copy ia into a vector and into a list.
** Use the single-iterator form of erase to remove the elements with odd values 
** from your list and the even values from your vector.
**/

#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <list>

using namespace std;

int main(int argc, char const *argv[]) {
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    // init
    vector<int> vec(ia, end(ia));
    list<int> lst(vec.begin(), vec.end());

    // remove odd value
    for (auto it = lst.begin(); it != lst.end(); )
        if (*it & 0x1) it = lst.erase(it);
        else ++it;
    // remove even value
    for (auto it = vec.begin(); it != vec.end(); )
        if (! (*it & 0x1)) it = vec.erase(it);
        else ++it;

    cout << "list : ";
    for(auto i : lst)   cout << i << " ";
    cout << "\nvector : ";
    for(auto i : vec)   cout << i << " ";
    cout << endl;

    getchar();
    return 0;
}