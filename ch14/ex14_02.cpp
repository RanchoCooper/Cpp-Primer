/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-11-24 14:53:45
**  
**  @status  solved
**  @brief
**  
**/

#include "ex14_02.h"

Sales_data::Sales_data(std::istream &is) : Sales_data() {
    is >> *this;
}

Sales_data& Sales_data::operator+=(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

std::istream& operator>>(std::istream& is, Sales_data& item) {
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    if (is) 
        item.revenue = price * item.units_sold;
    else
        item = Sales_data();
    return is;
}

std::ostream& operator<<(std::ostream& os, const Sales_data& item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data operator+(const Sales_data& lhs, const Sales_data& lhs) {
    // create a new Sales_data object to store
    // for preserve the origin data in lhs
    // but here we create the sum in this function
    // while return this object was destroy before we return its copy
    // deliver the store obj will be more effective
    Sales_data sum = lhs;
    sum += rhs;
    return sum;
}