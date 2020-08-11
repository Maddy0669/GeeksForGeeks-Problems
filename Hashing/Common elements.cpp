#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve(){
    int n1,n2,n3;
    unordered_map<int,int> mp;
    cin>>n1>>n2>>n3;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    vector<int> arr3(n3);
    
    vector<int> ans;
    int flag=1;
    
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
        mp[arr1[i]]=0;
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
        mp[arr2[i]]=0;
    }
    for(int i=0;i<n3;i++){
        cin>>arr3[i];
        mp[arr3[i]]=0;
    }
    for(int i=0;i<n1;i++){
        if(mp[arr1[i]]==0)
            mp[arr1[i]]=1;
    }
    for(int i=0;i<n2;i++){
        if(mp[arr2[i]]==1)
            mp[arr2[i]]=2;
    }
    for(int i=0;i<n3;i++){
        if(mp[arr3[i]]==2)
            mp[arr3[i]]=3;
    }
    
    for(auto i:mp){
        if(i.second==3){
            ans.push_back(i.first);
            flag=0;
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    
    if(flag)
        cout<<-1;
    cout<<endl;
    return;
}

int32_t main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}