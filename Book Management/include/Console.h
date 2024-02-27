#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include "Person.h"

using namespace std;

class Console {
private:
    Person* mPerson;
public:
    void MainScreen();
    void BookListScreen();
    void ListIsBorrowedScreen();
    void BorrowBookScreen();
    void BackBookScreen();
    Console();
    virtual ~Console(){};
};

#endif