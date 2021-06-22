#include <iostream>
using namespace std;
int main(){
    int n, nf;
    long long fib[61];
    cin >> n;
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= 60; i++){
            fib[i] = fib[i-2] + fib[i-1];
    }
    
    for(int j = 0; j < n; j++){
            cin >> nf;
            cout << "Fib(" <<nf<< ") = " << fib[nf] << endl;
    }
    return 0;
} 