#include "iostream"

using namespace std;

int get_size();
void test_const_base();
void test_const_point();
void test_top_low_const();
void test_constexpr();

//默认情况下，const对象被设定为仅在文件内有效。当多个文件中出现了同名的const变量时，其实等同于在不同文件中分别定义了独立的变量

//多文件共享const变量的解决办法：对于const变量不管是声明还是定义都添加extern关键字。
// flie.cc 定义并初始化了一个长廊，改常量被其他文件访问
extern const int bufsize = 100;
// file.h 头文件
extern const int bufsize;


int main()
{
	test_constexpr();

	getchar();

}

// 常量表达式是值值不会改变并且在编译过程中就能得到计算结果的表达式
void test_constexpr() {
	// c11中，允许将变量声明为constexpr类型以便编译器验证变量的值是否是一个常量表达式。
	// 声明为constexpr变量一定是一个常量，而且必须用常量表达式初始化
	constexpr int mf = 20;// 20是常量表达式
	constexpr int limit = mf + 1; // mf+1是常量表达式
	// constexpr int sz = size(); // 只有当size是一个constexpr 函数时才是一个正确的声明语句

}

// 顶层const表示指针本身是常量，底层const表示指针指向的对象是一个常量
void test_top_low_const() {
	int i,j = 0;
	int *const p1 = &i; // 不能改变p1的值，这是一个顶层const
	// p1 = &j;//err  不能给常量赋值
	int const *p2 = &i;
	p2 = &j;

	const int ci = 42; // 不能改变ci的值， 顶层const
	const int *p2 = &ci; // 能够改p2的值， 底层const

	const int *const p3 = p2;// 靠右是顶层const，靠左是底层const

	const int &r = ci; // 用于声明引用的const都是底层const




}




// 指针是对象而引用不是，因此，就像其他对象类型一样，允许吧指针本身定义为常量。const pointer必须被初始化
void test_const_point() {
	int ii = 1;
	// const指
	int * const cp = &ii; // cp 将一直指向 ii
	int jj = 2;
	// cp = &jj;  err  cp指向不能改变
	*cp = 100;
	cout << *cp << endl;

	const double d = 3.14;
	const double *const pdp = &d; // pdp 是一个指向常量对象的常量指针
	
	
	// 指向常量的指针不能用于改变其所指向对象的值。要想存放常量对象的地址，也只能使用指向常量的指针
	const double i = 3.14;
	// double *pi = &i;		// err: pi是一个普通的指针
	const double *cpi = &i; // cpi是指向一个双江都的常量
	//*cpi = 42;			// 不能给cpi赋值
	const double j = 1;
	cpi = &j;				// 可以改变cpi 指向的地址
	cout << *cpi << endl;
}


void test_const_base() {

	// 常量 引用进队引用可参与的操作做出了限定，对于引用对象本身是不是常量未作出限定。因为对象可能是个非常量，所以允许通过其他途径改变他的值
	int iii = 100;
	const int &ri = iii;
	iii = 20;
	// ri = 10; err ri是一个常量引用，不能通过日修改i的值
	cout << "iii = " << iii << "    const ri = " << ri << endl;


	const int bufsize = 512; // 定义常量，值不能被修改
	// bufsize = 512; // err 
	const int i = get_size(); // 正确：运行时初始化
	const int j = 42;	      // 正确：编译时初始化
	//const int k;		      // err: k是一个未经初始化的常量

	//在不改变const对象的操作中还有一种初始化，如果利用一个对象初始化 另外一个对象，则他们是不是const都无关紧要
	int ii = 54;
	const int ci = ii;// 正确： i的值被拷贝给了ci
	int jj = ci;	  // 正确： ci的值被拷贝了jj
	ii = 10;
	cout << "ii = " << ii << " ci= " << ci << " jj " << jj << endl;
	getchar();

	// 可以把引用绑定到const对象上，就像绑定到其他对象上一样，我们称之为对常量的引用。
	// 与普通引用不同的是，对亮亮的引用不能用作修改它所绑定的对象
	const int cj = 1024;
	const int &rcj = cj;	// 正确：引用及其对应的对象都是常量
	//rcj= 42;			    // err:rcj是对常量的引用
	//int &rcj2 = cj;		// err:试图让一个非常亮医用指向一个常量对象，无法从const int 转化为 int&
	const int &r2 = 42;		// 正确：r2是 一个常量应用
	const int &r3 = cj * 2; // 正确：r3 是一个常量引用

}

int get_size() {
	return 1;
}
