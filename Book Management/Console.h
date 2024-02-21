#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

class Console {
public:
    Console(){};
    virtual ~Console(){};
    void MainScreen();
    void BookListScreen();
    // void ListIsBorrowed();
    // void BorrowBook();
    // void BackBook();
};

#endif