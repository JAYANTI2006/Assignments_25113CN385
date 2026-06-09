#include <iostream>
using namespace std;

int main() {
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
   int rows;
   cout << " enter num of rows = ";
   cin >> rows;
   
   for(int i = 0; i < rows ; i++){
       for(int j = rows - i  ; j > 0 ; j--){
           cout << "*" << " " ;
       }
       cout << endl;
   }

    return 0;
}


// 1 2 3 4 5 6 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 


  int rows;
   cout << " enter num of rows = ";
   cin >> rows;
   
   for(int i = 0; i < rows ; i++){
       for(int j = 1  ; j <= rows - i ; j++){
           cout << j << " " ;
       }
       cout << endl;
   }

    return 0;
}

// A 
// B B 
// C C C 
// D D D D 
// E E E E E 



 int rows;
   cout << " enter num of rows = ";
   cin >> rows;
   char ch = 'A'; 
   
   for(int i = 0; i < rows ; i++){
       for(int j = 0  ; j <= i; j++){
           cout << ch << " " ;
       }
        ch++;
       cout << endl;
   }

    return 0;
