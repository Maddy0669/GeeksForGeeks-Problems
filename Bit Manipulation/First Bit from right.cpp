#include <bits/stdc++.h>
using namespace std;

int find(int n){
    if(n==0)
        return 0;
    long long int i=log2(n & -n);
    int ans = i+1;
    return ans;
}

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int ans=find(n);
	    cout<<ans<<endl;
	}
	return 0;
}