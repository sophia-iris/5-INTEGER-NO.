#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3, number4, number5;
    float average;
    int count = 5;

    cout << "Enter 1st Integer: ";
    cin >> number1;
    cout << "Enter 2nd Integer: ";
    cin >> number2;
    cout << "Enter 3rd Integer: ";
    cin >> number3;
    cout << "Enter 4th Integer: ";
    cin >> number4;
    cout << "Enter 5th Integer: ";
    cin >> number5;

    average = (number1 + number2 + number3 + number4 + number5) / count;
    cout << "The average is: " << average << endl;
    return 0;
}
