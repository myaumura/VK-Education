#include <iostream>

using namespace std;

int main() {
    
    int size = 0;
//    int* nums;
//    nums = new int[size];
//    int* result;
//    result = new int[size];
    
    int nums[20] = {0};
    int result[20] = {0};
    int null_counter = 0;
    
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    
    int i = 0, j = 0;
    
    for (int count = 0; count < size; count++) {
        if (nums[i] == 0) {
            null_counter++;
        }
    }
    
    while (i < size) {
        
        if (nums[i] == 0)  {
            result[null_counter] = 0;
            null_counter--;
        } else {
            result[j] = nums[i];
            j++;
        }
        i++;
    }
    
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    
    
    
    
    return 0;
}

