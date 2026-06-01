#include <iostream>
using namespace std;

int main(){
// FIBONACCI SERIES 
//     int first = 0 ;
//     int second = 1;
//     int next;
//     int num ;
//     cout << " enter the nnumber ";
//     cin >> num;
//     while(num > 0 ){
//         cout << first << " ";
//         next = first + second;
//         first = second ;
//         second = next ;
//         num--;
//     }
//     return 0 ;
// }


//Q-2. NTH TERM OF FIBONACCI SERIES
//     int first = 5 ;
//     int second = 7;
//     int next;
//     cout << " enter the no of terms ";
//     int num ;
//     cin >> num;
//     cout << "\n enter the index ";
//     int key ;
//     cout << " enter the nnumber ";
//     cin >> key;

//         if(key == 1){
//             cout << first;
//         }
//         else if(key == 2){
//             cout << second;
//         }
//         else{
//             for(int i = 3 ; i <= key ; i++){
//                 next = first + second;
//                 first = second ;
//                 second = next ;

//             }
//             cout << next;

//         }
//     return 0 ;
// }



// POWER MANUALLY.
//    int base;
//    cout << " base = ";
//    cin >> base;

//    int power;
//    cout << " \n powe = ";
//    cin >> power;

//    int p = 1;

//    for(int i = 1 ; i <= power ; i++){
//     p *= base;
//    }
//    cout << p;
//    return 0 ;

// }



//Q-3. ARMSTRONG NUMBER
//    int num;
//    cout << " enter a number";
//    cin >> num ;

//    int arm = num;

//    int power =0;
//    int sum = 0;
//    //length of the number
//    while( arm > 0 ){
//     arm /=10;
//     power ++;
//    }

//    arm = num;

//    while(num > 0){

//     int base = num %10;
//     int p = 1;


//    for(int i = 1 ; i <= power ; i++){
//     p *= base;
//    }
//    sum +=p;
//    num /= 10;
//   }

//   num = arm;
//   if( sum == arm ){
//     cout << " armstrong number";
//   }
//   else{
//     cout << " not armstrong ";
//   }
//   return 0 ;
// }


//Q-4.  armstrong number in a given range 

//    int start;
//    cout << " enter the start = ";
//    cin >> start;

//     int end ;
//     cout << " enter the end ";
//     cin >> end;

//     for(int num = start ; num <= end ; num++){
//            int arm = num;
//            int power =0;
//            int sum = 0;
//          //length of the number
//          while( arm > 0 ){
//          arm /=10;
//          power ++;
//         }
//         arm = num;
//         while(num > 0){
//             int base = num %10;
//             int p = 1;
//             for(int i = 1 ; i <= power ; i++){
//                 p *= base;
//             }
//             sum +=p;
//             num /= 10;
//         }

//         num = arm;
//         if( sum == arm ){
//             cout << "\n" << sum;
//         }
//         else{
//             continue;
//         }
//     }
//     return 0 ;
// }  





   

