#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n1,n2;
    cin>>n1>>n2;
    unordered_set<int> s;
    
    for(int i=0;i<n1;i++){
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    int flag=1;
    for(int i=0;i<n2;i++){
        int temp;
        cin>>temp;
        if(s.find(temp)==s.end())
            flag=0;
    }
    if(flag)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}