#include<bits/stdc++.h>
using namespace std;
int main(){
             
             int t;
             cin >> t;
             
             while(t--){
                          int a , x ,y;
                          cin >> a >> x >> y;
                          
                          if(x>a && y>a || x<a && y<a){
                                       cout << "yes" << endl;
                          }
                          else{
                                       cout << "no" << endl;
                          }
             }
             return 0;
}