#include <iostream>
#include <cstdlib>
#include <unordered _set>
using namespace std;



int main()
{
  //MERGING OF TWO ARRAYS
    int n;
    cout << "enter the size of array one =";
    cin >> n;


    int *arr = (int*) malloc(n * sizeof(int));

    if(arr == NULL){
        return 1;
    }

    for(int i = 0 ; i  < n ; i++ ){
        cout << "element " << i << " = " ;
        cin >> arr[i];
        cout << endl;
    }

    int n1;
    cout <<" enter the size of array two = ";
    cin >> n1;

    int *arr1 = (int*) malloc(n1 * sizeof(int));
    if(arr1 == NULL){
        free(arr);
        return 1;
    }


    for(int i = 0 ; i  < n1 ; i++ ){
       cout << "element " << i << " = ";

        cin >> arr1[i];
        cout << endl;
    }

    int choose;
    cout << " choose the array in ehich u want to merge the other = ";
    cin >> choose;


    int len = (choose == 0 ? n : n1);
    int n_dummy = (choose == 0 ? n1 : n);

    int total_elements = len + n_dummy;

    int *arrdummy = (choose == 0 ? arr : arr1);
    int *arrcopied = (choose == 0 ? arr1 : arr);

    int *temp = (int*) realloc(arrdummy,total_elements* sizeof(arrdummy));
    if(temp == NULL){
        free(arr);
        free(arr1);
        return 1;
    }

    arrdummy = temp;

    int j =0;

    for(int i = len ; i < total_elements ; i++){
        arrdummy[i] = arrcopied[j];
        j++;
    }

    for(int i = 0 ; i < total_elements ; i++){
        cout << arrdummy[i] << " ";
    }

    cout << endl;
    
    free(arrdummy);
    free(arrcopied);

    
    return 0;
}    


//UNION OF ARRAYS

    int arr[] = {1, 3, 4, 5, 5, 1, 2, 4, 4};
    int arr1[] = {1, 2, 2, 23, 7, 7, 4, 5};
    unordered_set<int> ans;

    int len1 = sizeof(arr) / sizeof(arr[0]);
    int len2 = sizeof(arr1) / sizeof(arr1[0]);

    for (int i = 0; i < len1; i++) {
        ans.insert(arr[i]);
    }

    for (int i = 0; i < len2; i++) {
        ans.insert(arr1[i]);
    }

    for (int element : ans) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}



//INTERSECTION OF TWO ARRAYS

    int arr[] = {1, 3, 4, 5, 5, 1, 2, 4, 4};
    int arr1[] = {1, 2, 2, 23, 7, 7, 4, 5};
    unordered_set<int> ans;

    int len1 = sizeof(arr) / sizeof(arr[0]);
    int len2 = sizeof(arr1) / sizeof(arr1[0]);
    int small_len;
    int larg_len;

    int *dummy_arr;
    int *dummy1_arr;


    if (len1 == len2) {
        small_len = len1;
        larg_len = len2;

        dummy_arr = arr;
        dummy1_arr = arr1;

    } 
    else {
        small_len = (len1 > len2 ? len2 : len1);
        larg_len = (len1 > len2 ? len1 : len2);

        dummy_arr = (len1 < len2 ? arr : arr1);
        dummy1_arr = (len1 < len2 ? arr1 : arr);

    }    

    for (int i = 0; i < small_len; i++) {
        for (int j = 0; j < larg_len; j++) {
            if (dummy_arr[i] == dummy1_arr[j]) {
                    ans.insert(dummy_arr[i]);
                    break;
            }
        }
    }
    

    for (int element : ans) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}



