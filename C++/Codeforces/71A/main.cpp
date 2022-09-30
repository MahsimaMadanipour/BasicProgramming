#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l = 0;
    cin >> n;
    string word[100];
    for(int i = 0; i < n; i++){
        cin >> word[i];
    }
    for(int i = 0; i < n; i++){
        string s = word[i];
        l = s.length();
        if(l > 10){
            cout << s[0]<<l-2<<s[l-1] << endl;
        }else{
            cout << s << endl;
        }
    }
}
