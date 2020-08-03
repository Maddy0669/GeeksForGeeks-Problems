#include <iostream>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    if(n&(1<<k))
            cout<<"Yes"<<endl;	    
	    else
	        cout<<"No"<<endl;
	}
	return 0;
}