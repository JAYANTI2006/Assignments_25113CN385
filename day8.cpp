#include <iostream>
using namespace std;

int main() {
// *
// **
// ***
    int rows = 3;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// A
// AB
// ABC


    int rows;
    cout << "enter a number = ";
    cin >> "rows";


    for(int i = 1; i <= rows; i++) {
        for(char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}

// 1
// 12
// 123

    int rows;
    cout << "enter a number = ";
    cin >> "rows";

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }


// 1
// 22
// 333

    int rows;
    cout << "enter a number = ";
    cin >> "rows";


    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}
