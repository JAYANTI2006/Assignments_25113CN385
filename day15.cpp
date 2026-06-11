#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

 //left shift
    vector<int> v = {1, 2, 3, 4, 5, 6};
    
    unsigned int space; 
    cout << " space = ";
    cin >> space;
 
    space = space % v.size(); 
   
    for(int k = 0; k < space ; k++){
        int start = v[0];
        for(int i = 0 ; i < v.size() - 1 ; i++){
            v[i] = v[i+1];
        }
        v[v.size() - 1] = start;
    }

    for(int val : v) cout << val << " ";
    return 0;
}

  // right shift
    vector<int> v = {1,2,3,4,5,6};
    int  end;
    int space;
    cout << " space = ";
    cin >> space;
    space = space % v.size();
    for(int k = 0; k < space ; k++){
         end = v[v.size() - 1];
        for(int i =  v.size() - 1 ; i > 0 ; i--){
                v[i] = v[i-1];
        }
         v[0]= end;
    }
    for(int val : v){
        cout << val << " ";
    }
    
    return 0;
}


// shifting all zeroes to the end
    vector<int> v = {5, 12, 3, 0, 0, 0};
    int k = 0;
    for(int i = 0 ; i < v.size(); i++){
        if(v[i] == 0){
            k++;
        }
    }
    
    while(k > 0){
        for(int i = 0 ; i < v.size()- 1; i++){
            if(v[i] == 0 ){
                if(v[i+1] != 0){
                    swap(v[i],v[i+1]);
                }
           }  
        
        }
        k--;
    }    
        
        for(int val : v){
            cout << val << " ";
        }
        
    
    return 0;
}

   
