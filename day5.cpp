#include <iostream>
using namespace std;

int main() {

 //Q1. PERFECT NUMBER
   int num;
   cout << " enter a number =";
   cin >> num;
   int sum = 0;
   for(int i = 1; i< num ; i++){
       if(num % i == 0){
           sum += i;
       }
   }
   if(sum == num){
       cout << "perfect number";
   }
   else{
       cout << " not perfect";
   }
return 0;
} 
 

 //Q2.  strong number

   int num;
   cout << " enter a number";
   cin >> num;
  
   
   int n = num;
   int sum= 0 ;
   
    if(n == 0){
       sum = 1;
   }
   
   while(n > 0){
       
    int  d = n % 10;
    
    int fact = 1;
    while(d>1){
        fact *= d;
        d--;
    }
    sum +=fact;
    n /= 10;
    
   }
   if( sum == num){
    cout << " strong";
   }
   else{
    cout << " weak";
   }
   return 0;
} 


// Q3. FACTORS OF A NUMBER

   int num;
   cout << " enter a number =";
   cin >> num;

   for(int i = 1; i< num ; i++){
       if(num % i == 0){
           cout << "factor = " << i << endl;
       }
   }
  
return 0;
} 

// Q4. LARGEST PRIME FACTOR

    int num;
    cout << "Enter a number = ";
    cin >> num;

    int max = -1;

    for(int i = 1; i <= num; i++) {

        if(num % i == 0) {

            int isprime = 1;

            if(i == 1) {
                continue;
            }

            for(int j = 2; j < i; j++) {
                if(i % j == 0) {
                    isprime = 0;
                    break;
                }
            }

            if(isprime) {
                max = i;
            }
        }
    }

    cout << "Greatest prime factor = " << max;

    return 0;
}



