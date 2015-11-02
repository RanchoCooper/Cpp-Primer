/* 
**  @author: rancho
**  @email:  rancho941110@gmail.com
**  @time:   2015-10-22 21:36:12
**  
**  @statu: solved
**  @brief:
**  The program on page 354 to remove even-valued elements and 
**  duplicate odd ones will not work on a list or forward_list. Why? 
**  Revise the program so that it works on these types as well. 
**/

#include <iostream>
#include <cstdio>
#include <forward_list>

using namespace std;

void remove_evens_and_double_odds(forward_list<int>& data) {
    for (auto cur = data.begin(), prev = data.before_begin(); cur != data.end(); ) {
        if (*cur & 0x1)
            cur = data.insert_after(prev, *cur),
            advance(prev, 2),
            advance(cur, 2);
        else
            cur = data.erase_after(prev);
    }
}


int main(int argc, char const *argv[]) {
    forward_list<int> data { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    remove_evens_and_double_odds(data);
    for (auto i : data)
        cout << i << " ";
    
    getchar();
    return 0;
}