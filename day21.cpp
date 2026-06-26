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


// NO OF VOWEL AND CONSONANT
//NO NAMESPACE 


   char str[] = "hello uncle john!";
   int count_vowel = 0;
   int count_consonant= 0;

   int len = strlen(str);

   for(int i = 0 ; i < len ; i++){

    char ch = tolower(str[i]);

    if(ch == 'a'||
    ch == 'e'|| ch =='i' ||
    ch == 'o' || ch=='u'){
        count_vowel++;
    }

    else if(isalpha(ch)){
        count_consonant++;
    }

   } 

   std::cout << " numner of vowels = " << count_vowel;
   std::cout << " number of consonents = " << count_consonant;

   return 0;

    
}

//LOWER TO UPPER CASE

     string str = "hello";
     transform(str.begin(),str.end(), str.begin() ,(int(*)(int))toupper);
     cout << str;
     return 0;
}  

