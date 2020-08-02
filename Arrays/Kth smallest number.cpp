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
	    cout<<arr[k-1]<<endl;
	    
	}
	return 0;
}