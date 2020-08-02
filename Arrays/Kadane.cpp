#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,n,temp;
	cin>>t;
	
	while(t--){
	    int ms=INT_MIN,cs=0;
	    cin>>n;
	    while(n--){
	        cin>>temp;
	        cs=cs+temp;
	        if(cs>ms)
	            ms=cs;
	        if(cs<0)
	            cs=0;
	        
	    }
	    cout<<ms<<endl;
	}
	return 0;
}