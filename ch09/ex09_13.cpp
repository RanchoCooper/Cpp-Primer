/*
** @author: rancho
** @email:  rancho941110@gmail.com
** @time:   2015-10-22 11:04:08
** 
** @statu: solved
** @brief:
** How would you initialize a vector<double> from a list<int>?
** From a vector<int>?
** Write code to check your answers.
**/

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char const *argv[]) {
    list<int> ilst(5, 4);
    vector<int> ivec(5, 5);

    // from list<int> to vector<double>
    vector<double> dvec(ilst.begin(), ilst.end());
    for(auto i : ilst) cout << i << " ";
    cout << endl;
    for (auto d : dvec) cout << d << " ";
    cout << endl;

    // from vector<int> to vector<double>
    vector<double> dvec2(ivec.begin(), ivec.end());
    for (auto i : ivec) cout << i << " ";
    cout << endl;
    for (auto d : dvec2) cout << d << " ";
    cout << endl;
    
    getchar();
    return 0;
}