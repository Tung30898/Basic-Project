#include "Book.h" 

void Book::SetTimeBorrow(){
    time_t mStartTime = time(0);
    tm* nowTime = localtime(&mStartTime);
}

void Book::SetTimeBack(){
    time_t mEndTime = time(0);
    tm* nowTime = localtime(&mEndTime);
}

Book::Book(){
    mName = "";
    mID = "";
    mPrice = 0;
    mAble = true;
}

Book::~Book(){
    cout << "DEBUG: Destructor of Book";
}