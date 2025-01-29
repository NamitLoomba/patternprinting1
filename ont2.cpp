#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int odd = 1;  // Initialize the first odd number

    for (int i = 1; i <= n; i++) {
        odd = 1;  // Reset odd for each row
        for (int j = 1; j <= i; j++) {
            cout << odd << " ";  // Print the current odd number
            odd += 2;  // Move to the next odd number
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
