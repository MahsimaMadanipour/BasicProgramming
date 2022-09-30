#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int s1 = 0, s2 = 0, s3 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            s1++;
        }else if(s[i] == '2'){
            s2++;
        }else if(s[i] == '3'){
            s3++;
        }
    }
    for(int i = 0; i < s.size(); i=i+2){
        if(s1 > 0){
            cout << "1";
            s1--;
        }else if(s2 > 0){
            cout << "2";
            s2--;
        }else if(s3 > 0){
            cout << "3";
            s3--;
        }
        if(i < s.size()-1){
            cout << "+";
        }

    }
    cout << endl;
}
