/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 12:21:14
** 
** @statu: solved
** @brief:
** Write a program to determine whether two vector<int>s are equal.
**/

#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <list>

using namespace std;

bool equal(vector<int> &v1, vector<int> &v2) {
    if (v1.size() != v2.size())
        return false;
    else if (v1.empty()) 
        return true;
    else {
        auto it1 = v1.cbegin();
        auto it2 = v2.cbegin();
        while (it1 != v1.cend() && it2 != v2.cend() && *it1 == *it2)
            ++it1, ++it2;
        return (it1 == v1.cend()) ? true : false;
    }
}

int main(int argc, char const *argv[]) {
    vector<int> vec1{ 1, 2, 3, 4 };
    vector<int> vec2{ 1, 2, 3, 4, 4 };

    if (equal(vec1, vec2))
        cout << "equal" << endl;
    else cout << "not equal" << endl;
    
    getchar();
    return 0;
}