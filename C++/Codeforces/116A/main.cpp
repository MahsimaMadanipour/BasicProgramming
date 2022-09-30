#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int maximum = 0, p = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        p = p - a + b;
        maximum = max(maximum, p);
    }
    cout << maximum << endl;
}
