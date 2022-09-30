#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool isSeen[30] = {};
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(isSeen[ s[i] - 'a' ] == false){
            ans++;
            isSeen[ s[i] - 'a' ] = true;
        }
    }
    if(ans % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
}
