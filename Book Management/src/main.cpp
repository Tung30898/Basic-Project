#include "Console.h"

int main() {
    Console* test = new Console();
    int a = 0;
    cout << "test script";
    test->MainScreen();
    while(a==0){
        cout << "select:";
        cin >> a;
    }
    if(a == 1)
        test->BookListScreen();
    return 0;
}