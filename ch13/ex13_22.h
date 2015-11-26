/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-11-07 11:29:15
**  
**  @status  solved
**  @brief
**  
**/


#ifndef CP5_ex13_11_h
#define CP5_ex13_11_h

#include <string>

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0)
        { }
    HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) { }

    /**
     * if we want the class behaves more like a value
     * (every object of this class will keep its own copie)
     * in the operator=, we should allot a new memory for old_member_var
     * and free old_member_var, then assign the reference args to the new_
     * last, return the caller itself as usual
     */
    HasPtr& operator=(const HasPtr &rhs) {
        // attention: rhs maybe this itself, we can't access rhs.ps
        // if we delete ps first
        auto new_p = new std::string(*rhs.ps);
        delete ps;
        ps = new_ps;
        i = rhs.i;
        return *this;
    }
    ~HasPtr() {
        delete ps;
    }
private:
    std::string *ps;
    int i;

};