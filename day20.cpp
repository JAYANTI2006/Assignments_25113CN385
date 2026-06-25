#include <iostream>
using namespace std;
int main (){


  // MULTIPLICATION OF 2 MATRICES
    int arr[80][80];
    int arr1[80][80];
    int ans[80][80] ={0};

    int r1,c1;
    int r2,c2;

    cout << " r1 = ";
    cin >> r1;
    cout << endl << " c1 = ";
    cin >> c1;

    cout << " r2 = ";
    cin >> r2;

    cout << endl << " c2 =";
    cin >> c2;

    cout << endl;
    cout << "first matrix" << endl;

    for(int i = 0 ; i < r1; i++){
        for(int j = 0 ; j < c1 ; j++){

            cout << " enter arr[" << i << "]" << "["  << j << "]";
            cin >> arr[i][j];
        }
    }

    cout << " second matrix" << endl;
    for(int i = 0 ; i < r2; i++){
        for(int j = 0 ; j < c2 ; j++){

            cout << " enter arr1[" << i << "]" << "["  << j << "]";
            cin >> arr1[i][j];
        }
    }


    if(c1 == r2){
        cout << " multiplication is possible" << endl;
        for(int i = 0 ; i < r1; i++){
            for(int j = 0 ; j < c2 ; j++){
                for(int k = 0 ; k < r2; k++ ){
                    ans[i][j] += arr[i][k] * arr1[k][j];
                }
            }
        }
    }
    else{
        cout << " multiplication is  not possible" << endl;
    }

    cout << "[";

    for(int i = 0 ; i < r1; i++){
        for(int j = 0 ; j < c2 ; j++){

            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << "]";
    return 0;
}    
    
    


   
}
