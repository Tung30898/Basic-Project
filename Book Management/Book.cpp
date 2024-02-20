#include "Book.h" 

Book::Book(){
    mName = "";
    mID = "";
    mPrice = 0;
    mAble = true;
    mDateBuy[]={0,0,0,0,0,0};
    mDateBorrow[]={0,0,0,0,0,0};
}

void Book::GiveBookBack(uint8_t* bookBack){

}