#include <iostream>
using namespace std;

int main() {

    // Q113. Create Menu-Driven Calculator

    int choice;
    double a, b;

    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(choice) {
        case 1:
            cout << a + b;
            break;
        case 2:
            cout << a - b;
            break;
        case 3:
            cout << a * b;
            break;
        case 4:
            cout << a / b;
            break;
        default:
            cout << "Invalid Choice";
    }

    return 0;
}





    // Q114. Create Menu-Driven Array Operations System

    int arr[5] = {10, 20, 30, 40, 50};
    int choice;

    cout << "1. Display Array\n2. Find Sum\n";
    cin >> choice;

    if(choice == 1) {
        for(int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
    }
    else if(choice == 2) {
        int sum = 0;

        for(int i = 0; i < 5; i++) {
            sum += arr[i];
        }

        cout << sum;
    }

    return 0;
}




    // Q115. Create Menu-Driven String Operations System

    string str;
    int choice;

    cout << "Enter String: ";
    cin >> str;

    cout << "1. Length\n2. Reverse\n";
    cin >> choice;

    if(choice == 1) {
        cout << str.length();
    }
    else if(choice == 2) {
        for(int i = str.length() - 1; i >= 0; i--) {
            cout << str[i];
        }
    }

    return 0;
}





    // Q116. Create Inventory Management System

    string itemName;
    int quantity;

    cout << "Enter Item Name: ";
    cin >> itemName;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "\nInventory Details\n";
    cout << "Item: " << itemName << endl;
    cout << "Quantity: " << quantity << endl;

    return 0;
}
