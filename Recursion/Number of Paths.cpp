#include <iostream>
using namespace std;

int Paths(int i , int j , int n, int m){
    if(i==n-1 or j==m-1)
        return 1;
    int down=Paths(i,j+1,n,m);
    int right=Paths(i+1,j,n,m);
    int total=down+right;
    
    return total;
}

void solve(){
    int n,m;
    cin>>n>>m;
    
    int ans=Paths(0,0,n,m);
    cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	    solve();
	return 0;
}