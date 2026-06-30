#include <iostream>
using namespace std;

int main() {
  //first non repeating characters
    string str;
    cin >> str;

    int freq[256] = {0};

    for(int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    for(int i = 0; i < str.length(); i++) {
        if(freq[str[i]] == 1) {
            cout << str[i];
            return 0;
        }
    }

    cout << -1;
    return 0;
}


//Write a program to Find first repeating

//character.
    string str;
    cin >> str;

    int freq[256] = {0};

    for(int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    for(int i = 0; i < str.length(); i++) {
        if(freq[str[i]] > 1) {
            cout << str[i];
            return 0;
        }
    }

    cout << -1;
    return 0;
}


//anagram
    string s1, s2;
    cin >> s1 >> s2;

    if(s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    int freq[256] = {0};

    for(int i = 0; i < s1.length(); i++) {
        freq[s1[i]]++;
    }

    for(int i = 0; i < s2.length(); i++) {
        freq[s2[i]]--;
    }

    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";
    return 0;
}

//max occuring element


    string str;
    cin >> str;

    int freq[256] = {0};

    for(int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    int maxi = 0;
    char ans;

    for(int i = 0; i < str.length(); i++) {
        if(freq[str[i]] > maxi) {
            maxi = freq[str[i]];
            ans = str[i];
        }
    }

    cout << ans;
    return 0;
}
