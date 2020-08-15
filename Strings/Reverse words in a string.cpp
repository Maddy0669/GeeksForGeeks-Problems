#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int start=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            reverse(s.begin()+start,s.begin()+i);
            start=i+1;
        }
    }
    reverse(s.begin()+start,s.end());
    reverse(s.begin(),s.end());
    
    cout<<s<<endl;
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}