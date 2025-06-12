# ac-cpp-log
## Setup Cpp

### コンパイラ比較: `gcc` / `g++`

| 特徴               | **gcc**                               | **g++**                                       |
|:------------------|:------------------------------------|:----------------------------------------------|
| デフォルト言語     | C                                   | C++                                           |
| インクルード検索   | C 用ヘッダのみ (`/usr/include` 等) | C++ 標準ヘッダ (`<vector>`/`<string>`等) を含む |
| ライブラリリンク   | 手動で `-lstdc++` が必要             | libstdc++ 等 C++ ランタイムを自動リンク        |
| ファイル拡張子判定 | `.c`/`.s` を C と判定               | `.cpp`/`.cc` を C++ と判定                    |


### Main Setup
```cpp
#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n;
  cin >> n;

}
```

#### Example

```bash
# C++ ファイルをコンパイル
g++ main.cpp -o main

# C ファイルを C++ としてコンパイル
g++ foo.c -o foo

# gcc で C++ ランタイムを手動リンク
gcc main.o -lstdc++ -o main

```

## 環境設定 / 高速入出力
```cpp
#include <bits/stdc++.h>
using namespace std;
 
// 高速 IO
struct FastIO {
    FastIO() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    }
} fastio;
```

## 型エイリアス / マクロ
```cpp
using ll   = long long;
using vi   = vector<int>;
using vll  = vector<ll>;
using pii  = pair<int,int>;
using pll  = pair<ll,ll>;
```

## ビルトイン関数
```cpp
#define popcount(x)     __builtin_popcountll(x)
#define clz(x)          __builtin_clzll(x)
#define ctz(x)          __builtin_ctzll(x)
```


