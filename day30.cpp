#include <iostream>
using namespace std;

int main() {

    // Q117. Create Student Record System Using Arrays and Strings

    string name[3];
    int marks[3];

    for(int i = 0; i < 3; i++) {
        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    cout << "\nStudent Records\n";

    for(int i = 0; i < 3; i++) {
        cout << name[i] << " " << marks[i] << endl;
    }

    return 0;
}



int main() {

    // Q118. Create Mini Library System

    string books[3];

    for(int i = 0; i < 3; i++) {
        cout << "Enter Book Name: ";
        cin >> books[i];
    }

    cout << "\nAvailable Books\n";

    for(int i = 0; i < 3; i++) {
        cout << books[i] << endl;
    }

    return 0;
}



int main() {

    // Q119. Create Mini Employee Management System

    string employee[3];
    int salary[3];

    for(int i = 0; i < 3; i++) {
        cout << "Enter Employee Name: ";
        cin >> employee[i];

        cout << "Enter Salary: ";
        cin >> salary[i];
    }

    cout << "\nEmployee Details\n";

    for(int i = 0; i < 3; i++) {
        cout << employee[i] << " " << salary[i] << endl;
    }

    return 0;
}



void display(string name[], int marks[], int n) {
    for(int i = 0; i < n; i++) {
        cout << name[i] << " " << marks[i] << endl;
    }
}

int main() {

    // Q120. Develop Complete Mini Project Using Arrays, Strings and Functions

    string name[3];
    int marks[3];

    for(int i = 0; i < 3; i++) {
        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    cout << "\nStudent Report\n";

    display(name, marks, 3);

    return 0;
}
