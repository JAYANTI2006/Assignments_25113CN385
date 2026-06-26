#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
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

//LOWER TO UPPER CASE

     string str = "hello";
     transform(str.begin(),str.end(), str.begin() ,(int(*)(int))toupper);
     cout << str;
     return 0;
}  

