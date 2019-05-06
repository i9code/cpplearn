#include "iostream"
using namespace std;




void test_type_convert() {
	bool b = 42;				// 当把一个非bool类型的值赋值给bool 类型，初始值为0 则结果为false,否则为1
	cout << b << endl;			// 输出1 
	int i = b;				    // 当把一个bool类型赋值给非bool类型时，初始值为false则为0，否则为1.
	cout << i << endl;			// 输出1
	i = 3.14;					// 当把浮点数赋值给整数时，只保留浮点数中小数点之前的数
	cout << i << endl;			// 输出3
	double pi = i;				// 当把一个整数赋值给浮点数是，小数部分即为0，
	cout << pi << endl;			// 输出3.0
	unsigned char c = -1; 
	cout  <<c << endl;	
	signed char c2 = 256;
	cout << c2 << endl;

}


// 一个字节为8个比特
// 一般short和long long为固定字节数，int在64位系统下为了向下兼容而保持了4个字节 long 为8字节
void test_type_size() {
	bool a = false;
	cout << "bool size: " << sizeof(a) << endl;
	char b = 'c';
	cout << "char size: " << sizeof(b) << endl;
	wchar_t c = 'c';
	cout << "wchar_t size: " << sizeof(c) << endl;
	short d = 2;
	cout << "short size: " << sizeof(d) << endl;
	int e = 3;
	cout << "int size: " << sizeof(e) << endl;
	long f = 4;
	cout << "long size: " << sizeof(f) << endl;
	long long g = 5;
	cout << "long long size: " << sizeof(g) << endl;
	float ff = 5.0;
	cout << "float size: " << sizeof(ff) << endl;
	double df = 5.0;
	cout << "double size: " << sizeof(df) << endl;
	long double ldf = 5.0;
	cout << "long double size: " << sizeof(ldf) << endl;
}

void main()
{
	test_type_convert();

	getchar();
	
}

/*
	float : 单精度浮点数 double : 双精度浮点数

	两者的主要区别如下：

　　01.在内存中占有的字节数不同
　　　　单精度浮点数在机内存占4个字节
　　　　双精度浮点数在机内存占8个字节

　　02.有效数字位数不同
　　　　单精度浮点数有效数字8位
　　　　双精度浮点数有效数字16位

　　03.数值取值范围
  　　　单精度浮点数的表示范围：-3.40E+38~3.40E+38
　　　　双精度浮点数的表示范围：-1.79E+308~-1.79E+308

　　04.在程序中处理速度不同
　　　　一般来说，CPU处理单精度浮点数的速度比处理双精度浮点数快
		如果不声明，默认小数为double类型，所以如果要用float的话，必须进行强转
*/