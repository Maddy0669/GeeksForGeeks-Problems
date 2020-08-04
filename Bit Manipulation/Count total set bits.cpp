#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int sum=0;
	    for(int i=0;i<=n;i++)
	        sum+=__builtin_popcount(i);
	    cout<<sum<<endl;
	}
	return 0;
}