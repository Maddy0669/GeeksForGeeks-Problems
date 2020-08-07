#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	string p;
	getline(cin,p);
	//cin.ignore(numeric_limits<streamsize>::max(), '\n');
	while(t--){
	    int arr[256]={0};
	    string s;
	    getline(cin,s);
	    string ans="";
	    int n=s.size();
	    for(int i=0;i<n;i++){
	        int temp=s[i];
	        if(arr[temp]==0){
	            arr[temp]=1;
	            ans+=s[i];
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}