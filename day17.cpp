#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
  //MERGING TO TWO ARRAYS
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
