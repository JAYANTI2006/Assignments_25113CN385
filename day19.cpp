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
