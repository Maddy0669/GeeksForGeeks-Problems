#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n],res[n]={0};
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int left=INT_MIN;
	    int right=INT_MAX;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=left){
	            res[i]++;
	            left=arr[i];
	        }
	    }
	    for(int i=n-1;i>=0;i--){
	        if(arr[i]<=right){
	            res[i]++;
	            right=arr[i];
	        }
	    }
	    int i;
	    for( i=1;i<n-1;i++){
	        if(res[i]==2){
	            cout<<arr[i]<<endl;
	            break;
	        }
	    }
	    if(i==n-1)
	        cout<<-1<<endl;
	}
	return 0;
}