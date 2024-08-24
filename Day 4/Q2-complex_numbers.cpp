#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, b;
    cout << "Complex Number 1: \nReal :";
    cin >> a;
    cout << "Imaginary: ";
    cin >> b;
    int c, d;
    cout << "Complex Number 2: \nReal :";
    cin >> c;
    cout << "Imaginary: ";
    cin >> d;
    cout << "Addition: " << a+c << " + " << b+d << " i "<< endl;
    if (b-d>=0){
        cout << "Subtraction: " << a-c << " + " << b-d << "i "<< endl;
    } else {
        cout << "Subtraction: " << a-c << " - " << -b+d << "i "<< endl;
    }
}
