#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >> t;

    while(t--){
        
        int a1 , a2 , a4 , a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int count=0;

        int x=a1+a2;
        int y=a4-a2;
        int z=a5-a4;

        if(x==y && y==z){
            cout << 3 << endl;
        }
        else if(x==y || y==z || x==z){
            cout << 2 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    return 0;
}