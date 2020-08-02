#include <iostream>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--){
	    int sum=0;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int l=0,u=0;
	    while(l<n){
	        if(sum==k){
	            cout<<l+1<<" "<<u;
	            break;
	        }    
	        if(sum<k and l<n){
	            sum+=arr[u++];
	        }
	        else{
	            sum-=arr[l++];
	        }
	    }
	    if(l>=n)
	        cout<<-1;
        cout<<endl;
	}
	return 0;
}