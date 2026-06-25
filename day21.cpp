#include <iostream>
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

