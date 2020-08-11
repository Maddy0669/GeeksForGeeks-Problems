#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_set<int> s;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    
    int j,ans=0;
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)==s.end()){
            j=arr[i];
            
            while(s.find(j)!=s.end())
                j++;
            
            ans=max(ans,j-arr[i]);
        }
    }
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