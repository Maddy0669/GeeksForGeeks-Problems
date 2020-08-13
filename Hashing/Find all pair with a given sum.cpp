#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n1,n2,k,temp;
    cin>>n1>>n2>>k;
    vector<int> arr(n1);
    unordered_set<int> s;
    
    vector<int> ans;
    for(int i=0;i<n1;i++)
        cin>>arr[i];
        
    sort(arr.begin(),arr.end());
    for(int i=0;i<n2;i++){
        cin>>temp;
        s.insert(temp);
    }
    
    for(int i=0;i<n1;i++){
        temp=k-arr[i];
        if(s.find(temp)!=s.end()){
            ans.push_back(arr[i]);
            ans.push_back(temp);
        }
    }
    int l=ans.size();
    if(l){
        for(int i=0;i<l-2;i=i+2)
            cout<<ans[i]<<" "<<ans[i+1]<<", ";
        cout<<ans[l-2]<<" "<<ans[l-1];
    }
    else
        cout<<-1;
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