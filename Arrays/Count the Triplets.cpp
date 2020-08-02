#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    sort(arr,arr+n);
	    int i;
	    int count=0;
	    for(i=n-1;i>=2;i--){
	        int j=0;
	        int k=i-1;
	        while(j<k){
	            if(arr[k]+arr[j]==arr[i]){
	               // cout<<endl<<arr[k]<<" "<<arr[j]<<" "<<arr[i]<<endl;
	                count++;
	                j++;
	                k--;
	            }
	            else if(arr[k]+arr[j]<arr[i]){
	                j++;
	            }
	            else{
	                k--;
	            }
	        }
	    }
	    if(count>0)
	        cout<<count<<endl;
	    else
	        cout<<-1<<endl;
	}
	return 0;
}