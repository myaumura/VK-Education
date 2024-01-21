#include <iostream>
#include <vector>

using namespace std;

struct book {
    int unique_number;
    string name;
    short int year;
};

//void insertion_sort(vector<int>&arr, int size) {
//    
//    for (size_t i = 1; i < size; i++) {
//        const int key = arr[i];
//        size_t j = i - 1;
//        
//        while (j >= 0 && arr[j] > key) {
//            arr[j + 1] = arr[j];
//            j = j - 1;
//        }
//        arr[j + 1] = key;
//    }
//}

int main() {
    
//    vector<int> array;
//    int size;
//    cin >> size;
//    array.reserve(size);
//    
//    for (int i = 0; i < size; i++) {
//        cin >> array[i];
//    }
//    
//    insertion_sort(array, size);
//    
//    for (int i = 0; i < size; i++) {
//        cout << array[i] << " ";
//    }
//   
    
    char A[2]= "T";
    int num = int(A[0]);
    cout << num;
    return 0;
}

