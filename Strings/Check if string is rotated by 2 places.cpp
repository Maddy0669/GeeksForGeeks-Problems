#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    int n=s1.size();
	    int flag1=1;
	    int flag2=1;
	    for(int i=0;i<n;i++){
	        int j=(i+2)%n;
	        if(s1[i]!=s2[j])
	            flag1=0;
	        if(s2[i]!=s1[j])
	            flag2=0;
	    }
	    if(flag1==0 and flag2==0)
	        cout<<0<<endl;
	    else
	        cout<<1<<endl;
	}
	return 0;
}