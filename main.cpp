#include <iostream>

using namespace std;

int operation(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int result = operation(num1, num2);
    cout << result << endl;
    return 0;
}