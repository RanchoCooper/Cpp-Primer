/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-23 10:26:05
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

void elimdups(vector<string> &vs) {
    sort(vs.begin(), vs.end());
    auto new_end = unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

void biggies_partition(vector<string> &vs, size_t sz) {
    elimdups(vs);
    auto pivot = partition(vs.begin(), vs.end(), [sz](const string &s) {
        return s.size() >= sz;
    });
    for (auto it = vs.cbegin(); it != pivot; ++it)
        cout << *it << " ";
    cout << endl;
}

void biggies_stable_partition(vector<string> &vs, size_t sz) {
    elimdups(vs);
    auto pivot = stable_partition(vs.begin(), vs.end(), [sz](const string &s) {
        return s.size() >= sz;
    });
    for (auto it = vs.cbegin(); it != pivot; ++it)
        cout << *it << " ";
    cout << endl;
}

int main(int argc, char const *argv[]) {
    // ex10.18
    std::vector<std::string> v{
        "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
    };
    
    std::cout << "ex10.18: ";
    std::vector<std::string> v1(v);
    biggies_partition(v1, 4);
    std::cout << std::endl;

    // ex10.19
    std::cout << "ex10.19: ";
    std::vector<std::string> v2(v);
    biggies_stable_partition(v2, 4);
    std::cout << std::endl;
    
    getchar();
    return 0;
}