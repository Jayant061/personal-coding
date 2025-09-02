#include <iostream>
#include <vector>
using namespace std;

vector<int> primeFactors(int input);
int main(){
int input = 0;
cout<<"Enter a number: ";
cin>>input;
vector<int> res = primeFactors(input);
for(auto c:res){
    cout<<c<<' ';
}
return 0;
}

bool isPrime(int input){
    for(int i = 2;i*i<=input;i++){
        if(input%i ==0){
            return false;
        }
    }
    return true;
}
vector<int> primeFactors(int input){
    vector<int>vec = {};
    vector<int> potentialPrimeFactors = {2};
    for(int i = 3;i<input/2;i++){
        if(isPrime(i)){
            potentialPrimeFactors.push_back(i);
        }
    }

    int primeNumbersIteratorIndex = 0;
    while(primeNumbersIteratorIndex<potentialPrimeFactors.size()){
        int const currentPrimeNumber = potentialPrimeFactors[primeNumbersIteratorIndex];
        if(input% currentPrimeNumber==0){
            vec.push_back(currentPrimeNumber);
            input = input/currentPrimeNumber;
        }
        else{
            primeNumbersIteratorIndex++;
        }
    }
    if(vec.size()==0){
        vec.push_back(input);
    }
    return vec;
}

void effiecientSolutionToPrimeFactors(int input){
    for(int i = 0; i*i<input;i++){
        
            while(input%i ==0){
                cout<<i<<" ";
                input = input/i;
            }
        }
}