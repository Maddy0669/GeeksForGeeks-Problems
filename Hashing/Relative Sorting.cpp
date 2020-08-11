#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n1,n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    unordered_map<int,int> mp;

    vector<int> ans;
    vector<int> sol;
    
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
        mp[arr1[i]]=0;
    }
    
    for(int i=0;i<n1;i++)
        mp[arr1[i]]++;

    for(int i=0;i<n2;i++){
        cin>>arr2[i];
        int temp=mp[arr2[i]];
        while(temp--)
            sol.push_back(arr2[i]);
        mp[arr2[i]]=0;
    }
    for(int i=0;i<n1;i++)
        if(mp[arr1[i]]>0)
            ans.push_back(arr1[i]);
    
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        sol.push_back(ans[i]);
        
    for(int i=0;i<sol.size();i++)
        cout<<sol[i]<<" ";
    cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}