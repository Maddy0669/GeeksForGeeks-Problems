#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int ans=0;
	    int n;
	    cin>>n;
	    while(n>0){
	        if(n%2==0){
	            n/=2;
	            ans++;
	        }
	        else{
	            n-=1;
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}