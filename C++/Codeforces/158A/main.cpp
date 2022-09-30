#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[50], ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[k - 1] <= a[i] && a[i] != 0){
            ans++;
        }else{
            break;
        }
    }
    cout << ans << endl;

    int n, k;
    cin >> n >> k;
    int ans = 0;
    int ks = 0;
    for(int i = 1; i <= n; i++){
        int score;
        cin >> score;
        if(score == 0){
            continue;
        }
        if(k == i){
            ks = score;
        }
        if(k < i){
            if(ks == score){
                ans++;
            }
            continue;
        }
        ans++;
    }
    cout << ans << endl;
}
