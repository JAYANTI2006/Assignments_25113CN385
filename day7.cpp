#include <iostream>
#include <cmath>
using namespace std;




// Q1. FACTORIAL
int factorial(int num){
    if(num == 0){
        return 1;
    }
    else{
        return num * factorial(num-1);
    }
}
int main(){
    int x;
    cout << " number ";
    cin >> x;
    int result = factorial(x);
    cout << result;
    return 0;
}
   


// Q2. FIBONNACI
int fibo(int num){
    if(num == 0){
        return 0;
    }
    else if (num == 1){
        return 1;
    }
    else{
        return fibo(num-1)+fibo(num-2);
    }
}
int main(){
    int x;
    cin >> x;
    for(int i = 0; i<x;i++){
        int result = fibo(i);
        cout <<  " " << result;
    }
    return 0;
}


// Q3. sum
   int summ( int num){

    if(num == 0){
       return 0;
    }
    else{
       return num%10 + summ(num/10);
    }
}
int main(){   
    int num ;
    cout << " enter the number ";
    cin >> num;
    int result = summ(num);
    cout << result;
    return 0;
}

 
// Q4. revrse
int reverse(int num, int len){
    if(num == 0){
        return 0;
    }
    else{
        return (num%10)*pow(10,len-1) +reverse(num/10,len-1) ;
    }
}
int main(){   
    int num ;
    cout << " enter the number ";
    cin >> num;
    int num1 = num;
    
    int len = 0;
    while(num1> 0){
        num1 /=10;
        len++;
    }
   num1= num;
    int result = reverse(num,len);
    cout << result;

    return 0;
}

