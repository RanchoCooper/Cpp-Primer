/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-11-05 20:54:19
**  
**  @status  solved
**  @brief
**  write a program that reads a string from the standard input into a dynamically allocated character
**  array. describe how your program handles varying size inputs
**  test your program by giving it a string of data that is longer than the array size you've allocated
**  
**/

#include <iostream>
#include <cstdio>


using namespace std;

int main(int argc, char const *argv[]) {
    // need to tell the size
    cout << "how long do you want the string?" << endl;
    int size {0};
    cin >> size;
    char *input = new char[size + 1]();
    cin.ignore();  // discard character in cin buffer
    cout << "input the string: " << endl;
    cin.get(input, size + 1);
    cout << input;
    delete [] input;
    // test: if longer than the array size, we will lost the characters which are out of range
    
    getchar();
    return 0;
}