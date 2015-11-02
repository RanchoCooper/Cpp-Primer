/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-26 18:38:19
**  
**  @statu  solved
**  @brief
**  
**/

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
using ptr = std::vector<int>*;

auto make_dynamically() -> ptr{
    return new vector<int> {};
}

auto populate(ptr vec) -> ptr {
    for (int i; cout << "pls enter:\n", cin >> i; vec->push_back(i));
    return vec;
}

ostream& print(ptr vec) {
    for (auto e : *vec) cout << e << " ";
    return cout;
}

int main(int argc, char const *argv[]) {
    auto vec = populate(make_dynamically());
    print(vec) << endl;
    delete vec;
    
    getchar();
    return 0;
}