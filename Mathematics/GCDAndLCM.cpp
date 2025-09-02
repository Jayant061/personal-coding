#include <iostream>
using namespace std;
int optimisedGcd(int a, int b);
int gcd(int a, int b);
int lcm(int a, int b);
int main(){
int input = 0;
int input2 = 0;
cin>>input>>input2;
cout<<"GCD is: "<< optimisedGcd(input,input2)<<endl;
cout<<"LCM is: "<<lcm(input2,input)<<endl;
return 0;
}

int gcd(int a, int b){
    if(a%b ==0){
        return b;
    }
    else if(b%a ==0){
        return a;
    }
    int const minNumber = min(a,b);
    for(int i = minNumber;i>0;i--){
        if((a%i ==0) && (b%i ==0)){
            return i;

        }
    }
    return 1;
}

int optimisedGcd(int a, int b){
    if(b==0){
        return a;
    }
    return optimisedGcd(b,a%b);
}

int lcm(int a, int b){
    int const gcdAB = optimisedGcd(a,b);
    return (a*b)/gcdAB;
}