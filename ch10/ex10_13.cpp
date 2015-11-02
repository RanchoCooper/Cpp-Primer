/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-22 23:37:21
**  
**  @statu  solved
**  @brief
**  
**/

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool predicate(const string &s) {
    return 5 <= s.size();
}

int main(int argc, char const *argv[]) {
    auto v = vector<string>{ "a", "as", "aasss", "aaaaassaa", "aaaaaabba", "aaa" };
    auto pivot = partition(v.begin(), v.end(), predicate);

    for (auto it = v.cbegin(); it != pivot; ++it)
        cout << *it << " ";
    cout << endl;

    for (auto it = pivot; it != v.cend(); ++it)
        cout << *it << " ";

    getchar();
    return 0;
}