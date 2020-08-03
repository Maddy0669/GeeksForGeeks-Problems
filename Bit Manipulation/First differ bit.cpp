#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,m,n;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    int ans=m^n;
	    int res=log2(ans & -ans);
	    cout<<res+1<<endl;
	}
	return 0;
}