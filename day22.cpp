#include <iostream>
#include<\ <cstring>
using namespace std;
int main(){

  //PALINDROME
  
   char str[] = "w mu m w";
   int i = 0;
   int j = strlen(str) -  1;

   int is_palindrome = 1;
   while(i < j){
    if(str[i] == ' '){
        i++;
        continue;
    }
    else if(str[j] == ' '){
        j--;
        continue;
    }
    else if(str[i] != str[j]){
        is_palindrome = 0;
        break;
    }
    i++;
    j--;
   }
   if(!is_palindrome){
    std::cout << "It's not a palindrome";
   }
   else{
    std::cout << " It's a palindrome";
   }
   return 0;
}   

}
