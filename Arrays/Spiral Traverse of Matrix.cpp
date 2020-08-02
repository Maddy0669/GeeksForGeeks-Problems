#include <iostream>
using namespace std;

int main() {
	int t,m,n;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    int arr[m][n];
	    for(int i=0;i<m;i++)
	        for(int j=0;j<n;j++)
	            cin>>arr[i][j];
	    
	    int sr=0,sc=0,er=m-1,ec=n-1,count=0;
	    int prod=m*n;
	    while(sr<=er and sc<=ec){
	        for(int i=sc;i<=ec;i++){
	            count++;
	            cout<<arr[sr][i]<<" ";
	        }
	        sr++;
	        if(count>=prod)
	            break;
	            
	        for(int i=sr;i<=er;i++){
	            count++;
	            cout<<arr[i][ec]<<" ";
	        }
	        ec--;
	        if(count>=m*n)
	            break;
	            
	        for(int i=ec;i>=sc;i--){
	            count++;
	            cout<<arr[er][i]<<" ";
	        }
	        er--;
	        if(count>=m*n)
	            break;
	            
	        for(int i=er;i>=sr;i--){
	            count++;
	            cout<<arr[i][sc]<<" ";
	        }
	        sc++;
	    }
	    cout<<endl;
	}
	return 0;
}