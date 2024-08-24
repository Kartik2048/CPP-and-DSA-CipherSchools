#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    int largest;
    if (a>b&&a>c){
        largest=a;
    }
    else if(b>a&&b>c){
        largest=b;
    }
    else {
        largest=c;
    }
    cout << "The largest number is: " << largest;
}
