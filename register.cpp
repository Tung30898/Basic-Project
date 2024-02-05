#include "register.h"

int Register::SelectionScreen() {
    int select = 0;
    cout << "1.Sign up\n";
    cout << "2.Login\n";
    cout << "3.Exit\n";
    cout << "Your Selection: ";
    cin >> select;
    return select;
}

void Register::CreatAcc() {
    string nameAcc;
    string pws, repws;
    fstream write;
    cout << "Account name:";
    cin >> nameAcc;
    cout << "Password:";
    cin >> pws;
    do {
        cout << "Re-Password:";
        cin >> repws;
    }while(pws != repws);
    write.open("test.txt",ios::app | ios::ate);
    if(!write.is_open()) {
        cout << "File opened failed";
        return;
    }
    
    write<<nameAcc;
    write<<endl;
    write<<pws;
    write<<endl;
    write.close();
}

void Register::Login() {
    int count = 0;
    string acc, pws;
    string accSave, pwsSave;
    fstream read("DataUser.txt", ios::in);
    cout << "Account: ";
    cin >> acc;
    cout << "Password: ";
    cin >> pws;
    while(!read.eof()) {
        switch(count) {
            case 0:
                read>>accSave;
                cout << accSave << "\n";
                count++;
                break;
            case 1:
                read>>pwsSave;
                cout << pwsSave << "\n";
                count++;
                break;
            case 2:
                count = 0;
                if(accSave == acc && pwsSave == pws) {
                    cout << "Login successful\n";
                    read.close();
                    return;
                }
                break;
        }
    }
    cout << "Your account or password is failed\n";
    read.close();
    return;
}