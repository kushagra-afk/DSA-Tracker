// Time Complexity = 0(N^2) - average and worst case
// best case - everything in correct order - 0(N)


#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n){
    for (int i = n - 1; i >= 0; i--) {
        int didSwap =0;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0) {
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr(n) ;
    for (int i=0; i<n; i++) {
        cin >> arr[i] ;
    }

    bubbleSort(arr,n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
