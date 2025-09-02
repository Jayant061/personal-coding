#include <iostream>
using namespace std;
int pow(int num, int power);
int powers(int num, int power);
int iterativeSoln(int num, int power);
int main()
{
    int num = 0;
    int power = 0;
    cin >> num >> power;
    cout << iterativeSoln(num, power) << endl;
    return 0;
}

int pow(int num, int power)
{
    if (power == 0)
        return 1;
    int multiplicatonCount = 0;
    int result = 1;
    while (multiplicatonCount < power)
    {
        result = result * num;
        multiplicatonCount++;
    }
    return result;
}

// efficient solution

int powers(int num, int pow)
{
    if (pow == 0)
        return 1;
    if(pow == 1) return num;
    const int halfPower = powers(num,pow/2);
    if(pow%2 ==0){
        return halfPower*halfPower;
    }
    return num*halfPower*halfPower;
}

int iterativeSoln(int num, int power){
    int result = 1;
    while(power>=1){
        if(power%2 !=0){
            result = result*num;
        }
        num = num*num;
        power = power/2;
    }
    return result;
}
