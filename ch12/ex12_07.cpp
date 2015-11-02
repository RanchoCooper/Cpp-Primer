/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-26 18:54:36
**  
**  @statu  solved
**  @brief
**  
**/

#include <iostream>
#include <cstdio>
#include <vector>
#include <memory>

using namespace std;
using Sptr = shared_ptr<vector<int>>;

auto make_with_shared_ptr() -> Sptr {
    return make_shared<vector<int>>();
}

auto populate(Sptr vec) -> Sptr {
    for (int i; cout << "pls enter: \n", cin >> i; vec->push_back(i));
    return vec;
}

ostream& print(Sptr vec) {
    for (auto e : *vec) cout << e << " ";
    return cout;
}

int main(int argc, char const *argv[]) {
    auto vec = populate(make_with_shared_ptr());
    print(vec) << std::endl;

    getchar();
    return 0;
}