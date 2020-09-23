#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[m];
    int result = INT_MAX;
    for (int i = 0; i < m; i++){
        cin >> arr[i];
    } 
    sort(arr, arr+m);

    for (int i = 0; i+n-1 < m; i++){
        result = min(result, arr[i+n-1] - arr[i]);
    }
   cout << result;
}

