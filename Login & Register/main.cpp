#include "register.h"

int main() {
    Register* mRegister = new Register();
    while(1) {
        int select = mRegister->SelectionScreen();
        switch(select) {
            case 1:
                mRegister->CreatAcc();
                break;
            case 2:
                mRegister->Login();
                break;
            case 3:
                return 0;
            default:
                cout << "Your selection is invalid";
        }
    }
    return 0;
}