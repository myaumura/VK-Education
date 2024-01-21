//
//  main.cpp
//  vk231
//
//  Created by Kirill Gusev on 30.12.2023.
//

#include <iostream>

using namespace std;

int main() {
   
    int n = 0, num = 0;
    int nums[20];
    
    for(int i = 0; i < n; i++) {
        nums[i] = 0;
    }
    
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cin >> num;

    int index, min, flag = 1;
    index = abs(nums[0] - num);
    min = nums[0];
    
    for(int i = 0; i < n; i++) {
        if (nums[i] == num) {
            flag = 0;
            cout << i;
            break;
        } else if (abs(nums[i] - num) < index) {
            index = abs(nums[i] - num);
            min = nums[i];
        }
    }
    
    if (flag) {
        for (int i = 0; i < n; i++) {
            if (nums[i] == min) {
                cout << i + 1;
                break;
            }
        }
    }
    return 0;
}
