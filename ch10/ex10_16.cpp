/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-23 10:12:08
**  
**  @statu  solved
**  @brief
**  Write your own version of the biggies function using lambdas.
**/

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void elimdups(vector<string> &vs) {
    // 按字典排序
    sort(vs.begin(), vs.end());
    // 唯一化
    auto new_end = unique(vs.begin(), vs.end());
    // 去重
    vs.erase(new_end, vs.end());
}

void biggies(vector<string> &vs, size_t sz) {
    elimdups(vs);
    // sort by size, but maintain alphabetical order for same size.
    stable_sort(vs.begin(), vs.end(), [](const string &lh, const string &rh) {
        return lh.size() < rh.size();
    });
    // get an iterator to the first one whose size() >= sz
    auto wc = find_if(vs.begin(), vs.end(), [sz](const string& s) {
        return s.size() >= sz;
    });
    // print the biggies
    for_each(wc, vs.end(), [](const string &s) {
        cout << s << " ";
    });
}

int main(int argc, char const *argv[]) {
    // ex10.16
    vector<string> v {
        "1234","1234","1234","hi~", "alan", "alan", "cp"
    };
    cout << "ex10.16: ";
    biggies(v, 3);
    cout << endl;

    getchar();
    return 0;
}