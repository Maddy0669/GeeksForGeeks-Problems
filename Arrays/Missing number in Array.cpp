#include <iostream>
using namespace std;

int main() {
	int long long sum=0,total=0;
	int t,n,temp;
	cin>>t;
	while(t--){
	    cin>>n;
	    sum=0;
	    total=0;
	    sum=(n*(n+1))/2;
	    n--;
	    while(n--){
	        cin>>temp;
	        total+=temp;
	    }
	    cout<<sum-total<<endl;
	}
	return 0;
}