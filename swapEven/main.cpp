//
//  main.cpp
//  swapEven
//
//  Created by Kirill Gusev on 24.12.2023.
//

#include <iostream>

using namespace std;

int main(void) {
    
    int n = 0;
    cin >> n;
    
    int array[20] = {0};
    
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    int evenIndex = 0;
    
    int i = 0;
    while (i < n) {
        
        if (array[i] % 2 == 0) {
            swap(array[i], array[evenIndex]);
            evenIndex++;
        }
        i++;
    }
    
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    
    
    return 0;
}
