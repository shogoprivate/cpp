# Inheritance

## sample1.cpp 

このソースコードでは派生クラスを定義する方法が記述されている．
無指定で派生クラスのオブジェクトを作成すると基本クラスの引数なしのコンストラクタが自動的に呼び出される．

Keywords : 継承(inheritance)，基本クラス(base class)，派生クラス(derived class) 


## sample2.cpp 

このソースコードでは基本クラスの特定のコンストラクタを指定する方法が記述されている．
また，protectedアクセス指定子の使い方が記述されている．

Keywords : コンストラクタ(constructor)，protectedアクセス指定子


## sample3.cpp 

このソースコードではオーバライドについて記述されている．
オーバライドとは基本クラスと派生クラスで同じ名前，引数をもつ
関数を定義したときに派生クラスの関数が優先されることである．

Keywords : オーバライド(overriding)


## sample4.cpp 

このソースコードでは基本クラスへのポインタを利用する方法が記述されている．
この場合，基本クラスへのポインタに派生クラスのポインタを代入することは可能
であるが，sample3.cppで述べたオーバライドは行えない．そのため，sample5.cpp
の仮想関数を利用する．

Keywords : ポインタ(pointer), メンバ関数(member function)


## sample5.cpp 

このソースコードでは仮想関数を利用する方法が記述されている．
仮想関数を利用することで，ポインタが指しているオブジェクトの型に応じて，
適切なメンバ関数が呼び出される（sample4.cppとの違いに注目）．

Keywords : 仮想関数(virtual function)


## sample6.cpp 

このソースコードでは抽象クラスの純粋仮想関数を利用することで，
派生クラスに特有の機能を持ったメンバ関数を定義する方法が記述されている．
抽象クラスとは純粋仮想関数を1つ以上もつクラスのことで，オブジェクトを
作成することができない（純粋仮想関数の処理は抽象クラスで定義しない）．

Keywords : 純粋仮想関数(pure virtual function)，抽象クラス(abstract class)


## sample7.cpp 

このソースコードではオブジェクトのクラスを調べる方法が記述されている．

Keywords : 実行時型情報(RTTI)，\<typeinfo\>ヘッダ，typeid演算子


## sample8.cpp 

このソースコードでは多重継承の方法が記述されている．
多重継承とは2つ以上のクラスを継承することである．

Keywords : 多重継承(multiple inheritance)


## sample9.cpp 

このソースコードでは多重継承した基本クラスのメンバが同じ名前の
ときは，スコープ解決演算子を使って指定することが記述されている．

Keywords : スコープ解決演算子(::)


## sample10.cpp 

このソースコードでは仮想基本クラスを利用することで，
間接基本クラスのメンバを呼び出す方法が記述されている．

Keywords : 仮想基本クラス(virtual base class),
直接基本クラス(direct base class)，間接基本クラス(indirect base class)

