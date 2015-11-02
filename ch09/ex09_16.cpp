/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 13:17:57
** 
** @statu: solved
** @brief:
** Repeat the previous program, but compare elements in a
** list<int> to a vector<int>.
** 
**/

#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <list>

using namespace std;

bool equal(const list<int> &lst, const vector<int> &vec) {
    if (lst.size() != lst.size())
        return false;
    else if (lst.empty())
        return true;
    else {
        auto it1 = lst.cbegin();
        auto it2 = vect.cbegin();
        while (it1 != lst.cend() && it2 != vec.cend() && *it1 == *it2)
            ++it1, ++it2;
        return (it1 == lst.cend())? true : false;
    }
}

int main(int argc, char const *argv[]) {
    list<int>      li{ 1, 2, 3, 4, 5 };
    vector<int>    vec1{ 1, 2, 3, 4, 5 };
    vector<int>    vec2{ 1, 2, 3, 4 };

    getchar();
    return 0;
}