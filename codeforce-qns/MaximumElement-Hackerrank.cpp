#include <bits/stdc++.h>
using namespace std;

void solve() {
  
}
int main() {
    int n;
    cin >> n;
    stack<int> st;
    stack<int> m;
     m.push(0);
    while(n--){
        int x,type,max;
       
        cin >> x;
        if (x == 1){
            cin >> type;
        if (type >= m.top()){
                m.push(type);
            }
            st.push(type);
        }
        else if (x == 2) {
           if(st.top() == m.top()) {
               m.pop();
           }
           st.pop();
        }
        else if (x == 3){
            cout << m.top() << endl;
        }
    }
 }

