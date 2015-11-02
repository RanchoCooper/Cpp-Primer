/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 13:34:00
** 
** @statu: solved
** @brief:
** Assuming `iv` is a `vector` of `int`s, what is wrong with the following program? 
** How might you correct the problem(s)?
```<cpp>
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size()/2;
    while (iter != mid)
        if (*iter == some_val)
            iv.insert(iter, 2 * some_val);
```</cpp>
**/

#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <list>

using namespace std;

void double_and_insert(vector<int>& v, int some_val) {
    // @ old_iterator invalid, 'cause insert()
    // using lambda return a reference to `mid_itrator`
    // awsome
    auto mid = [&]{ return v.begin() + v.size() / 2; };
    for (auto cur = v.begin(); cur != mid(); ++cur) {
        if (*cur == some_val)
            ++(cur = v.insert(cur, 2 * some_val));
    }
}

int main(int argc, char const *argv[]) {
    vector<int> v{ 1, 9, 1, 9, 9, 9, 1, 1 };
    double_and_insert(v, 1);

    for (auto i : v) 
        cout << i << endl;
    getchar();
    return 0;
}