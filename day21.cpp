#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
  // LENGTH OF A STRING
    string str = "hello";
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    cout << " count of letters  = " << count;
    return 0;
} 


//REVERSE OF A STRING

    vector<string> str = {"h","e","l","l","o"};
    reverse(str.begin(),str.end());

    for(auto val : str){

        cout << val << " ";

    }
    
    return 0;
} 

