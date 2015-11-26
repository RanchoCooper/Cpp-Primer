/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-11-07 10:27:19
**  
**  @status  solved
**  @brief
**/

#ifndef CP5_ex13_05_h
#define CP5_ex13_05_h

#include <string>

class HasPtr {
public:
    HasPtr(const std::string & s = std::string()) :
        ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& hp) : ps(new std::string(*hp.ps)), i(hp.i) { }
private:
    std::string *ps;
    int i;
};