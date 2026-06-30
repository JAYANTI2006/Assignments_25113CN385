
#include <iostream>
using namespace std;

int main() {

    // Q105. Create Student Record Management System

    int rollNo;
    string name;
    float marks;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\nStudent Record\n";
    cout << "Roll No: " << rollNo << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}



    // Q106. Create Employee Management System

    int empId;
    string empName;
    string department;

    cout << "Enter Employee ID: ";
    cin >> empId;

    cout << "Enter Employee Name: ";
    cin >> empName;

    cout << "Enter Department: ";
    cin >> department;

    cout << "\nEmployee Details\n";
    cout << "ID: " << empId << endl;
    cout << "Name: " << empName << endl;
    cout << "Department: " << department << endl;

    return 0;
}



    // Q107. Create Salary Management System

    string employeeName;
    float basicSalary;
    float bonus;

    cout << "Enter Employee Name: ";
    cin >> employeeName;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Bonus: ";
    cin >> bonus;

    cout << "Total Salary: " << basicSalary + bonus << endl;

    return 0;
}



    // Q108. Create Marksheet Generation System

    string studentName;
    int m1, m2, m3;

    cout << "Enter Student Name: ";
    cin >> studentName;

    cout << "Enter Marks in 3 Subjects: ";
    cin >> m1 >> m2 >> m3;

    int total = m1 + m2 + m3;
    float percentage = total / 3.0;

    cout << "\nMarksheet\n";
    cout << "Name: " << studentName << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << endl;

    return 0;
}
