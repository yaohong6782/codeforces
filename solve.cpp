#include <bits/stdc++.h>
using namespace std;

string bsearch(int arr[],int k){
	int low = 0;
	int high = 10;
	int mid;
	while (low <= high){
		mid = low + (high-low)/2;

		if (arr[mid] < k){
			low = mid+1;
		}
		if (arr[mid] > k){
			high = mid-1;
		}
		else {
			return "YES";
		}
	}
	return "NO";
}

int main() {

	return 0;
}

