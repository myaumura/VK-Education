#include <iostream>

using namespace std;



int main() {

    int size = 0, k = 0, column = 0, row = 0;
    
    cin >> size;
    
    int nums[size];
    
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    
    cin >> k;
    
    int result = 1;
    
    for (int i = size - 1; i >= size - k; i--) {
        result *= nums[i];
    }
    
    cout << result << endl;
    
    return 0;
}
