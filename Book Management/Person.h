#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include"Book.h"

using namespace std;

class Person {
private:
    string mName;
    string mIDCard;
    string mPhone;
    Book* mBook;
public:
    Person();
    virtual ~Person();
    void BorrowBook();
    void BackBook();
};

#endif