#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int one = 1, zero = 1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            if(s[i+1] == s[i]){
                one++;
            }else if(s[i+1] == '0' && one < 7){
                one = 1;
            }
        }
        if(s[i] == '0'){
            if(s[i+1] == s[i]){
                zero++;
            }else if(s[i+1] == '1' && zero < 7){
                zero = 1;
            }
        }
        if(one >= 7){
            cout << "YES" << endl;
            return 0;
        }else if(zero >= 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
