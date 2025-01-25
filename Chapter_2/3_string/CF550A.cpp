#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    
    int x = s.find("AB");
    int y = s.find("BA");
    
    if((x != -1 && s.find("BA", x + 2) != -1) || (y != -1 && s.find("AB", y + 2) != -1) )
      cout << "YES\n";
    else cout << "NO\n";
  
}