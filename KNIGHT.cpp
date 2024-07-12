#include <bits/stdc++.h>
using namespace std; 
#define int long long

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {1, -1, -2, -2, -1, 1, 2, 2};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int result = 0;
    bool ok = false;
    for (int i = 0; i < 8; i++){
        int newx2 = x1 + dx[i];
        int newy2 = y1 + dy[i];
        if (newx2 == x2 && newy2 == y2){
            result = i + 1;
            ok = true;
            break;
        }
    }
    if (ok != true) cout << 0 << endl;
    else cout << result << endl;
    return 0;
}