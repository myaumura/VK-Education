#include <iostream>
#define MAX_SIZE 100
using namespace std;

int main() {
   
    int arr[MAX_SIZE] = {0};
    int size = 0;
    int num = 0;
    
    cin >> size;
    
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cin >> num;
    
    int left = 0;
    int right = size - 1;
    int mid = 0;
    
    while (left < right) {
        mid = (left + right) / 2;
       if (arr[mid] > num) {
            right = mid - 1;
        } else if (arr[mid] < num) {
            left = mid + 1;
        } else {
            cout << "true";
            break;
        }
    }

}
