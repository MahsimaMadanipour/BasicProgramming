#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 0, j = 0, ans = 0;
    for(int k = 1; k <= 5; k++){
        int a, b, c, d, f;
        cin >> a >> b >> c >> d >> f;
        if(a == 1){
           i = k;
           j = 1;
        }else if(b == 1){
            i = k;
            j = 2;
        }else if(c == 1){
            i = k;
            j = 3;
        }else if(d == 1){
            i = k;
            j = 4;
        }else if(f == 1){
            i = k;
            j = 5;
        }
    }
    ans = abs(3-i)+abs(3-j);
    cout << ans << endl;
}
