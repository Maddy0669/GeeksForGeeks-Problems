#include <bits/stdc++.h>
using namespace std;
int L=26;

void solve(){
    string s1;
    string s2;
    cin>>s1>>s2;
    int arr[L]={0};
    
    for(int i=0;i<s1.size();i++)
        arr[s1[i]-'a']++;
    
    for(int i=0;i<s2.size();i++)
        arr[s2[i]-'a']--;
    int flag=1;
    
    for(int i=0;i<26;i++){
        if(arr[i]!=0)
            flag=0;
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return;
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}