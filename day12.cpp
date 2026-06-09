#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversed = (reversed * 10) + digit;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int n;
    cout << "Enter a number to check Palindrome: ";
    cin >> n;
    
    if (isPalindrome(n)) {
        cout << n << " is a Palindrome number." << endl;
    } else {
        cout << n << " is not a Palindrome number." << endl;
    }
    return 0;
}


// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int original = num;
    int temp = num;
    int digits = 0;
    int sum = 0;
    
   
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += round(pow(digit, digits));
        temp /= 10;
    }
    
    return original == sum;
}

int main() {
    int n;
    cout << "Enter a number to check Armstrong: ";
    cin >> n;
    
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}



// Function to print Fibonacci series up to 'terms' count
void printFibonacci(int terms) {
    int t1 = 0, t2 = 1, nextTerm = 0;
    
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= terms; ++i) {
        if (i == 1) {
            cout << t1 << " ";
            continue;
        }
        if (i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms for Fibonacci: ";
    cin >> n;
    
    printFibonacci(n);
    return 0;
}



// Function to check if a number is a perfect number
bool isPerfect(int num) {
    int sum = 0;
    
    // Find all proper divisors and sum them up
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    return sum == num;
}

int main() {
    int n;
    cout << "Enter a number to check Perfect Number: ";
    cin >> n;
    
    if (isPerfect(n)) {
        cout << n << " is a Perfect number." << endl;
    } else {
        cout << n << " is not a Perfect number." << endl;
    }
    return 0;
}



