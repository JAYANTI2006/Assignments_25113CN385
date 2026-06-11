#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
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

