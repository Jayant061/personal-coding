#include <iostream>
#include <vector>
using namespace std;
class Pair
{
private:
    int first = 0;
    int second = 0;

public:
    // constructor
    Pair(int a, int b)
    {
        this->first = a;
        this->second = b;
    }
    int getFirst()
    {
        return this->first;
    }
    int getSecond()
    {
        return this->second;
    }
};
void divisorsOfnumber(int num);
int main()
{
    int input = 0;
    cin >> input;
    divisorsOfnumber(input);

    return 0;
}

void divisorsOfnumber(int num)
{

    //  naive solution
    // for (int i = 1; i <= num; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         cout << i << ' ';
    //     }
    // }
    // cout << endl;

    // effieientSOlution
    int secondloopStartIndex = 0;
    for(int i = 1;i*i<num;i++){
        if(num%i ==0){
            cout<<i<<" ";
        }
        secondloopStartIndex = i;
    }
    for(int i = secondloopStartIndex+1;i>=1;i--){
        if(num%i ==0){
            cout<<num/i<<" ";
        }
    }
    cout<<endl;

}