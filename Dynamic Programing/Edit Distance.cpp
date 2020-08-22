#include <bits/stdc++.h>
using namespace std;

void solve(){
    int p,q;
    cin>>p>>q;
    string s1,s2;
    cin>>s1>>s2;
    
    vector<vector<int>> dp(p+1,vector<int>(q+1,0));
    
    // for(int i=0;i<=p;i++)
    //     for(int j=0;j<=q;j++)
    //         dp[i][j]=0;
            
            
    for(int i=0;i<=p;i++)
        for(int j=0;j<=q;j++){
            if(i==0)
                dp[i][j]=j;
            else if(j==0)
                dp[i][j]=i;
            else if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=1+min(dp[i-1][j-1], min(dp[i-1][j],dp[i][j-1]));
        }
        
    // for(int i=0;i<=p;i++)
    //     for(int j=0;j<=q;j++)
    //         cout<<dp[i][j]<<" ";
    //     cout<<endl;
        
    cout<<dp[p][q]<<endl;
    
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}