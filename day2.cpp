#include <iostream>
#include <cmath>
using namespace std;

int main(){
//Q1. SUM OF DIGITS
   int num;
   cout << " enter a number";
   cin >> num;
   int sum = 0 ;
   while(num > 0){
    int  d = num % 10 ;
    sum += d;
    num /=10;
   }
   cout << " sum = " << sum;
   return 0;
} 

//Q2.  reverse of a number
   int num;
   cout << " enter a number";
   cin >> num;
   int rev = 0 ;
   while(num > 0){
    int  d = num % 10 ;
    rev = rev * 10 + d;
    num /=10;
   }
   cout << " reverse = " <<  rev;
   return 0;
} 

// Q3. product of digits

   int num;
   cout << " enter a number";
   cin >> num;
   int pdt = 1;
   while(num > 0){
    int  d = num % 10 ;
    pdt *= d;
    num /=10;
   }
   cout << " product  = " << pdt;
   return 0;
} 


// Q 4.PALINDROME

   int num;
   cout << " enter a number";
   cin >> num;
   int n = num;
   int rev = 0 ;
   while(n > 0){
    int  d = n % 10 ;
    rev = rev * 10 + d;
    n /=10;
   }
   
//   n= num;
   if( rev == num){
    cout << " palindrome";
   }
   else{
    cout << " not palindrome";
   }
   return 0;
} 














   
