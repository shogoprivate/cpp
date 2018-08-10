# ファイルの入出力

## sample1.cpp

cout, cinの復習

Keywords: 抽出演算子， 挿入演算子

## sample2.cpp

istreamクラスのメンバ関数 get()

空白を含む1文字を読み込む

ostreamクラスのメンバ関数 put()

空白を含む1文字を出力する

## sample3.cpp


ostreamクラスのメンバ関数 width()

出力幅を設定
（設定した幅が出力文字列より小さいときは
文字列に合わせて幅が調節される）

## sample4.cpp

ostreamクラスのメンバ関数 fill()

出力幅の空白を引数で指定した文字で埋める

## sample5.cpp

ostreamクラスのメンバ関数 precision()

数値の有効桁を設定する
（最初に行う出力のみに有効）

## sample6.cpp

書式状態フラグ
（unsetfを呼び出すまで有効）

ostreamクラスのメンバ関数 setf()

ostreamクラスのメンバ関数 unsef()

## sample7.cpp

改行 std::endl 

標準ライブラリがもつ入出力の書式設定
のための関数をマニピュレータと呼ぶ

## sample8.cpp

std::oct, std::dec, std::hex

基数を設定するマニピュレータ

2進数はstd::bitset<ビット幅>(値)

ただし，要: `#include<bitset>`

## sample9.cpp

std::setw()

出力幅を設定するマニピュレータ

要: `#include<iomanip>`

マニピュレータにはこの他にも
setfill()やsetprecision()などもある

## sample10.cpp

ofstreamクラス

オープン: ofstream OBJ("filename");

クローズ: OBJ.close();

## sample11.cpp

ofstreamクラス

fout << hogehoge;

ファイルへの書き込み

## sample12.cpp

書式を設定してファイルに書き込む

## sample13.cpp

ifstreamクラス

オープン: ifstream OBJ("filename");

クローズ: OBJ.close();

fin >> hogehoge;

ファイルの1行を読み込む

## sample14.cpp

ifstreamで読み込んだデータを処理する

## sample15.cpp

コマンドライン引数の使用方法

`int main(int argc, const char* argv[])`

argc: 引数の数を格納する変数（実行ファイルも含む）

argc: 引数の値を格納する変数（実行ファイルも含む）

## extra1.cpp

挿入演算子のオーバロード

通常，自作したクラスのインスタンスに対して，挿入演算子を使用する
ことはできないが，挿入演算子をフレンド関数としてオーバロードする
ことで，それを可能にする．

演算子に新しい用法を追加するため，
メンバ関数`クラス名 operator+(引数)`に
オーバロードする

