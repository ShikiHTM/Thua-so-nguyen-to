#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt = 0;

    map<int, int> thuaso; //tạo map để lưu các thừa số
    thuaso.clear();
    for(auto i = 2; i <= n; ++i) {
        while(n % i == 0) {
            thuaso[i]++;
            n/=i; //n = 6, i = 2 (6 / 2 = 3) => n = 3
            cnt++;
        }
    }
    cout << cnt << endl;
    for(auto it: thuaso) {
        cout << it.first << " " << it.second << endl;
    }
}
