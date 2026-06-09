#include <iostream>
using namespace std;

int main() {
// *******
// *     *
// *     *
// *     *
// *     *
// *     *
// *******

   int sides;
   cout << " enter num of sides = ";
   cin >> sides;
   
   for(int i = 0; i < sides ; i++){
       for(int j = 0  ; j < sides; j++){
          if(i== 0 || i == sides-1){
              cout << "*";
          }
          else{
              if(j==0 || j== sides - 1){
                  cout << "*";
              }
              else{
                  cout << " ";
              }
          }
       }
      
       cout << endl;
   }

    return 0;
}
    

 //         *  
 //       *   *  
 //     *   *   *  
 //   *   *   *   *  
 // *   *   *   *   *  



  int rows;
   cout << " enter num of rows = ";
   cin >>rows;
   
   for(int i = 0; i < rows ; i++){
       for(int k = 0 ; k < rows - i - 1  ; k++){
           cout << "  ";
       }
       for(int j = 0  ; j <= i; j++){
           
          cout << " * " << " ";
       }
      
       cout << endl;
   }

    return 0;
}

   // *   *   *   *   *   *  
   //   *   *   *   *   *  
   //     *   *   *   *  
   //       *   *   *  
   //         *   *  
   //           *  

   int rows;
   cout << " enter num of rows = ";
   cin >>rows;
   
   for(int i = 0; i < rows ; i++){
       for(int k = 0 ; k <= i  ; k++){
           cout << "  ";
       }
       for(int j = rows - i   ; j > 0; j--){
           
          cout << " * " << " ";
       }
      
       cout << endl;
   }

    return 0;
}


//         1   
//       1   1   
//     1   2   1   
//   1   3   3   1   
// 1   4   6   4   1   

    int tr[100][100];
    int rows;
    cout << " enter num of rows = ";
   cin >>rows;
   
   for(int i = 0; i < rows ; i++){

       for(int j = 0  ; j <= i; j++){
           int sum;
           if(j==0 || j== i){
               tr[i][j] = 1;
           }
           
           else{              
               tr[i][j] =tr[i-1][j-1] + tr[i-1][j];
            }
           
       }   
   }
   
    for(int i = 0; i < rows ; i++){
       for(int k = 0 ; k < rows - i - 1  ; k++){
           cout << "  ";
       }
          for(int j = 0  ; j <= i; j++){
              cout << tr[i][j] << "   ";
          }
        cout << endl;
    }   
    return 0;
}


//    A
//   ABA
//  ABCBA
// ABCDCBA


 int rows;
    cout << " enter num of rows = ";
    cin >>rows;
   
  for(int i = 0; i < rows ; i++){
      for(int k = 0 ; k < rows - i - 1  ; k++){
          cout << "  ";
      }
      char ch = 'A';
      for(int j = 0  ; j < 2 * i + 1; j++){
          
          cout << ch << " ";
            if (j < i) {
                ch++;
            } 
            else{
                ch--;
            }
   
      }  
       
      cout << endl;
  }

    return 0;
}




    
