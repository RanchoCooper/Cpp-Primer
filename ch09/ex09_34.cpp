/* 
**  @author: rancho
**  @email:  rancho941110@gmail.com
**  @time:   2015-10-22 21:56:01
**  
**  @statu: solved
**  @brief:
**  
**/

#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> data { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for(auto cur = data.begin(); cur != data.end(); ++cur)
        if(*cur & 0x1)
            cur = data.insert(cur, *cur), ++cur;
    
    for (auto i : data)
        cout << i << " ";

    getchar();
    return 0;
}