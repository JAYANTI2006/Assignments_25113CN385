#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // Q1. dec to bin
    vector<int> bin;
    int num;
    cout << " number = ";
    cin >> num;
    
    while(num > 0){
        bin.push_back(num % 2);
        num /= 2;
    }
    reverse(bin.begin(),bin.end());
    for(int val : bin){
        cout << val << " ";
    }
    return 0 ;
}    

// Q2. BIN TO DEC

    int bin;
    cout << "Enter binary number: ";
    cin >> bin;

    int decimal = 0;
    int power = 1;

    while(bin > 0) {

        int digit = bin % 10;

        decimal += digit * power;

        power *= 2;
        bin /= 10;
    }

    cout << "Decimal = " << decimal;

    return 0;
}



// Q 4 .power

    int x, n;
    cout << "Enter x and n: ";
    cin >> x >> n;

    int power = 1;

    for(int i = 1; i <= n; i++) {
        power *= x;
    }

    cout << x << "^" << n << " = " << power;

    return 0;
}

// count set bits
    vector<int> bin;

    int num;
    cout << "number = ";
    cin >> num;

    int count = 0;
    int bits;

    for(int i = 0; i < num; i++) {
      //input should be binary 0 or 1
        cout << "bits = ";
        cin >> bits;
        bin.push_back(bits);
    }

    for(int val : bin) {
        if(val == 1) {
            count++;
        }
    }

    cout << "count = " << count;

    return 0;
}

   
