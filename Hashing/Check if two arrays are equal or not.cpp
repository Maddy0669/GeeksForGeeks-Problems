#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    int n;
    cin>>n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int i=0;
    
    // for(i=0;i<n;i++)
    //     cout<<arr1[i]<<" ";
    // cout<<endl;
    // for(i=0;i<n;i++)
    //     cout<<arr2[i]<<" ";
    // cout<<endl;
    
    for(i=0;i<n;i++){
        if(arr1[i]!=arr2[i])
            break;
    }
    if(i==n)
        cout<<1<<endl;
    else
        cout<<0<<endl;
    
    return;
}

int32_t main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}