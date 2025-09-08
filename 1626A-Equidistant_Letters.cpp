#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int a[26] = {0};
        char ch;
        for(char c : s) a[c - 'a']++;
        for(int i = 0; i < 26;){
            if(a[i]-- > 0){
                ch = 'a' + i;
                cout << ch;
            }
            else i++;
        }
        cout << "\n";
    }
}
