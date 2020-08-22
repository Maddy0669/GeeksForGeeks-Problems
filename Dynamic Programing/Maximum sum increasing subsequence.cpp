#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n),dp(n,0);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        dp[i]=arr[i];
    }
    
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i])
                dp[i]=max(dp[i],dp[j]+arr[i]);
        }
    }
    
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
        mx=max(mx,dp[i]);
    
    cout<<mx<<endl;
    
    return;
}


int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}