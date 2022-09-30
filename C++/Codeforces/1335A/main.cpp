#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    long long n;
    for(int i = 0; i < tc; i++){ //for(; tc > 0; tc--)
        cin >> n;
        long long ans = ((n + 1) / 2) - 1;
        cout << ans << endl;
    }
}
