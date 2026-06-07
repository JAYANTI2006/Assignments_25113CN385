#include <iostream> 
using namespace std;
// Q1 . sum of two numbers

int sum1(int a , int b){
    return a+b;
}
int main(){
    int x, y;
    cout << " enter the two no = ";
    cin >> x;
    cin  >> y;
    int result = sum1(x,y);
    cout << " result = " << result << endl;
    return 0;
}

//Q 2. max of two no

void max(int a , int b){
    if(a > b ){
        cout << a << " is greater than " << b;
    }
    else{
         cout << b << " is greater than " << a;

    }
}
int main(){
    int x, y;
    cout << " enter the two no = ";
    cin >> x;
    cin  >> y;
    max(x,y);
    return 0;
} 


//Q3. prime no fumction

int prime(int a){
    int isprime =1;

    if(a <=1){
        cout << " not prime";
        isprime = 0;
        return 1;
    }
    for(int i = 2 ; i < a ; i++){
        if( a%i == 0){

            isprime = 0;
            break;

        }
    }

    if(isprime == 0){
        cout << " non prime number";
    }
    else{
        cout << " prime number";
    }
    return isprime;
    
}

int main(){
    int x;
    cout << " enter a number = ";
    cin >> x;
    prime(x);
    return 0;
}

//Q4. factorial by function 

int factorial(int num){
    if(num==0){
        return 1;
    }
    else{
        return num * factorial(num - 1);
    }

}

int main(){
    int x;
    cout << " enter a no  = ";
    cin >> x;
    int result = factorial(x);
    cout << " factorial = " << result;
    return 0;
}


