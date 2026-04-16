#include <iostream>
#include <string>
using namespace std;

int getLength(string s) {
    int count = 0;
    while (s[count] != '\0') {
        count++;
    }
    return count;
}

void search(string text, string pattern) {
    int n = getLength(text);
    int m = getLength(pattern);
    bool found = false;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        if (j == m) {
            cout << "Pattern found at index " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Pattern not found" << endl;
    }
}

int main() {
    string text, pattern;

    cout << "Enter the text: "<<endl;
    getline(cin,text);

    cout << "Enter the pattern: ";
    getline(cin,pattern);

    search(text, pattern);

    return 0;
}
