#include <iostream>
using namespace std;
int factorialOfNumber(int number);
int main(){
int input = 0;
cout<<"Enter a number: ";
cin>>input;
cout<<"Factorial of "<<input<<" is: "<<factorialOfNumber(input)<<endl;
return 0;
}

int factorialOfNumber(int number){
    if(number == 0 || number ==1){
        return 1;
    }
    int answer = 1;
    while (number>1)
    {
        answer = answer*number;
        number--;
    }
    return answer;
}