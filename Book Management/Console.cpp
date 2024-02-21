#include "Console.h"

void Console::MainScreen(){
    cout << "===============+++ BOOK MANAGERMENT +++===============\n";
    cout << "1.Book List\n";
    cout << "2.List is borrowed\n";
    cout << "3.Borrow Book\n";
    cout << "4.Back Book\n";
}

void Console::BookListScreen() {
    fstream readFile;
    string readLine=nullptr;
    readFile.open("./TxTFile/BookList.txt", ios::out);
    if(readFile.is_open()) {
        while(!readFile.eof()) {
            readFile>>readLine;
            cout << readLine << "\n";
        }
    }
    readFile.close();
}