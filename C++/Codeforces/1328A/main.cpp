#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    int a, b;
    for(; tc > 0; tc--){
        cin >> a >> b;
        if(a < b){
            cout << (b - a) << endl;
        }else if(a % b == 0){
            cout << "0" << endl;
        }else{
            int ans = (a / b) + 1;
            ans *= b;
            ans -= a;
            cout << ans << endl;
            //cout << b - (a % b) << endl;
        }
    }
}
