#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(i % 2) ans -= a;
        else ans += a;
    }
    cout << ans << "\n";
}

int main(){
    int t = 1;
    cin >> t;
    while(t--) solve();
}