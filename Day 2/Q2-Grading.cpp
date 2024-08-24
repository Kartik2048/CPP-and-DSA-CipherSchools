#include <iostream>
#include <string>
using namespace std;
int main() {
    int g;
    cout << "Enter the score: ";
    cin >> g;
    if(g<=100&&g>=90){
        cout << "Grade: A";
    } else if(g<=89&&g>=80){
        cout << "Grade: B";
    }else if(g<=79&&g>=70){
        cout << "Grade: C";
    }else if(g<=69&&g>=60){
        cout << "Grade: D";
    }else if(g<=59&&g>=0){
        cout << "Grade: F";
    }else
        cout << "Invalid Score";
}
