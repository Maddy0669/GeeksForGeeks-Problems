#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    int sum=0;
	    int cur=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(sum-arr[i]==2*cur){
	            cout<<i+1;
	            break;
	        }
	        else{
	            cur+=arr[i];
	        }

	    }
	    if(cur==sum)
	        cout<<-1;
	    cout<<endl;
	}
	return 0;
}