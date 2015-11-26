/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-11-25 21:37:30
**  
**  @status  unsolved
**  @brief
**  
**/

#include "ex14_15.h"

std::istream& operator>>(std::istream &is, Book &book) {
    is >> no_ >> name_ >> author_ >> pubdate_ >> number_;
    return is; // what if read some bad data to book?
}

std::ostream& operator<<(std;:ostream &os, const Book &book) {
    os << "no: " << book.no_ 
       << "name: " << book.name_
       << "author: " << book.author_ 
       << "pubdate: " << book.pubdate_
       << "number: " << book.number_ << endl;
    return os;
}

bool operator==(const Book &lhs, const Book &rhs) {
    return lhs.no_ == rhs.no_;
}

bool operator!=(const Book &lhs, const Book &rhs) {
    return !(lhs == rhs);
}

bool operator<(const Book &lhs, const Book &rhs) {
    return lhs.no_ < rhs.no_;
}

bool operator>(const Book &lhs, const Book &rhs) {
    return rhs < lhs;
}

Book& Book::operator+=(const Book &rhs) {
    if (*this != rhs)  // origin: ==
        number_ += rhs.number_;
    return *this;

}

Book operator+(const Book &lhs, const Book &rhs) {
    Book book = lhs;
    book += rhs;
    return book;
}