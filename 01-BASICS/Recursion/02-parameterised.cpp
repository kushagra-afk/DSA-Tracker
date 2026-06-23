// 

#include <iostream>
using namespace std;

int func(int i, int sum) {
    if (i <0) {
        cout << sum;
        return 0;
    } else {
        func(i-1,sum+i) ;
    }
}