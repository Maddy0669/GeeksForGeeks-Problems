#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    sort(arr,arr+n);
	    cin>>k;
	   // for(int i=0;i<n;i++)
	   //     cout<<arr[i]<<" ";
	   // cout<<endl;
	    int Min=INT_MAX;
	    for(int i=0;i<=n-k;i++){
	        if(arr[i+k-1]-arr[i]<Min)
	            Min=arr[i+k-1]-arr[i];
	    }
	    cout<<Min<<endl;
	} 
	return 0;
}