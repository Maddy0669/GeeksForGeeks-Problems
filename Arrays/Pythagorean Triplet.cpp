#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        arr[i]=arr[i]*arr[i];
	    }
	    sort(arr,arr+n);
	   // for(int i=0;i<n;i++)
	   //     cout<<arr[i]<<" ";
	   // cout<<endl;
	    int i;
	    int flag=0;
	    for(i=n-1;i>=2;i--){
	        int j=0;
	        int k=i-1;
	        while(j<k){
	            if(arr[k]+arr[j]==arr[i]){
	               // cout<<endl<<arr[k]<<" "<<arr[j]<<" "<<arr[i]<<endl;
	                flag=1;
	                cout<<"Yes"<<endl;
	                break;
	            }
	            else if(arr[k]+arr[j]<arr[i]){
	                j++;
	            }
	            else{
	                k--;
	            }
	        }
	        if(flag)
	            break;
	    }
	    if(flag==0)
	        cout<<"No"<<endl;
	}
	return 0;
}