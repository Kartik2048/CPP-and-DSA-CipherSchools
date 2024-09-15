#include <iostream>
#include <string>
using namespace std;
int stringLength(const string &str) {
    return str.length();
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  
    cout << "Length of \"" << str << "\": " << stringLength(str) << endl;
    return 0;
}
