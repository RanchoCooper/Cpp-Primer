/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-22 22:07:32
**  
**  @statu  solved
**  @brief
**  
**/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    fill_n(vec.begin(), vec.size(), 0);

    for (auto i : vec)
        cout << i << " ";
    cout << endl;
    
    getchar();
    return 0;
}