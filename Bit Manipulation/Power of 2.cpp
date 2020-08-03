#include <iostream>
using namespace std;

int main() {
	unsigned long long int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int ans=0;
	    while(n>0){
	        if(n&1)
	            ans++;
	        n=n>>1;
	    }
	    if(ans==1)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}