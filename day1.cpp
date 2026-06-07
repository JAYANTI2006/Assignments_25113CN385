#include <iostream>
using namespace std;

//wap the sum of the digits of given numbers

int main(){
    int num;
    int sum =0;
    cout << "enter a number \n";
    cin >> num;
    
    while(num > 0){
        int digit = num %10;
        sum += digit;
        num /=10;
    }
    cout << "the sum is =  " << sum;   
    return 0;
    
}


//wap to reverse a program.


   int num;
   int rev =0;
   cout << "enter a number \n";
   cin >> num;

   while(num>0){
    int digit = num%10;
    rev = rev *10 +digit;
    num /=10;
   }

   cout << " the reveresed no is " << rev;


// find the multilication of digits of a number

   int num;
   int mult =1;
   cout << "enter a number \n";
   cin >> num;

   while(num>0){
    int digit = num%10;
    mult = mult * digit;
    num /=10;
   }

   cout << " the multiplictaion of digits are =  " << mult;
   return 0;
}



