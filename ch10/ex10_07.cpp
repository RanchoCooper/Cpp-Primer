/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-22 22:10:23
**  
**  @statu  solved
**  @brief
**  Determine if there are any errors in the following programs and, 
**  if so, correct the error(s)

**/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>
#include <list>
#include <iterator>

using namespace std;

template<typename Sequence>
void print(Sequence const& seq) {
    for (const auto& i : seq)
        cout << i << " ";
    cout << endl;
}


int main(int argc, char const *argv[]) {
    // a
    vector<int> vec;
    list<int> lst;
    int i;
    while (cin >> i)
        lst.push_back(i);
    // @fixed `cause uncertain size
    vec.resize(lst.size());
    copy(lst.cbegin(), lst.cend(), vec.begin());

    // b
    vector<int> v;
    v.reserve(10);
    fill_n(v.begin(), 10, 0);
    // @no error, but v.size till 0
    // fixed  1. `v.resize(10)
    //        2. `fill_n(back_inserter(v), 10, 0)

    print(v);
    print(vec);

    getchar();
    return 0;
}