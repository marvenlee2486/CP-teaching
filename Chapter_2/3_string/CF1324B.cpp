#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    while(t--)
    {
        cin >>n;
        int a[n];
        int x,check=0;

        for(int i=0;i<n;i++) cin >> a[i];
        
        for(int i=0;i<n;i++)
        {
        x=0;
        for(int j=i+2;j<n;j++)
        {
            if(a[i]==a[j])
            {
            check=1;
            break;
            } 
        }
        if(check==1)
        {
            break;
        }
        }
        if(check ==1) cout << "YES"<<endl; 
        else cout <<"NO"<<endl;
    }
    return 0;
}