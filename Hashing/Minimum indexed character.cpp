#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1;
    string s2;
    cin>>s1>>s2;
    char ans='$';
    unordered_set<char> s;
    
    for(int i=0;i<s2.size();i++)
        s.insert(s2[i]);
    
    for(int i=0;i<s1.size();i++){
        char ch=s1[i];
        if(s.find(ch)!=s.end()){
            ans=ch;
            break;
        }
    }
    cout<<ans<<endl;
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}