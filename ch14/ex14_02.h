/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-11-24 14:46:08
**  
**  @status  unsolved
**  @brief
**  
**/

#include <string>
#include <iostream>

using namespace std;

class Sales_data {
    friend istream& operator>>(istream&, Sales_data&);
    friend ostream& operator<<(ostream&, const Sales_data&);
    friend Sales_data operator+(const Sales_data&, const Sales_data&);

public:
    Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(n*p){ }
    Sales_data() : Sales_data("", 0, 0.0f){ }
    Sales_data(const std::string &s) : Sales_data(s, 0, 0.0f){ }
    Sales_data(std::istream &is);

    Sales_data& operator+=(const Sales_data&); // compound-assignment
    string isbn() const { return bookNo; }

private:
    inline double avg_price() const;

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

inline double avg_price() const {
    return units_sold ? revenue / units_sold : 0;
}