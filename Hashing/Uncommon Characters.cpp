#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    unordered_map<char,int> mp;
    
    
    for(int i=0;i<s1.size();i++){
        if(mp[s1[i]]==0)
            mp[s1[i]]=1;
    }
    for(int i=0;i<s2.size();i++){
        if(mp[s2[i]]==1)
            mp[s2[i]]=2;
        if(mp[s2[i]]==0)
            mp[s2[i]]=3;
    }
    vector<char> ans;
    for(auto x:mp){
        if(x.second==1 or x.second==3)
            ans.push_back(x.first);
    }
    sort(ans.begin(),ans.end());
    
    for(int i=0;i<ans.size();i++)
        cout<<ans[i];
    cout<<endl;
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}