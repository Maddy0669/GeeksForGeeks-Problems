#include <bits/stdc++.h>
using namespace std;

int lcs(string a, string b, int n1, int n2){
    int dp[n1+1][n2+1];
    
    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            if(i==0 or j==0)
                dp[i][j]=0;
            else if(a[i-1]==b[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=0;
            //cout<<dp[i][j]<<" ";
        }
        //cout<<endl;
    }
    int ans=INT_MIN;
    for(int i=0;i<=n1;i++)
        for(int j=0;j<=n2;j++)
            ans=max(ans,dp[i][j]);
    return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n1,n2;
	    cin>>n1>>n2;
	    string s1,s2;
	    cin>>s1>>s2;
	    cout<<lcs(s1,s2,n1,n2)<<endl;
	}
	return 0;
}