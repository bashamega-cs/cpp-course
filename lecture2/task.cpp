#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num1, num2, temp;
    
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Before Swap: " << num1 << " " << num2 << endl;
    // Swapping using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After Swap: " << num1 << " " << num2 << endl;
}
