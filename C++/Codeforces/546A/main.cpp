#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int sum = 0 , b = 0;
    for(int i = 1; i <= w ; i++){
        sum += k*i;
    }
    if(sum > n){
        b = sum - n;
        cout << b << endl;
    }else{
        cout << 0 << endl;
    }
}
