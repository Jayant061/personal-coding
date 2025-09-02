#include <iostream>
#include <vector>
using namespace std;
void seiveOfErastothness(int num);
void seiveOfEratostheness(int num);
int main(){
int input = 0;
cin>>input;
// seiveOfErastothness(input);
seiveOfEratostheness(input);
return 0;
}

bool isprime(int num){
    if(num==2) return true;
    for (int i = 2;i*i<=num;i++){
        if(num%i == 0) return false;
    }
    return true;
}

void seiveOfErastothness(int num){
        if(num == 1){
            return;
        }

        for(int i = 2;i<=num;i++){
            if(isprime(i)){
                cout<<i<<" ";
            }
        }
}

void seiveOfEratostheness(int num){
    vector<bool> isPrimes(num+1,true);
    for(int i = 2;i<=num;i++){
        if(isPrimes.at(i)){
            cout<<i<<' ';
            for(int j = i*i;j<=num;j = j+i){
                isPrimes.at(j) = false;
            }
        }
    }
    
}
