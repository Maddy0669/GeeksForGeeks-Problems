#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int key=0,max=0;
	    while(n>0){
	        if(n&1)
	            key++;
	        else 
	            key=0;
	        if(key>max){
	            max=key;
	        }
	        n=n>>1;
	    }
	    cout<<max<<endl;
	}
	return 0;
}