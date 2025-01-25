#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    long long arr[n], ans = 1;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 1; i < n; i++)
      if(arr[i]!=arr[i-1])
        ans+=1;
    cout<< ans << "\n";
}

int main(){
    int t = 1;
    cin >> t;
    while(t--) solve();
}