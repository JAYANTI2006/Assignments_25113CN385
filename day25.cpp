#include <iostream>
#include <algorithm>
using namespace std;


// Merge Two Sorted Arrays

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int n1 = 4;
    int n2 = 4;

    int i = 0, j = 0;

    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            cout << arr1[i] << " ";
            i++;
        }
        else {
            cout << arr2[j] << " ";
            j++;
        }
    }

    while(i < n1) {
        cout << arr1[i] << " ";
        i++;
    }

    while(j < n2) {
        cout << arr2[j] << " ";
        j++;
    }

    return 0;
}




// Find Common Characters in Strings

    string s1, s2;
    cin >> s1 >> s2;

    int freq[256] = {0};

    for(int i = 0; i < s1.length(); i++) {
        freq[s1[i]] = 1;
    }

    for(int i = 0; i < s2.length(); i++) {
        if(freq[s2[i]] == 1) {
            cout << s2[i] << " ";
            freq[s2[i]] = 0;
        }
    }

    return 0;
}

// Sort Names Alphabetically

    int n;
    cin >> n;

    string names[100];

    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(names[j] > names[j + 1]) {
                swap(names[j], names[j + 1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
*/



// Sort Words By Length



    int n;
    cin >> n;

    string words[100];

    for(int i = 0; i < n; i++) {
        cin >> words[i];
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(words[j].length() > words[j + 1].length()) {
                swap(words[j], words[j + 1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}
*/
