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



// Q3.two sum
   vector<int> v = {11,4,7,1,9};
   int avail = 0;
   int target = 32;
   for(int i = 0 ; i< v.size();i++){
    for(int j = i+1 ; j <v.size() ; j++){
        int sum = 0;
        sum += v[i] + v[j];
        if(sum == target){
            cout << v[i] << "," << v[j] << endl; 
            avail = 1;
        }
    }
   }
   if(avail == 1){
        cout << "\n element pair found";
   }
   else{
       cout << "\n element pair not found"; 
   }
   return 0;
} 

// Q4.remove repetitive element
   vector<int> v={1,2,2,3,1,9,8,7,9,7,8};
   vector<int> v1;
   sort(v.begin(),v.end());
   for(int i = 0 ; i < v.size() ; i++){
        if(v[i] != v[i+1]){
           v1.push_back(v[i]);
        }
        else{
            continue;
        }
    }
    for(int i = 0 ; i < v1.size() ; i++){
        cout << v1[i] << " ";
    }
   return 0;
}
