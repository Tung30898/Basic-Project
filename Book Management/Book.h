#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<ctime>

class Book {
private:
    string mName;
    string mID;
    long mPrice;
    uint8_t mDateBuy[6];
    bool mAble;
public:
    uint8_t mDateBorrow[6];
    uint8_t mDateReturn[6];
    
    Book();
    virtual ~Book();

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
    uint8_t* GetDateBuy(){
        return mDateBuy;
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