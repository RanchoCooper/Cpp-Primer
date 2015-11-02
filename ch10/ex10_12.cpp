/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-10-22 23:28:32
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
#include <numeric>
#include "../ch07/ex7_26.h"     // Sales_data class.

using namespace std;

inline bool compareISBN(const Sales_data &sd1, const Sales_date &sd2) {
    return sd1.isbn().size() < sd2.isbn().size();
}

int main(int argc, char const *argv[]) {
    Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
    vector<Sales_data> v{ d1, d2, d3, d4, d5 };

    // @note   the elements the iterators pointing to
    //         must match the parameters of the predicate.
    sort(v.begin(), v.end(), compareIsbn);

    for(const auto &element : v)
        std::cout << element.isbn() << " ";
    cout << endl;

    getchar();
    return 0;
}