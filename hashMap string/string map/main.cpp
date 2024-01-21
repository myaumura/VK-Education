#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<char, int> dictionary;
    
    int count = 0, max = 0;
    string input;
    
    cin >> input;
    
    for (int i = 0; i < input.size(); i++) {
        for (int j = 1; j < input.size(); j++) {
            if (input[i] == input[j]) {
                count++;
            }
        }
        dictionary[input[i]] = count;
        count = 0;
    }
    
    for (int i = 0; i < input.size(); i++) {
        if (dictionary[input[i]] > max) {
            max = dictionary[input[i]];
        }
    }
    
    cout << max << endl;
    
    return 0;
}
