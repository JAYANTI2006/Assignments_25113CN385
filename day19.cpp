#include <iostream>
using namespace std;
int main(){

  //ADDITION OF MATRICES
    int arr[34][56] = {{1, 2, 3}, {4 ,5,6 },{7,43,56}};
    int arr1[30][30] = { {8, 9 , 10}, {11 , 12 ,13}, {14,34, 56}};

    int ans[45][45];
    
    int order_arr = 3;
    int order_arr1 = 3; 

    if(order_arr == order_arr1){
       
        for(int i = 0 ; i < order_arr ; i++){
            for(int j = 0 ; j< order_arr ; j++){

                int sum = 0 ;
                sum += arr[i][j] + arr1[i][j];
                ans[i][j] = sum;
            }
        }

    }
    else{
        cout << " addition not possible";
    }

    cout << "["; 

    for(int i = 0 ; i < order_arr ; i++){
        for(int j = 0 ; j < order_arr ; j++){

            cout <<  ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << "]";
    
    return 0;
} 



// SUBTRACTION OF MATRICES

    int arr[34][56] = {{1, 2, 3}, {4 ,5,6 },{7,43,56}};
    int arr1[30][30] = { {8, 9 , 10}, {11 , 12 ,13}, {14,34, 56}};

    int ans[45][45];
    
    int order_arr = 3;
    int order_arr1 = 3; 

    if(order_arr == order_arr1){
       
        for(int i = 0 ; i < order_arr ; i++){
            for(int j = 0 ; j< order_arr ; j++){

                int sub;
                sub = arr[i][j] - arr1[i][j];
                ans[i][j] = sub;
            }
        }

    }
    else{
        cout << " subtraction  not possible";
    }

    cout << "["; 

    for(int i = 0 ; i < order_arr ; i++){
        for(int j = 0 ; j < order_arr ; j++){

            cout <<  ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << "]";

    return 0;
} 



//TRANSPOSE

    int arr[34][56] = {{1, 2, 3}, {4 ,5,6 },{7,43,56}};
    
    int TRANSPOSE[45][45];
    
    int order_arr = 3;
    

   
       
    for(int i = 0 ; i < order_arr ; i++){
        for(int j = 0 ; j< order_arr ; j++){
            TRANSPOSE[i][j] = arr[j][i];
            }
        }
    cout << "["; 

    for(int i = 0 ; i < order_arr ; i++){
        for(int j = 0 ; j < order_arr ; j++){

            cout <<  TRANSPOSE[i][j] << " ";
        }
        cout << endl;
    }
    cout << "]";

    return 0;
} 

//sum of diagonal elemnts

    int arr[34][56] = {{1, 2, 3}, {4 ,5,6 },{7,43,56}};
    int order_arr = 3;
    int sum = 0;
    
    for(int i = 0 ; i < order_arr ; i++){
        for(int j = 0 ; j< order_arr ; j++){

            if(i == j){
                sum += arr[i][j] ;
            }
        }
    }

    cout << " sum of diagonal elements = " << sum; 

    return 0;
} 


   
