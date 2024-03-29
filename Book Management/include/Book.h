#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<ctime>

using namespace std;

class Book {
private:
    string mName;
    string mID;
    long mPrice;
    bool mAble;
public:
    time_t mStartTime;
    time_t mEndTime;

    Book();
    virtual ~Book();

    void SetTimeBorrow();
    void SetTimeBack();

    /*get function*/
    string GetName(){
        return mName;
    }
    string GetID(){
        return mID;
    }
    long GetPrice(){
        return mPrice;
    }
    const bool GetAvaiable(){
        return mAble;
    }

    /*Set function*/
    void SetName(string name){
        mName = name;
    }
    void SetID(string id){
        mID = mID;
    }
    void SetPrice(long price){
        mPrice = price;
    }
    void SetAvaiable(bool availabe){
        mAble = availabe;
    }
};

#endif