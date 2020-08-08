// Apaar Kamal
#include<bits/stdc++.h>
 
using namespace std;
 
#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
 
const int N = 1001;
 
string s, t;
 
int memo[N][N];
 
int dp(int i, int j) {
    if (i == s.size() && j == t.size()) return 1;
    int &ans = memo[i][j];
 
    if (ans != -1) return ans;
 
    ans = 0;
 
    if (i == s.size()) {
        return false;
    }
    else if (j == t.size()) {
        if (s[i] >= 'a' && s[i] <= 'z') ans |= dp(i + 1, j);
        else return false;
    }
    else {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            if (t[j] == s[i]) ans |= dp(i + 1, j + 1);
            else return false;
        }
        else {
            if (s[i] - 32 == t[j]) ans |= dp(i + 1, j + 1);
            else ans |= dp(i + 1, j);
        }
    }
    return ans;
}
 
void solve() {
    cin >> s >> t;
    memset(memo, -1, sizeof(memo));
    if (dp(0, 0)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return ;
}
 
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}