## 最低限必要なバージョン
cmake_minimum_required(VERSION 3.4)

## プロジェクト名，および言語(CまたはC++)
project(sample1 CXX)

## 実行プログラム名とソースファイル名
add_executable(sample1 sample1.cpp)

## ビルドタイプ
set(CMAKE_BUILD_TYPE Release)

## コンパイラの実行パス
set(CMAKE_CXX_COMPILR /usr/bin/g++)

## コンパイラオプション
#? 途中改行できないのか?
set(CMAKE_CXX_FLAGS "-std=c++14 -pedantic -Wall -Wextra -Wformat=2 -Wcast-qual -Wwrite-strings -Wfloat-equal -Wpointer-arith -Winit-self -Wredundant-decls")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG -march=native")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-g3 -Og -pg")
set(CMAKE_CXX_FLAGS_MINSIZEREL "-Os -DNDEBUG -march=native")

