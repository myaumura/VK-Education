#include <iostream>
#include <map>

using namespace std;

int main() {
    
    map<int, int> dictionary;
    
    int size = 0, count = 0, max = 0;
    
    cin  >> size;
    
    int array[size];
    
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < size; i++) {
        for (int j = 1; j < size; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        dictionary[array[i]] = count;
        count = 0;
    }
    
    for (int i = 0; i < size; i++) {
        if (dictionary[array[i]] > max) {
            max = dictionary[array[i]];
        }
    }
    
    if (max >= size / 2) {
        for (int i = 0; i < size; i++) {
            if (dictionary[array[i]] == max) {
                cout << array[i] << endl;
                break;
            }
        }
    } else {
        cout << "-1" << endl;
    }
    
    return 0;
}
