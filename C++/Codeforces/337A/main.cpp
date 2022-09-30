#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int puz[50];
    for(int i = 0; i < m; i++){
        cin >> puz[i];
    }
    sort(puz, puz+m);
    int minimum = 1000;
    for(int i = 0; i <= m - n; i++){
        if(puz[i + n - 1] - puz[i] < minimum){
            minimum = puz[i + n - 1] - puz[i];
        }
    }
    cout << minimum << endl;
}
