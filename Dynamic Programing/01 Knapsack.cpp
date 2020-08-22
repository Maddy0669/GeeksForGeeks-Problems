#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,W;
    cin>>n>>W;
    vector<int> wt(n),val(n);
    
    for(int i=0;i<n;i++)
        cin>>val[i];
    for(int i=0;i<n;i++)
        cin>>wt[i];
        
    vector<vector<int>> dp(n+1,vector<int>(W+1));
    
    for(int i=0;i<=n;i++)
        for(int w=0;w<=W;w++){
            if(i==0 or w==0)
                dp[i][w]=0;
            else if(wt[i-1]<=w)
                dp[i][w]= max(dp[i-1][w], dp[i-1][w-wt[i-1]]+val[i-1]);
            else
                dp[i][w]=dp[i-1][w];
        }
    cout<<dp[n][W]<<endl;
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}