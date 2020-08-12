#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int h[1000001]={0};
    vector<int>arr(n);
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
        h[arr[i]]++;
    }
    int flag=1;
    int ans;
    
    for(i=0;i<n;i++){
        if(h[arr[i]]==k){
            flag=0;
            ans=arr[i];
            break;
        }
    }
    if(flag)
        cout<<-1<<endl;
    else
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