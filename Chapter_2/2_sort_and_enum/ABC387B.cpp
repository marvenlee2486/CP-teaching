#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x; cin >> x;
    int ans = 0;
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            if(i * j != x) ans += i * j;
        }
    }
    cout << ans << "\n";
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--) solve();
}