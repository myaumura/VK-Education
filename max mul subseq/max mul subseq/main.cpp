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
    
    int matrix [size][k];
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < k; j++) {
            if (i > j) {
                matrix[i][j] = 0;
            } else if (i == j) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = -1;
            }
        }
    }
    
    return 0;
}
