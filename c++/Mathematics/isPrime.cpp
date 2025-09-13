#include <iostream>
using namespace std;
bool isPrime(int input);
int main(){
int input = 0;
cin>>input;
cout<<boolalpha<<isPrime(input)<<endl;
return 0;
}

bool isPrime(int input){
    for(int i = 2;i<=input/2;i++){
        if(input%i==0){
            return false;
        }
    }
    return true;
}