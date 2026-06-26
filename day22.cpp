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

// NO OF WORDS IN A SENTENCE

    char str[] = "  HI JOHN, LONG TIME NO SEE. WHAT'S GOING ON BRUH";
    int i = 0;
    int len = strlen(str);

    if(len == 0){
        std::cout << " empty string";
        return 1;
    }
    
    int count_words = 0;
    while(str[i] != '\0'){

        if(str[i] != ' ' && (str[i+1] == ' ' || str[i] == '\0') ){
            count_words++;
        }
        i++;

    }
    std::cout << " number of words in the given snetence = " << count_words;
    return 0;
}   

//FREQUENCY OF EACH LETTER

 char str[] = "ddpppjjjkkkkn";
   unordered_map<char,int> frequency;

   for(auto it : str){

     if(it == '\0'){
       continue;
     }

    frequency[it]++;

   }
   for(auto it : frequency){
    cout << it.first << "-->" << it.second;
    cout << endl;
   }

// REMOVING SPACES
    char str[] = "knowledge comes at a cost";
    char str1[100];
    int i = 0;
    int j=0;
    while(str[i] != '\0'){
        if(str[i] == ' '){
            i++;
            continue;
        }
        else{
            str1[j] = str[i];
        }
        i++;  
        j++;  
    }
    str1[j] = '\0'; 
    i=0;
    while(str1[i] != '\0'){
        std::cout << str1[i];
        i++;
    }
    return 0;
}


   return 0;
}   
