//#include <iostream>
//    
//using namespace std;
//
//int main() {
//
//    int size = 0;
//    int* nums;
//    nums = new int[size];
//    int num = 0;
//    int count = 0;
//
//    cin >> size;
//    for (int i = 0; i < size; i++) {
//       cin >> nums[i];
//    }
//
//    cin >> num;
//
//    for (int i = 0; i < size; i++) {
//        if (num == nums[i]) {
//            count++;
//        }
//    }
//
//    int result = size - count;
//    cout << result << "\n";
//    
//    return 0;
//}

#include <iostream>

using namespace std;

int main() {
    int n, k, elem, ans = 0;
    cin >> k;
    int arr[k];

    for (int i = 0; i < k; i++) {
        cin >> n;
        arr[i] = n;
    }

    cin >> elem;
    
    for (int i = 0; i < k; i++) {
        if (arr[i] != elem) {
            ans += 1;
        }
    }
    cout << ans;
}
