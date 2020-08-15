#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        ans=ans^temp;
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