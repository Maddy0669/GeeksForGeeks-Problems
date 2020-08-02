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
	    vector<int> result;
	    int max=arr[n-1];
	    result.push_back(max);
	    for(int i=n-2;i>=0;i--){
	        if(arr[i]>=max){
	            max=arr[i];
	            result.push_back(max);
	        }
	    }
	    n=result.size();
	    for(int i=n-1;i>=0;i--)
	        cout<<result[i]<<" ";
	    cout<<endl;
	}
	return 0;
}