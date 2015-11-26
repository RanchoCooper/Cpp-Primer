/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-11-05 20:46:34
**  
**  @status  solved
**  @brief
**  1. write a program to concatenate two string literals, putting the result in a dynamically 
**  allocate array of char
**  2. write a program to concatenate two library strings that have the same as the literals used
**  in the first program
**/
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
    // dynamically allocated array of char
    char *concatenate_string = new char[255]();
    strcat(concatenate_string, "hello ");
    strcat(concatenate_string, "world!\n");
    cout << concatenate_string << endl;
    delete [] concatenate_string;

    // std::string
    string str1 {"hello "}, str2 {"world!\n"};
    cout << str1 + str2 << endl;
    
    getchar();
    return 0;
}