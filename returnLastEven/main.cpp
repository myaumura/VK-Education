#include <iostream>
#include <stack>

using namespace std;

int main() {
    
    stack<int> stack;
    int num = 0, size = 0;
    
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cin >> num;
        stack.push(num);
    }
    
    while (stack.top() % 2 != 0) {
        stack.pop();
        if (stack.empty()) {
            break;
        }
    }
    
    if (stack.empty()) {
        cout << "-1" << "\n";
    } else {
        cout << stack.top() << "\n";
        
    }
    return 0;
}
