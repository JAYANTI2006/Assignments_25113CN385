#include <iostream>
#include <sstream>
using namespace std;

int main() {
  //Write a program to Check string rotation.
    string s1, s2;
    cin >> s1 >> s2;

    if(s1.length() != s2.length()) {
        cout << "Not Rotation";
        return 0;
    }

    string temp = s1 + s1;

    if(temp.find(s2) != string::npos)
        cout << "Rotation";
    else
        cout << "Not Rotation";

    return 0;
}

//Compress a String


    string str;
    cin >> str;

    int count = 1;

    for(int i = 0; i < str.length(); i++) {

        while(i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        cout << str[i] << count;
        count = 1;
    }

    return 0;
}

// Find Longest Word

    string str;
    getline(cin, str);

    string word;
    string ans;

    stringstream ss(str);

    while(ss >> word) {
        if(word.length() > ans.length()) {
            ans = word;
        }
    }

    cout << ans;

    return 0;
}

//Write a program to Remove duplicate

//characters.

    string str;
    cin >> str;

    bool visited[256] = {false};

    for(int i = 0; i < str.length(); i++) {

        if(!visited[str[i]]) {
            cout << str[i];
            visited[str[i]] = true;
        }
    }

    return 0;
}
