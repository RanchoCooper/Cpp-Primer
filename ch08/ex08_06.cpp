/*
 * @author: rancho
 * @email:  rancho941110@gmail.com
 * @time:   2015-10-22 00:03:23
 * 
 * @statu: solved
 * @brief:
 * 
 */

#include <iostream>
#include <fstream>
#include "../ch07/ex7_26.h"

using namespace std;

int main(int argc, char *argv[]) {
    ifstream input(argv[1]);

    Sales_data total;
    if (read(input, total)) {
        Sales_data trans;
        while (read(input, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "no data?!" << endl;
    }
    
    getchar();
    return 0;
}