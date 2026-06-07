#include <iostream> 
#include <unordered_map>
#include <vector>
#include <map>
#include <cctype>
#include <algorithm>
using namespace std;
int main(){


    int a[50] = {3,6,9};
    //  Q 1. missing num  of range 1 to 9 ;
    int num;
    int first = 1;// first element of given range 

    if(a[0] != first){
        int n;
        n= a[0] - first;
        int k = a[0];//3
        for(int j = 0 ; j < n ; j++){
            int missing = k - 1;// 2 , 1
            k = missing;// 2,1
            cout << " missing = " << missing << endl;
        } 


    }

    for(int i = 0; i < 2 ; i++){

        if(a[i] + 1 == a[i+1]){
            continue;
        }
        else{
            num = a[i+1] - a[i] - 1;
            int k ;
            k = a[i];
            for(int j = 0 ; j < num ; j++){

                int missing = 0 ;

                missing += (k+1);

                k = missing;

                cout << "missing no  = " << missing << endl;

            }
        }
    }
    return 0;
} 

//Q-2. frequency of elements
   vector<int> v = {1, 1,4,4,7,8,9,9,2,2,2};
   map <int,int> mp;
   sort(v.begin(),v.end());
   for(int val : v){
        mp[val]++;
    }    
   
   for(auto it : mp){
    cout << it.first << "-->" << it.second << endl;
   }
    return 0;   
}  



