#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i=1;i<=n;i++)
            cout << string(i, '(') + string(i, ')') + string(n-i, '(') + string(n-i, ')') << endl;
    }
}