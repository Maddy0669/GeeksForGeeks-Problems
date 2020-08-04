#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int key=0;
	    while(n>0){
	        if(n&1)
	            key++;
	        else 
	            key=0;
	        if(key>1)
	            break;
	        n=n>>1;
	    }
	    if(key>1)
	        cout<<0<<endl;
	    else
	        cout<<1<<endl;
	}
	return 0;
}