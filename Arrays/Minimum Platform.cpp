#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++)
	        cin>>b[i];
	    int mx=0;
	    int A=0,B=0,ta=0,tb=0;
	    for(int i=1;i<2400;i++){
	        ta=0;
	        tb=0;
	        for(int j=0;j<n;j++){
	            if(a[j]<=i){
	                ta++;
	                A=ta;
	            }
	            if(b[j]<i){
	                tb++;
	                B=tb;
	            }
	        }
	        mx=max(mx,A-B);
	        int temp=i%100;
	        if(temp==60)
	            i+=39;
	    }
	    cout<<mx<<endl;
	}
	return 0;
}