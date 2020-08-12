#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    int n=s.size();
    
    char ch;
    int flag=1;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        if(mp[s[i]]==2 and flag){
            flag=0;
            ch=s[i];
        }
    }
    if(flag)
        cout<<-1<<endl;
    else
        cout<<ch<<endl;
    return;
}


int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}