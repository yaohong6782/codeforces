#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b;
    cin >> t;
    int tempa, tempb;
  
    while (t--){
        cin >> a; 
        string aa = to_string(a);
        reverse(aa.begin(), aa.end());

        cin >> b;
        string bb = to_string(b);
        reverse(bb.begin(), bb.end());

        int stringnum1 = stoi(aa);
        int stringnum2 = stoi(bb);
        int ans = stringnum1 + stringnum2;

        string cc = to_string(ans);
        reverse(cc.begin(), cc.end());
        cout << stoi(cc) << endl;
    }
   
 }
