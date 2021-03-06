# クラスにおけるその他の機能 

## sample1.cpp

演算子オーバロードまとめ
（座標の加算，インクリメント）

## sample2.cpp

デストラクタ

インスタンスを破棄する際に必要な処理を
記述した関数で，インスタンスを破棄する
際に自動的に呼び出される

例えば，クラス内で動的にメモリを確保したときの
メモリ解放処理を記述する

ちなみに，デストラクタは戻り値と引数を
持たない

## sample3.cpp

コピーコンストラクタと代入演算子のオーバロード

インスタンスを別のインスタンスで初期化または
インスタンスに別のインスタンスを代入する際，
別々のメモリを確保する必要がある

## sample4.cpp

クラステンプレート

クラステンプレートを用いれば
任意のメンバの型に対して
処理を記述できる

関数のテンプレートも参照

## sample5.cpp

標準テンプレートライブラリ1 

ベクタ（要: `include<algorithm>`）

数が決まっていない複数のデータを管理できるコンテナクラス

様々なメンバ関数をもつ

## sample6.cpp

汎用アルゴリズムを実現する標準関数テンプレート

（要: `include<algorithm>`）

`reverse(hoge1, hoge2)`: hoge1からhoge2までのデータを逆順にする

`sort(hoge1, hoge2)`: hoge1からhoge2までのデータをソートする

## sample7.cpp

例外処理

Keywords: try, throw, catch

## extra1.cpp

演算子関数

演算子に新しい用法を追加するため，
メンバ関数`クラス名 operator+(引数)`に
オーバロードする

## extra2.cpp

演算子関数とフレンド関数

メンバ関数として定義できない演算子関数を
フレンド関数として定義する

フレンド関数はメンバ関数ではないが，
そのクラスのprivateメンバにアクセスできる

ただし，クラス内でプロトタイプ宣言を行っておく

## extra3.cpp

単行演算子をオーバロードする

定義ではthisポインタ
（そのメンバ関数を呼び出したインスタンスへのポインタ）
を使用する

前置と後置で処理が異なるので注意

## extra4.cpp

変換関数と変換コンストラクタ

定義したクラスを別の型に変換できるようにする
ためには変換関数を定義する

逆に別の型を定義したクラスに変換するためには
変換コンストラクタを定義する

