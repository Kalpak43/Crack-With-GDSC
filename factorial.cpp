#include<iostream>
using namespace std;

int main () {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    int factorial = 1;

    while(i <= n) {
        factorial *= i;
        i++;
    }

    cout << factorial << endl;

    return 0;
}