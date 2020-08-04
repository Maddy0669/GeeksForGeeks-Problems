#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    int c=a^b;
	    cout<<__builtin_popcount(c)<<endl;
	}
	return 0;
}