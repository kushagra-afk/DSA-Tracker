#include <iostream>
using namespace std;

// sum from 1 to n
int func(int n) {
    if (n == 0) return 0;
    return n+func(n-1) ;
}


// factorial 
int fact(int n) {
    if (n<=1 ) {
        return 1;
    } else {
        return n * fact(n-1) ;
    }
}

int main () {
    int n ;
    cout << "Enter a number" ;
    cin >> n;

    cout << "Sum till 1 to " << n << " is " << func(n) << endl ;
    cout << "factorial of " << n << " is " <<fact(n) << endl ;
}


