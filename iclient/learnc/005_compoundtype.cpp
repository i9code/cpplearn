#include "iostream"
using namespace std;


void test_point();

int main()
{
	test_point();
	getchar();
}

// 指针的优点
// 1.使用指针的优点和必要性：
// 2.指针能够有效的表示数据结构；
// 3.能动态分配内存，实现内存的自由管理；
// 4.能较方便的使用字符串；
// 5.便捷高效地使用数组
// 6.指针直接与数据的储存地址有关，比如：值传递不如地址传递高效，因为值传递先从实参的地址中取出值，再赋值给形参代入函数计算；
//   而指针则把形参的地址直接指向实参地址，使用时直接取出数据，效率提高，特别在频繁赋值等情况下（注意：形参的改变会影响实参的值！）


// 指针和 引用的区别
/************************************************************************/
/*
本质：引用是别名，指针是地址，具体的：
①从现象上看，指针在运行时可以改变其所指向的值，而引用一旦和某个对象绑定后就不再改变。
  这句话可以理解为：指针可以被重新赋值以指向另一个不同的对象。
  但是引用则总是指向在初始化时被指定的对象，以后不能改变，但是指定的对象其内容可以改变。
②从内存分配上看，程序为指针变量分配内存区域，而不为引用分配内存区域，因为引用声明时必须初始化，从而指向一个已经存在的对象。引用不能指向空值。
   注：标准没有规定引用要不要占用内存，也没有规定引用具体要怎么实现，具体随编译器 http://bbs.csdn.net/topics/320095541
③ 从编译上看，程序在编译时分别将指针和引用添加到符号表上，符号表上记录的是变量名及变量所对应地址。
   指针变量在符号表上对应的地址值为指针变量的地址值，而引用在符号表上对应的地址值为引用对象的地址值。
   符号表生成后就不会再改，因此指针可以改变指向的对象（指针变量中的值可以改）， 而引用对象不能改。
   这是使用指针不安全而使用引用安全的主要原因。从某种意义上来说引用可以被认为是不能改变的指针。
④不存在指向空值的引用这个事实，意味着使用引用的代码效率比使用指针的要高。
   因为在使用引用之前不需要测试它的合法性。相反，指针则应该总是被测试，防止其为空。
⑤理论上，对于指针的级数没有限制，但是引用只能是一级。如下：
  int** p1;         // 合法。指向指针的指针
  int*& p2;         // 合法。指向指针的引用
  int&* p3;         // 非法。指向引用的指针是非法的
  int&& p4;         // 非法。指向引用的引用是非法的                                                                     */
/************************************************************************/






// 与引用类似，指针也是实现对其他对象的间接访问。然而指针与引用又有很多不同点，
// 1 指针本身就是一个对象，允许对阵阵赋值和拷贝，而且在指针的生命周期内他可以先后指向几个不同的对象
// 2 指针无须在定义的时候直接初始化

// 指针值 应该属于下列4种状态之一
// 1.指向一个对象。
// 2.指向紧邻对象所占空间的下一个位置
// 3.空指针，意味着没有指向任何对象
// 4.无效指针，也就是上述情况之外的其他值


// 指针存放在某个对象的地址，要想获取改地址，需要使用取地址符（操作符&
void test_point() {
	int *ip1, *ip2; // ip1 和ip2都是指向int型对象的指针，

	int ival = 42;
	ip1 = &ival;
	int *p = &ival;  // p存放变量ival的地址，或者说 p是指向变量ival 的指针

	cout << *p << "  " << *ip1 <<  "  "  << ival << endl;
	*ip1 = 2;
	cout << *p <<  "  " << *ip1 <<  "  " << ival << endl;
	*p = 1;
	cout << *p <<  "  " << *ip1 <<  "  " << ival << endl;

	

	double dval;
	double *pd = &dval;
	double *pd2 = pd;
	
	//int *pi = pd;  //err  指针pi的类型和pd的类型不匹配
	//pi = &dval;  // err 试图把double型对象的地址付给int类型指针

	int &ri = ival; //&紧随类型名出现，因此是声明的一个部分，ri是一个引用
	int *pi; // *紧随类型名出现，因此是声明的一部分，p是一个指针
	pi = &ival; // &出现在表达式中，是一个取地址符，
	*pi = ival; // *出现在表达式中，是一个解引用符
	int &r2 = *pi; // &是声明的一部分，*是一个解引用符

	cout << "pi: " << pi << endl;

	// 空指针 不指向任何对象，在试图使用一个指针之前代码可以首先检测他是否为空。
	int *pa = nullptr; // 等价于 int*pa = 0;
	int *pb = 0;	// 直接将pb初始化为字面值0
	// 需要首先#include cstdlib
	int *pc = NULL;

}


// 引用即别名，引用并非对象，相反，它只是为一个已经存在的对象所起的另一个名字
// 一般在初始化变量时，初始值会被拷贝到新建的对象中。然而定义引用时，程序把引用和它的初始值绑定在一起，而不是将初始值拷贝给引用。
// 一旦初始完成，引用和它的初始值一直绑定在一起。因为无法令引用重新绑定到另一个兑现梗上，因此引用必须初始化
void test_reference() {
	int ival = 1.024;
	int &refval = ival; // refval指向ival（是ival的别名）
	//int &refval2;// err : 引用必须初始化
	refval = 2; // 把2赋值给refval指向的对象，此处及是赋值给ival
	//int &refval3 = 4; // err 引用只能引用在对象上，而不能与字面值或某个表达式计算结果绑定在一起，
	double dval = 3.14;
	// int &refval4 = dval; // 引用的类型都要和之绑定的对象严格匹配，
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.13;
	r2 = r1;
	i = r2;

	int ii, &ri = ii;
	ii = 5; ri = 10;
	cout << ii << " " << ri << endl;
}