#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k,n;
    cin>>k>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    sort(arr.begin(),arr.end());
    
    int mid=(arr[0]+arr[n-1])/2;
    int ans=arr[n-1]-arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]<mid)
            arr[i]+=k;
        else
            arr[i]-=k;
    }
    
    sort(arr.begin(),arr.end());
    int ans2 = arr[n-1]-arr[0];
    
    cout<<min(ans,ans2)<<endl;
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}