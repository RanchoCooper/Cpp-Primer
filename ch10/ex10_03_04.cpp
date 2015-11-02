/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-22 22:03:32
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

using namespace std;

int main(int argc, char const *argv[]) {
    // Exercise 10.3
    std::vector<int> v = { 1, 2, 3, 4 };
    std::cout << "ex 10.03: " << std::accumulate(v.cbegin(), v.cend(), 0) << std::endl;

    // Exercise 10.4
    std::vector<double> vd = { 1.1, 0.5, 3.3 };
    std::cout   << "ex 10.04: "
                << std::accumulate(vd.cbegin(), vd.cend(), 0.0)
                << std::endl;   

    
    getchar();
    return 0;
}