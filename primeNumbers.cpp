#include<iostream>
using namespace std;

int main () {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 2;

    while(i <= n/2) {
        if(n % i == 0) {
            cout << "Not Prime\n";
            return 0;
        }
        i++;
    }

    cout << "Is Prime\n";

    return 0;
}