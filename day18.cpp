
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

//SELECTION SORT

int arr[] = { 5, 6 , 7 , 9 ,3 ,2 ,1};
int len = sizeof(arr)/sizeof(arr[0]);

for(int i = 0; i < len ; i++){

  int min_idx = i;

  for(int j = i + 1 ; j < len ; j++){
    if(arr[min_idx] > arr[j]){
      min_idx = j;
    
    }  
    int temp = arr[min_idx];
    arr[min_idx] = arr[j];
     arr[j] = temp;
  
    }
  }  
  for(int i = 0 ; i < len ; i++){
        cout << arr[i] << " ";
    }
    return 0;
} 
