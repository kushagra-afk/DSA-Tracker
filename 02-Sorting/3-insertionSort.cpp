// Time Complexity = 0(N^2) - average and worst case
// best case - everything in correct order - 0(N)


#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int n){
    for (int i = 0; i <=n-1; i++) {
        int j=i;
        while(j>0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1] ;
            arr[j-1] = arr[j] ;
            arr[j] = temp ;
            j--; 
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

    insertionSort(arr,n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
