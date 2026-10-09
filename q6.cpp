#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;

        string s = to_string(x);
        sort(s.begin(), s.end());

        cout << s[0] << endl;
    }

    
}