#include <iostream>
using namespace std;

int main() {

    // Q101. Create Number Guessing Game

    int secret = 7;
    int guess;

    cout << "Enter your guess: ";
    cin >> guess;

    if(guess == secret) {
        cout << "Correct Guess";
    }
    else if(guess < secret) {
        cout << "Too Low";
    }
    else {
        cout << "Too High";
    }



    // Q102. Create Voting Eligibility System

    int age;

    cout << "\nEnter age: ";
    cin >> age;

    if(age >= 18) {
        cout << "Eligible for Voting";
    }
    else {
        cout << "Not Eligible for Voting";
    }



    // Q103. Create ATM Simulation

    int balance = 10000;
    int choice;
    int amount;

    cout << "\n1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;

    cin >> choice;

    if(choice == 1) {
        cout << "Balance: " << balance;
    }
    else if(choice == 2) {
        cin >> amount;
        balance += amount;
        cout << "Updated Balance: " << balance;
    }
    else if(choice == 3) {
        cin >> amount;

        if(amount <= balance) {
            balance -= amount;
            cout << "Updated Balance: " << balance;
        }
        else {
            cout << "Insufficient Balance";
        }
    }



    // Q104. Create Quiz Application

    int score = 0;
    int ans;

    cout << "\nWhat is the capital of India?" << endl;
    cout << "1. Mumbai" << endl;
    cout << "2. Delhi" << endl;
    cout << "3. Kolkata" << endl;

    cin >> ans;

    if(ans == 2) {
        score++;
    }

    cout << "\n2 + 2 = ?" << endl;
    cout << "1. 3" << endl;
    cout << "2. 4" << endl;
    cout << "3. 5" << endl;

    cin >> ans;

    if(ans == 2) {
        score++;
    }

    cout << "Final Score: " << score;

    return 0;
}
