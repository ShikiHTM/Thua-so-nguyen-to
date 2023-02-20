### Phân tích thừa số bằng phương pháp Map
---

#####1. Map là gì?
` Map là tập hợp các phần tử được sắp xếp theo thứ tự cụ thể, mà mỗi phần tử trong đó được hình thành bởi sự kết hợp của một cặp khóa và giá trị (key & value), với mỗi khóa là duy nhất trong map.`


`Map thuộc header file <map>, để sử dụng ta cần thêm: `

```c++
#include <map>
```
> Cú pháp của map:

```c++
std::map<k_type, v_type> Variable;
```

- Trong đó:
    
    - `k_type` và `v_type` lần lượt là kiểu dữ liệu của key và value
    - Variable là tên biến

#####2. Cách cài đặt map
```c++
#include<iostream>
#include<map>

int main() {
    std::map<int, int> mp;
    std::map<string, int> mp2;
}

```
---

- Cách cài đặt map giải phân tích số nguyên tố

```c++
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt = 0;

    map<int, int> thuaso; //tạo map để lưu các thừa số
    thuaso.clear(); //xoá tất cả phần tử trong map
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
```

> chắc thế 🐧
