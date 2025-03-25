#include <iostream>
using namespace std;

int main() {
    int a[10];
    
    for (int i = 0; i < 10; i++) { // Fix 1: Loop runs 0-9 (valid indices)
        cout << "Enter element " << i << ": ";
        cin >> a[i];
        cout << "You entered: " << a[i] << endl; // Fix 2: Print individual element
    }
    
    return 0;
}