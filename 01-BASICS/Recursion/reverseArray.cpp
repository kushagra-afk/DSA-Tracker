// reverse an array using recursion 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void revArr(int i, vector<int> &arr, int n) {
    if (i >= n / 2) {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    revArr(i + 1, arr, n);
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];
    revArr(0, arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0; 

}