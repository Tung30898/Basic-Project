#include"Person.h"

void Person::BorrowBook() {
    bool mCheck = false;
    fstream readFile("../data/BookListBorrow.txt", ios::in);
    string readLine="";

    cout << "Borrowed person:";
    cin >> mName;
    cout << "ID Card:";
    cin >> mIDCard;
    cout << "Phone Number:";

    while(getline(readFile,readLine)) {
        if(readLine == mName) {
            getline(readFile,readLine);
            if(readLine = mIDCard) {
                mCheck = true;
                break;
            }
                
        }
    }
    if(true == mCheck) {
        cout << "You still don't back book. Please Back book before borrow new ones!";
        readFile.close();
        return ;
    }
    cin >> mPhone;
    cout << "Serial Book:";
    cin >> mBook->SetID();

    readFile.close();
}

Person::Person() {
    mName = "";
    mIDCard = "";
    mPhone = "";
    mBook = new Book();
}