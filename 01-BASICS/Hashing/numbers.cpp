#include <iostream>
#include <vector>
using namespace std;

// Brute force 
int f(int num , vector<int> &arr) {
    int count=0;
    for (int i=0; i<num; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

// Hashing method 

int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr(n) ;
    for (int i=0; i<n; i++) {
        cout << "Enter " << i+1 << " element : " ;
        cin >> arr[i] ;
    }
    cout << endl;

    int hash[13] = {0} ;   //pre-compute
    for (int i =0; i<n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the times you want to search : ";
    cin >> q;

    while(q--) {
        int num ;
        cout << "Enter the element : ";
        cin >> num;

        // fetching
        cout << hash[num] << endl;
    }

    return 0;

}
