#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(strchr("+",s[0]) || strchr("+",s[2])){
            x++;
        }else if(strchr("-",s[0]) || strchr("-",s[2])){
            x--;
        }
    }
    cout << x << endl;
}
