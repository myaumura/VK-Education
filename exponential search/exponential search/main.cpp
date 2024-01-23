#include <iostream>
#define SIZE 100

using namespace std;

int flag = 0;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x) {
            flag = 1;
            return m;
        }
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    
    return 0;
}

int exponential_search(int data[], int needle, int size) {
    int border = 1;
    int last_element = data[size-1];
    while ((border < last_element) && (data[border] < needle)) {
        border = border * 2;
        if (data [border] == needle) {
            return border;
        }
        if (border > last_element) {
            border = last_element;
        }
    }
    return binarySearch(data, border/2, border, needle);
}

int main() {
    
    int size = 0, num = 0;
    cin >> size;
    int nums[size];
    
    for(int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    
    cin >> num;
    
    int index = exponential_search(nums, num, size);
    
    if ((index == 0) && (!flag)) {
        cout << "-1" << endl;
    } else if (index == 0) {
        cout << index << " " << index + 1 << endl;
    } else if (index == size - 1) {
        cout << index - 1 << " " << index << endl;
    } else {
        cout << index << " " << index + 1 << endl;
    }
    return 0;
}
