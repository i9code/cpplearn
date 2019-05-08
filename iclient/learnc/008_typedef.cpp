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

	
	return 0;
}