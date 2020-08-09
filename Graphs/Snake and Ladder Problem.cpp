#include <bits/stdc++.h>
using namespace std;

int minDice(int move[],int N){
    bool *visited = new bool[N]; 
    for (int i = 0; i < N; i++) 
        visited[i] = false; 
        
    queue<pair<int,int>> q;
    
    pair<int,int> p=make_pair(0,0);
    
    q.push(p);
    
    visited[0]=true;
    
    pair<int,int> temp;
    while(!q.empty()){
        temp=q.front();
        int v=temp.first;
        
        if(v==N-1)
            break;
        
        q.pop();
        for(int j=v+1;j<=v+6 and j<N; j++){
            
            if(!visited[j]){
                
                visited[j]=true;
                pair<int,int> k;
                k.second=temp.second+1;
                
                if(move[j]!=-1)
                    k.first=move[j];
                else
                    k.first=j;
                q.push(k);
            }
        }
    }
    return temp.second;

}

int main() {
    int t;
    cin>>t;
    while(t--){
	    int N = 30;
	    int n;
        int moves[N]; 
        for (int i = 0; i<N; i++) 
            moves[i] = -1; 
        cin>>n;
    
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            moves[a-1]=b-1;
        }
        cout<<minDice(moves,N)<<endl;
    }
        
	return 0;
}