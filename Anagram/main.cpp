#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<char, int> dictionary_str1;
    map<char, int> dictionary_str2;
    
    int count = 0;
    string str1, str2;
    
    cin >> str1;
    cin >> str2;
    
    if (str1.size() != str2.size()) {
        cout << "false" << endl;
    }
    
    for (int i = 0; i < str1.size(); i++) {
        for (int j = 0; j < str1.size(); j++) {
            if (str1[i] == str1[j]) {
                count++;
            }
        }
        dictionary_str1[str1[i]] = count;
        count = 0;
    }
    
    for (int i = 0; i < str2.size(); i++) {
        for (int j = 0; j < str2.size(); j++) {
            if (str2[i] == str2[j]) {
                count++;
            }
        }
        dictionary_str2[str2[i]] = count;
        count = 0;
    }
    
    int flag = 0;

    for (int i = 0; i < str1.size(); i++) {
        if (dictionary_str1[str1[i]] != dictionary_str2[str1[i]]) {
            cout << "false" << endl;
            flag = 1;
            break;
        }
    }
    
    if (!flag) {
        cout << "true" << endl;
    }
    
    return 0;
}
