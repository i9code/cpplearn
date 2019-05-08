#include "iostream"
using namespace std;

int f() {
	return 0;
}

int main() 
{
	// 希望从表达式类型 推断出定义的变量类型，但是不想用该表达式的值初始化变量，
	// c++11新标准引入了第二种类型书名符  decltype,他的嘴用是选择并返回操作数的数据类型
	

	 // sum的类型就是函数f返回的类型
	decltype(f())sum = 2;  // 编译器并不实际调用函数f,而是使当调用发生时f的返回值类型作为sum的类型。换句话说，编译器为sum 指定的类型是什么呢？就是假如f被调用的话将会返回的哪个类型

	// decltype 处理鼎城const和引用的方式和 auto有些不同。如果decltype使用的表达式是一个变量，则decltype返回变量的类型（包含顶层const和引用
	const int  ci = 0, &cj = ci;
	decltype(ci) x = 0; // x的类型是const int
	decltype(cj)y = x; // y 的类型是const int&, y 绑定到变量x
	//decltype(cj)z;   //err：z是一个引用，必须初始化 （cj是一个引用，decltype（cj）的结果就是引用类型，因此作为引用的z必须被初始化

	// 如果decltype使用的表达式不是一个变量，则decltype返回表达式结果对应的类型

	int m = 42, *pm = &m, &rm = m;
	decltype(rm + 0) b; // 加法的结果是int，因此b是一个未初始化的int
	//decltype(*pm)  c; // err：c是一个int&,必须初始化  (如果表达式的内容是解引用操作，decltype将得到引用类型，借用指针可以得到指针所指的对象，而且还能给这个对象赋值。)
						// decltype(*p)的结果就是int&,而非int

	// 如果decltype使用的是一个不加括号的变量，则得到的结果就是变量的类型
	// 如果给变量加上了一层货多层括号，编译器就会把他当成事一个表达式。
	// 变量是一种可以作为赋值语句左值得特殊表达式，所以这样的decltype就会得到引用类型 （切记decltype（(var)）的到的结果永远是一个引用）
	
	//decltype((m)) d;  // err:d是int&，必须初始化
	decltype(m) e;// e是一个未初始化的int




}