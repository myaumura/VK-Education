//
//  main.cpp
//  vk212
//
//  Created by Kirill Gusev on 30.12.2023.
//

#include <iostream>

using namespace std;

int main() {
    
    string str;
    cin >> str;
    
    size_t len = size(str);
    
    for(int j = 0; j < len; j++) {
        for(int i = 0; i < size(str); i++) {
            if (str[i] == str[i+1]) {
                str.erase(i, 2);
            }
        }
    }
    cout << str << "\n";
    return 0;
}
