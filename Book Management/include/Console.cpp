#include "Console.h"

void Console::MainScreen(){
    cout << "===============+++ BOOK MANAGERMENT +++===============\n";
    cout << "1.Book List\n";
    cout << "2.List is borrowed\n";
    cout << "3.Borrow Book\n";
    cout << "4.Back Book\n";
}

void Console::BookListScreen() {
    fstream readFile("../data/BookList.txt",ios::in);
    string readLine="";
    while(getline(readFile,readLine)) {
        cout << readLine << "\n";
    }
    readFile.close();
}

void Console::ListIsBorrowedScreen(){
    fstream readFile("../data/BookListBorrow.txt",ios::in);
    string readLine = "";
    while(getline(readFile,readLine)){
        cout << readLine << "\n";
    }
    readFile.close();
    cout << "1.Exit";
}

void Console::BorrowBookScreen(){
    cout << "Please fill some information to borrow book!";
    mPerson->BorrowBook();
}

void Console::BackBookScreen(){
    cout << "Please fill some information to back book!";
    mPerson->BackBook();
}

Console::Console(){
    cout << "Debug: contructor Console";
}