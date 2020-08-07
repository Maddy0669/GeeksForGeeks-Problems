#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    
	    vector<int> dp(n,1);
	    
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(arr[j]<arr[i] and dp[i]<dp[j]+1)
	                dp[i]=dp[j]+1;
	        }
	    }
	    int ans=INT_MIN;
	    for(int i=0;i<n;i++)
	        ans=max(ans,dp[i]);
	        
	    cout<<ans<<endl;
	}
	return 0;
}