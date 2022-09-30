#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word = "hello";
    int ans = 0 , c = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == word[c]){
            ans++;
            c++;
            continue;
        }
    }
    if(ans == 5){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
