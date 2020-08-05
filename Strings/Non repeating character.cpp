#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    string s;
	    cin>>s;
	    int arr[26]={0};
	    for(int i=0;i<n;i++)
	        arr[s[i]-'a']++;
	    char ch;
	    int flag=0;
	    for(int i=0;i<n;i++){
	        if(arr[s[i]-'a']==1){
	            ch=s[i];
	            flag=1;
	            break;
	        }
	    }
	    if(flag)
	        cout<<ch<<endl;
	    else
	        cout<<-1<<endl;
	}
	return 0;
}