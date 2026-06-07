#include <iostream>
using namespace std;

int main (){

    //Q-1. prime no.

    int n;
    cout << " enter a no ";
    cin >> n;

    bool is_prime = 1;

    if(n <=1){
        cout << " prime no";
        return 1;
    }
    else{

        for( int i = 2 ; i < n  ; i++){
            if(n%i == 0){
                is_prime = 0 ;
                break;
            }
        }
    }
    if(is_prime == 0){
        cout << " not prime";
    }
    else{
        cout << " prime";
    }

    return 0;
}


// Q-2 . prime no in a range.

    int start;
    int j;

    cout << " enter the starting no \n";
    cin >> start;

    int end;

    cout << "\n enter the ending no \n";
    cin >> end;

    for(int i = start ; i <= end ; i++){
        bool is_prime = 1;

        if(i <=1){
           cout << " prime no";
           continue;
        }

        for( int j = 2 ; j <i ; j++){
            if(i%j == 0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime == 1){
            cout << i ;
            cout << "\n";
        }
    }
    return 0;
}


// Q-3. GCD of two no.

    int num1, num2 ;
    int gcd = 1 ;
    cout << " enter n1 = \nenter n2 = ";
    cin >> num1;
    cin >> num2 ;
    int minval = num1 > num2? num2 : num1;
            for( int i = 1 ; i <= minval ; i++){
                if(num2%i==0  && num1 %i == 0){
                    gcd = i;
                }
            }  

            cout << gcd << " is the gcd";
    
    return 0;
}

    
//   Q.4- lcm of 2 no
    int num1, num2 ;
    int gcd = 1 ;
    int lcm ;
    cout << " enter n1 = \nenter n2 = ";
    cin >> num1;
    cin >> num2 ;
    int minval = num1 > num2? num2 : num1;

            for( int i = 1 ; i < minval ; i++){
                if(num2%i==0  && num1 %i == 0){
                    gcd = i;
                }
            }  
            lcm = (num1 *num2)/gcd;
            cout << lcm;
    
    return 0;
}














