#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    int x = 0;
    while(x != -1){
      int nx = s.find("bear", x);
      if(nx == -1) break;
      
      ans += (nx - x + 1) * (n - (nx + 4) + 1);
      x = nx + 1;
    }
    cout << ans << "\n";
}