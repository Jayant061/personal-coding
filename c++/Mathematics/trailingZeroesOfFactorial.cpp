#include <iostream>
using namespace std;
int trailingZeroes(int number);
int countZeroes(int input);
int main()
{
    int input = 0;
    cin >> input;
    // cout << trailingZeroes(input)<<endl;
    cout << countZeroes(input) << endl;
    return 0;
}
int trailingZeroes(int input)
{
    // calculating factorial
    int fact = 1;
    while (input != 0)
    {
        fact = fact * input;
        input--;
    }
    int zeroes = 0;
    while (fact % 10 == 0)
    {
        zeroes++;
        fact = fact / 10;
    }
    return zeroes;
}

// optimized solution
//  approach: each 10 is made up of 5 and its multiple and even number

int countZeroes(int input)
{
    int current5sMultiple = 5;
    int answer = 0;
    while (current5sMultiple <= input)
    {
        answer = answer + input / current5sMultiple;
        current5sMultiple = current5sMultiple * 5;
    }
    return answer;
}