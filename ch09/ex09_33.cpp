/* 
**  @author: rancho
**  @email:  rancho941110@gmail.com
**  @time:   2015-10-22 21:51:39
**  
**  @statu: solved
**  @brief:
**  In the final example in this section what would happen 
**  if we did not assign the result of insert to begin? 
**  Write a program that omits this assignment to see if your expectation was correct.  
**  @Answer Crash, because the iterator is invalid after inserting.
**/

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto begin = v.begin();
    while (begin != v.end()) {
        ++begin;
        /*begin = */v.insert(begin, 42);
        ++begin;
    }

    for (auto i : v)
        cout << i << " ";
    getchar();
    return 0;
}