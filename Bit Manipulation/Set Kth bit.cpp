#include <iostream>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int ans=n|(1<<k);
	    cout<<ans<<endl;
	}
	return 0;
}