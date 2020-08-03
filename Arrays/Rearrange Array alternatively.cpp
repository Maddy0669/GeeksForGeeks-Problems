#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    ll arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    ll temp=arr[n-1]+1;
	    ll i=0,j=n-1;
	    for(ll k=0;k<n;k++){
	        if(k%2==0){
	            arr[k]+=(arr[j]%temp)*temp;
	            j--;
	        }
	        else{
	            arr[k]+=(arr[i]%temp)*temp;
	            i++;
	        }
	    }
	    for(ll k=0;k<n;k++)
	        cout<<arr[k]/temp<<" ";
	    cout<<endl;
	}
	return 0;
}