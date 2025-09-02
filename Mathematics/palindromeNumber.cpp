#include <iostream>
#include <stack>
using namespace std;
bool isPalindrome(int input);
int main()
{
    int input = 0;
    cout << "Enter a number: ";
    cin >> input;
    cout <<boolalpha<<isPalindrome(input) << endl;
    return 0;
}

bool isPalindrome(int input)
{
    int reversedNumber = 0;
    int originalNumber = input;

    while (input > 0)
    {
        int unitPlaceNumber = input % 10;
        input = input / 10;
        reversedNumber = reversedNumber * 10 + unitPlaceNumber;
    }
    return originalNumber == reversedNumber;
}