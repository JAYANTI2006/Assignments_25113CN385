
#include <iostream> 
#include <vector>

using namespace std;

int main{

  // BUBBLE SORTING 
  int arr[] = { 5, 6 , 7 , 9 ,3 ,2 ,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int pass = 0 ; pass < len - 1; pass++){
        for(int sort = 0 ; sort < len - pass - 1 ; sort++){
            if(arr[sort] > arr[sort + 1]){
                int temp = arr[sort];
                arr[sort] = arr[sort + 1];
                arr[sort + 1] = temp;
            }
        }
    }

    for(int i = 0 ; i < len ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}    
