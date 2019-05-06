#include "iostream"
using namespace std;

// 变量能且只能被定义一次，但是可以生命多次 


// 变量定义的基本形式：首先是类型说明符，后面紧跟着一个或者多个变量名组成的列表，其中变量名以都好分隔，最后以分号结束
// 初始化不是赋值，初始化的含义是创建变量时富裕其一个初始值，而赋值的的含义是把对象的当前值擦除，而以一个新值代替
void test_variable()
{
	// 如果定义变量时没有指定厨师值，则变量被默认初始值，默认初始值到底是什么由变量类型决定，同时定义变量的位置也会对此有影响
	int sum = 0, value, units_sold = 0;  // sum,value units_sold 都是int 类型， sum 和units_sold初始值为0
	string book("jian ai");				// book 通过一个string 字面值初始化
	cout << book.c_str() << endl;
	
	// c++中初始化的几种不同形式，c++11新标准中 用花括号来初始化变量得到了全面的应用，
	// 无论是初始化对象还是某些时候为对象赋值，都可以用一组由花括号括起来初始值了
	int a = 3.14;
	//int b = { 3.14 };  // 转换未执行，存在丢失信息的危险
	int b = { 0 };
	int c{ 0 };
	int d(0);
	cout << "a " << a << endl;
	cout << "b " << b << endl;
	cout << "c " << c << endl;
	cout << "d " << d << endl;
	// double dd = ff = 999.99; // ff 未定义


	 
}

string g_str; // 被初始化为 ""
int g_int; // 被初始化为 0

int main()
{
	cout << g_str.c_str() << endl;
	cout << g_int << endl;  
	string l_str; // 被初始化为 ""
	int l_int;    // 未被初始化
	cout << l_str.c_str() << endl;
	//cout << l_int << endl;
	cout << "            "<<endl;
	int _;

	test_variable();
	getchar();
	return 0;
}