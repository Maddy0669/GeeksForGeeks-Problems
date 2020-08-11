#include <bits/stdc++.h>
using namespace std;

void change(vector<vector<int>> &flood, int val,int x, int y,int k, int n, int m){
    flood[x][y]=k;
    
    if(x+1<n and flood[x+1][y]==val)
        change(flood,val,x+1,y,k,n,m);    
    if(y-1>=0 and flood[x][y-1]==val)
        change(flood,val,x,y-1,k,n,m); 
    if(y+1<m and flood[x][y+1]==val)
        change(flood,val,x,y+1,k,n,m); 
    if(x-1>=0 and flood[x-1][y]==val)
        change(flood,val,x-1,y,k,n,m); 
    return;
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> flood(n,vector<int>(m, 0));
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>flood[i][j];
            
    int x,y,k;
    cin>>x>>y>>k;
    int val=flood[x][y];
    
    change(flood,val,x,y,k,n,m);
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cout<<flood[i][j]<<" ";
        cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}