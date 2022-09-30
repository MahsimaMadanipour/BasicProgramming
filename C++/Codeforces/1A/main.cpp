#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    long long t;
    if(n % a == 0){
        t = n / a;
    }else{
        t = (n / a)+1;
    }
    if(m % a == 0){
        t = t * (m / a);
    }else{
        t = t * ((m / a)+1);
    }
    cout << t << endl;
}
