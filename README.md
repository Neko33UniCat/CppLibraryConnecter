# CppLibraryConnecter

## 使い方

`./include/<MYLIBRARY>.cpp`

`./include.cpp`

`./main.cpp`

* includeフォルダの中に自作の.cppファイルを置く

* include.cppに#include<STD_LIBRARY>や#define  ~  , using namesapce ~ を書く

* main関数をmain.cppに書く。main.cppはinclude.cppと同じディレクトリに置く

`$ sudo chmod 777 ./makec++`

`$ ./makec++`

詳しくはexampleの中身を見てください。
