#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s.length() <= 100){
        for(int i = 0; i < s.length(); i++){
            if(!strchr("AOEYUIaoeyui",s[i])){
                cout << "."<<(char)tolower(s[i]);
            }
        }
    }else{
        cout << "String can't include more than 100 letter" << endl;
        cin >> s;
    }
}
