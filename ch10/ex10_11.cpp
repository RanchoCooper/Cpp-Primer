/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-22 23:21:49
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

template<typename Sequence>
inline ostream& println(Sequence const& seq) {
    for (auto const & elm : seq) cout << elm << " ";
    return cout << endl;
}

inline bool is_shorter(string const& lhs, string const& rhs) {
    return lhs.size() < rhs.size();
}

void elimdups(vector<string> &vs) {
    sort(vs.begin(), vs.end());
    auto new_end = unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

int main(int argc, char const *argv[]) {
    vector<std::string> v{
        "1234", "1234", "1234", "Hi", "alan", "wang"
    };
    elimdups(v);
    stable_sort(v.begin(), v.end(), is_shorter);
    cout << "ex10.11 :\n";
    println(v);
    
    getchar();
    return 0;
}