/* 
**  @author rancho
**  @email  rancho941110@gmail.com
**  @time   2015-11-07 14:59:25
**  
**  @status  solved
**  @brief
**  
**/

#include "ex13_26.h"


ConstStrBlobPtr StrBlob::begin() const // should add const
{
    return ConstStrBlobPtr(*this);
}
ConstStrBlobPtr StrBlob::end() const // should add const
{
    return ConstStrBlobPtr(*this, data->size());
}

StrBlob& StrBlob::operator=(const StrBlob& sb)
{
    data = std::make_shared<vector<string>>(*sb.data);
    return *this;
}

int main(int argc, char const *argv[]) {
    
    getchar();
    return 0;
}