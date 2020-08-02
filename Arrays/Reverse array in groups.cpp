#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(int i=0;i<=n-k;i+=k){
	        reverse(arr+i,arr+i+k);
	    }
	    int rem=n%k;
	    if(rem>0)
	        reverse(arr+n-rem,arr+n);
	    
	    for(int i=0;i<n;i++)
	        cout<<arr[i]<<" ";
	    cout<<endl;
	}
	return 0;
}