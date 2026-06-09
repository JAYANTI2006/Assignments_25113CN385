#include <iostream>
#include <map> 
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  //linear search
    
    int a[50];
    int num;
   
    cout << " enter the size of the array = ";
    cin >> num;
    
    for(int i = 0 ; i < num ; i++){
        cout << " enter " << i << " element =";
        cin >> a[i];
        
    }
    int key;
    cout << " enter the key = ";
    cin >> key;
    int found = 0;
     
     for(int i = 0 ; i < num ; i++){
       if(a[i] == key){
           cout << " element found " << " at " << i << "index";
           found = 1;
           break;
       }
     }
     if(found == 1){
         cout << " \nfound";
         
     }
     else{
         cout << "\n not found";
     }
    
    return 0;
}

//frequency

   vector<int> v;
    int e;
    cout << " enter number of elemnt";
    cin >> e;


   for(int i = 0; i < e ; i++){
       int num;
      cout << "enter elemnt = ";
      cin >> num;
      v.push_back( num);
    }
    map<int,int> fr;

   for(int val:v){
      fr[val]++;
   }
   for(auto it : fr){
       cout << it.first << "-->" << it.second << endl;
   }
   return 0;
}

push_back( num);
    }

//second largest number

    vector<int> v;
    int e;
    cout << " enter number of elemnt";
    cin >> e;


   for(int i = 0; i < e ; i++){
       int num;
      cout << "enter elemnt = ";
      cin >> num;
      v.push_back( num);
    }
    sort(v.begin(),v.end());
    cout << v[e-2];
    return 0;
}    

// finding repeting elements
    vector<int> v;
    int e;
    cout << " enter number of elemnt";
    cin >> e;


   for(int i = 0; i < e ; i++){
       int num;
      cout << "enter elemnt = ";
      cin >> num;
      v.push_back( num);
    }
    map<int,int> fr;

   for(int val:v){
      fr[val]++;
   }
   
   for(auto it : fr){
       if(it.second > 1){
           cout << it.first << endl;
       }
   }
   return 0;
} 
    
    
    
    


    
   
