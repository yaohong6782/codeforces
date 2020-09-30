  
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,k,n;
   
    cin >> t;
    while (t--){
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> k; 
        int temp = 0; //save the number 
        for (int i = 0; i < n; i++){
            if (i == k-1){
                temp = arr[i];
            }
        }
        int ans = 0;
        sort(arr, arr+n);
        for (int i = 0; i < n; i++){
            if (arr[i] == temp){
                ans = i;
            }
        }
        cout << ans+1 << endl; 
    }
 }