#include <iostream>
#include <cmath>
using namespace std;
double termOfGP(int a, int b, int n) {
        // code here
        if(n ==1) return a;
        if(n== 2) return b;
        
        const double cr = double(b)/a;
        const double lastTermProgression = pow(cr,n-1);
        return a* lastTermProgression;
    }
int main(){
    cout<<termOfGP(2,3,6);
return 0;
}