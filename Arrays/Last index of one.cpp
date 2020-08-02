#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    n=s.size();
	    int i;
	    for(i=n-1;i>=0;i--){
	        if(s[i]=='1'){
	            cout<<i<<endl;
	            break;     
	        }
	    }
	    if(i<0)
	        cout<<-1<<endl;
	}
	return 0;
}