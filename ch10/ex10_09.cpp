/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 18:31:24
** 
** @statu: unsolved
** @brief:
** Implement your own version of elimDups. Test your program by printing
** the vector after you read the input, after the call to unique, and after
** the call to erase.
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
auto println(Sequence const& seq) -> std::ostream& {
    for (auto const& elm : seq)
        cout << elm << " ";
    return cout << endl;
}

auto eliminate_duplicates(vector<string> &vs) -> vector<string>& {
    sort(vs.begin(), vs.end());
    println(vs);

    auto new_end = unique(vs.begin(), vs.end());
    println(vs);

    vs.erase(new_end, vs.end());
    return vs;
}

int main(int argc, char const *argv[]) {
    vector<string> vs{ "a", "v", "a", "s", "v", "a", "a" };
    println(vs);
    println(eliminate_duplicates(vs));
    
    getchar();
    return 0;
}