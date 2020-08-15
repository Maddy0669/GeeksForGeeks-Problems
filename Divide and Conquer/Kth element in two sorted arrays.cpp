#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> arr1(n+1);
    vector<int> arr2(m+1);
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    arr1[n]=INT_MAX;
    arr2[m]=INT_MAX;
    int i=0;
    int j=0;
    int ans;
    while(k--){
        if(arr1[i]<=arr2[j] and i<n){
            ans=arr1[i];
            i++;
        }
        else if(j<m){
            ans=arr2[j];
            j++;
        }
        // cout<<ans<<" ";
    }
    // cout<<endl;
    cout<<ans<<endl;
    return;
}


int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}