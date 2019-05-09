#include "iostream"
using namespace std;

// c++支持 c风格的字符串，但是程序中最好不要使用他们。

int main() {
	char p[] = "hello";
	char p1[] = "nihao";
	// c风格字符串的函数

	cout << strlen(p) << endl;  // 返回p的长度，空字符不计算在内

	cout << strcmp(p, p1) << endl; // 比较p和p1的想等性  p== p1   返回0，p >p1 返回正数 p< p1 返回负数

	cout << strcat(p, p1) << endl; // 将p1附加到p上，然后返回p

	cout << strcpy(p, p1) << endl; // 将p1拷贝给p 返回p

	getchar();
	return 0;
}