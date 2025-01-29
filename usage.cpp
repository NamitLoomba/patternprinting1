#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    int z = 1;  // Start counting from 1 and continue incrementing
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print numbers
        for (int k = 1; k <= i; k++) {
            cout << z ;
            z++;  // Increment z after each print
        }
        cout << endl;
    }
    return 0;
}
