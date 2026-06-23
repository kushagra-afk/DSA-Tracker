// print 1 to n using recursion

#include <iostream>
using namespace std;

int f(int i, int n) {
    int sum = 0;

    if(i>n) {
        return 0;
    }
    return i;
    f(i,n);

}

int main() {
    int n;
    cin >> n ;
    f(1,n);

}

// Print N-1

#include <iostream>
using namespace std;

int f(int i, int n) {
    if (i<1) {
        return 0;
    }
    return i;
    f(i-1,n);
}

int main() {
    int n;
    cin>> n;
    f(n,n);
}







