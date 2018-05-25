# Making large programs

## sample1.cpp 

このソースコードではローカル変数とグローバル変数のスコープの違いが示されている．

The difference of the scope between the "local variable" and the "global variable" is shown in this source code.

Keywords : スコープ(Scope), グローバル解決演算子(Global Resolution Operator)


## sample2.cpp 

このソースコードでは変数の記憶寿命が示されている．
static指定子をもつローカル変数の記憶寿命はプログラムの開始から終わりまでである．

The storage life of variales is shown in this source code.
The storage life of the local variable with the "static" identifier is from the start and the end of a program.

Keywords : 記憶寿命(Storage Life), 記憶クラス指定子(Storage Class Identifier), static指定子(Static Idetifier)


## sample3.cpp 

このソースコードは動的メモリ確保についてである．
動的メモリ確保はメモリの節約につながる．

This source code explains about memories dynamically allocated.
Memories dynamically allocated are attributed to saving the memory area.

Keywords : 動的メモリ確保(Memories dynamically allocated), new演算子(New Operator)


## sample4.cpp 

このソースコードは動的配列確保についてである．

This source code explains about the "array" dynamically allocated.

Keywords : 動的配列確保(Array dynamically allocated), スタック領域，静的記憶領域，ヒープ領域


## sample5.cpp 

このソースコードはファイルの分割コンパイルについてである．

This source code explains about the "separate compilation". 

Keywords : 分割コンパイル(Separate Compilation), リンク(Link)，外部リンケージ，内部リンケージ


## Others
名前空間 : 変数・関数名のスコープを名前空間に限定できる．

extern : 別のファイルの（無指定の）グローバル変数を利用するときには，externという指定子をつけたヘッダファイルを読み込んでコンパイルする．

Keywords : 名前空間(Namespace), extern指定子(Extern Identifier)

