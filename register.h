#ifndef REGISTER_H_
#define REGISTER_H_

#include<iostream>
#include<string>
#include<fstream>
#include<bits/stdc++.h>

using namespace std;

class Register {
public:
    Register(){

    }
    virtual ~Register() {

    }
    int SelectionScreen();
    void CreatAcc();
    void Login();
};
#endif