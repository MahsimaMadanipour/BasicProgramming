#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int Sx = 0, Sy = 0, Sz = 0;
    for(int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        Sx += x;
        Sy += y;
        Sz += z;
    }
    if(Sx == 0 && Sy == 0 && Sz == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
