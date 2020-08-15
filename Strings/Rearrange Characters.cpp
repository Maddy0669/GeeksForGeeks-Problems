#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int arr[26]={0};
    int n=s.size();
    
    for(int i=0;i<n;i++)
        arr[s[i]-'a']++;
    
    int mx=0;
    for(int i=0;i<26;i++)
        mx=max(mx,arr[i]);
    
    //cout<<n<<" "<<mx<<endl;
    if(n%2==0)
        n=n/2;
    else
        n=n/2+1;
    
    if(mx<=n)
        cout<<1<<endl;
    else
        cout<<0<<endl;
    
    return;
}

int main(){
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}