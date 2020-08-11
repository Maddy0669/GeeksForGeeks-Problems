#include <bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;

bool compare(int a, int b){
    if(mp[a]==mp[b])
        return a<b;
    return mp[a]>mp[b];
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=0;
    }
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    sort(arr.begin(),arr.end(),compare);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
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