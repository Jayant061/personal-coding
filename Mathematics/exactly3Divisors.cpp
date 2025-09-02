#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num){
        if(num == 2) return true;
      for(int i = 2;i*i<=num;i++){
          if(num%i == 0) return false;
      }  
      return true;
    }
    int exactly3Divisors(int n) {
        int count = 0;
        // code here
        for(int i  = 2;i<=n;i++){
            double fact1 = floor(sqrt(i));
            double fact2 = i/fact1;
            if((fact1 == fact2) && (isPrime(int(fact1)))){
                count++;
            }
        }
        return count;
    }
int main(){
    cout<<exactly3Divisors(67)<<endl;
return 0;
}