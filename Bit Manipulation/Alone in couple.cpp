#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;     
            ans=ans^temp;
        }
        cout<<ans<<endl;
    }
	return 0;
}