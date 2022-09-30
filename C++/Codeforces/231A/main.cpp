#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int p, v, t;
        cin >> p >> v >> t;
        if(p + v + t >= 2){
            ans++;
        }
    }
    cout << ans << endl;

    /*int n;
    cin >> n;
    int ans = 0;
    int p[1000], v[1000], t[1000];
    for(int i = 0; i < n; i++){
        cin >> p[i] >> v[i] >> t[i];
    }
    for(int i = 0; i < n; i++){
        if(p[i] + v[i] + t[i] >= 2){
            ans++;
        }
    }
    cout << ans << endl;*/
}
