#include <iostream>
using namespace std;
int getCountOfDigits(int number);
int main()
{
    int input = 0;
    cout << "Enter a number: ";
    cin >> input;
    cout << "The number of digits in " << input << " is: " << getCountOfDigits(input) << endl;
}

int getCountOfDigits(int number)
{
    int count = 0;
    while (number != 0)
    {
        count++;
        number = number / 10;
    }
    return count;
}