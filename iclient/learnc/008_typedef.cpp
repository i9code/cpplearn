#include "iostream"
using namespace std;

//传统方法关键字 typedef
typedef double  wages;  // wages 是double的同义词

// 新语法
using INT = int; // int


typedef char *pstring;
int main() 
{
	pstring cstr = 0; // cstr是指向char的常量指针 

	// auto 定义的变量必须有初始值
	auto i = 1;
	// 使用auto也能在一条语句中声明多个变量。因为一套声明语句只能有一个基本类型
	auto i = 0, *p = &i;// 正确：i是整数，p是整型指针
	auto sz = 0, pi = 3.14;// 错误：sz和pi类型不一致
	return 0;
}