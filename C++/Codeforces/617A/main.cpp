#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int minimum = 0;
    for(int i = 5; i >= 1; i--){
        while(x >= i){
            x -= i;
            minimum++;
        }
    }
    cout << minimum << endl;
}
