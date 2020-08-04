#include <bits/stdc++.h> 
using namespace std; 

#define ll long long int

ll merge(ll arr[], ll temp[], int left, int mid, int right){ 
	int i, j, k; 
	ll count = 0; 

	i = left; 
	j = mid;
	k = left;
	while ((i <= mid - 1) && (j <= right)) { 
		if (arr[i] <= arr[j]) { 
			temp[k++] = arr[i++]; 
		} 
		else { 
			temp[k++] = arr[j++]; 
			count = count + (mid - i); 
		} 
	} 
	while (i <= mid - 1) 
		temp[k++] = arr[i++]; 
	while (j <= right) 
		temp[k++] = arr[j++]; 

	for (i = left; i <= right; i++) 
		arr[i] = temp[i]; 
	return count; 
} 

ll _mergeSort(ll arr[], ll temp[], int left, int right) { 
	int mid;
	ll count = 0; 
	if (right > left) { 
		mid = (right + left) / 2; 

		count += _mergeSort(arr, temp, left, mid); 
		count += _mergeSort(arr, temp, mid + 1, right); 

		count += merge(arr, temp, left, mid + 1, right); 
	} 
	return count; 
}

ll mergeSort(ll arr[], ll array_size) { 
	ll temp[array_size]; 
	return _mergeSort(arr, temp, 0, array_size - 1); 
} 

int main() { 
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    ll arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    ll ans=mergeSort(arr,n);
	    cout<<ans<<endl;
    }
	return 0; 
} 