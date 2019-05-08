#include "iostream"
using namespace std;

int main() {
	// auto 定义的变量必须有初始值
	int i = 1;
	// 使用auto也能在一条语句中声明多个变量。因为一套声明语句只能有一个基本类型
	auto ai = 0, *p = &ai;// 正确：ai是整数，p是整型指针
	//auto sz = 0, pi = 3.14;// 错误：sz和pi类型不一致

	int ii = 0, &r = ii;
	auto a = r; // a是一个整数（r是i的别名，而i是一个整数

	// auto 一般会忽略掉顶层const,同时底层const则会保留下来，比如当初始值是一个指向常量的指针时
	const int ci = i, &cr = ci;
	// ci = 2; 常量不能赋值
	auto b = ci;  // b是一个整数，（ci的顶层const属性被忽略掉了）
	cout << "ci =  " << ci <<  "b = " << b << endl;
	b = 2; 
	cout << "ci =  " << ci <<  "b = " << b << endl;
	getchar();
	auto  c = cr; // c是一个整数（cr是ci的别名，ci本身是一个顶层const）

	auto d = &i; // d是一个整型指针（整数的地址就是指向整数的指针）

	auto e = &ci // e是一个指向整数常量的指针（对常量对象取地址是一种底层const ）



}