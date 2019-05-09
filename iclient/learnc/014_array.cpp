
// 数组是一种复合类型。数组的声明形式入a[d],其中a是数组名字，d是数组唯度。维度说明数组元素的个数，因此必须大于0.
// 数组中元素的个数也属于数组的一部分，编译的时候唯度应该是已知的，也就是说唯度必须是一个常量表达式

#include "iostream";
using namespace  std;

void test_point_array();

int main()
{



	getchar();
	return 0;
}

// 解引用和指针运算符
void test_point_dereference() {
	// 给一个指针加上或者减去一个整数值，结果仍是指针
	int arr[] = { 0,2,4,6,8 };
	int last = *(arr + 4); // 把last初始化为8 ,也就是arr[4的值
}
		
void test_point_iterator() {
	//  允许使用递增运算符将指向数组元素的指针向前移动到下一个位置上
	int arr[] = { 0,1,2,3,4 };
	int * p = arr; // p指向arr的第一个元素
	cout << p << "  " << *p << endl;
	cout << ++p << "  " << *(++p) << endl; ; // p指向arr[1]

	// c++ 11标准中引入了函数begin和end函数
	int *beg = begin(arr); //    begin函数返回指向arr的首指针
	int *last = end(arr);  //     end 函数返回指向arr尾元素下一位的指针
	// cout << *last << endl; // err 野指针
	for (int *it = beg; it != last; it++) {
		cout << *it << "  ";
	}
	cout << endl;

	// 给一个指针加上或者减去一个整数值，结果仍是指针，新指针指向的元素与原来指针相比前进（后退）该整数值个位置
	constexpr size_t  sz = 5;
	int a[sz] = { 1,2,3,4,5 };

	int *ip = a;		// 等价于 int* ip = &arr[0]
	int *p2 = ip + 4;  // ip2指向a的尾元素 a[4]
}


void test_point_array()
{
	// 通常情况下，使用取地址符来获取指向某个对象的指针，取地址符可以用于任何对象，
// 数组的元素也是对象，对数组使用小标运算符得到该数组指定位置的元素。因此相对其他对象一样，对数组的元素使用取地址符就能得到指向该元素的值指针

	string nums[] = { "one","two","three" };
	string *pnum = &nums[0];
	// 数组有一个特性：在很多用到数组名字的地方，编译器都会自动地将其替换为一个指向数组首晕啊素的指针
	string *p = nums; // 等价于p = nums[0   // 在大多数表达式中，使用数组类型的对象其实是使用一个指向该数组首元素的指针

	// 在一些情况下 数组的操作实际上是指针的操作,这句话有很多隐含含义
	// 1.当使用数组作为一个auto变量的初始值时，推断得到的类型是指针而废数组
	int ia[] = { 1,2,3,4,5 };// ia是一个含有5个整数的数组
	auto ia2(ia); // ia2是一个整型的指针，指向ia的第一个元素 



	// ia2 = 42; // err:ia2 是一个指针，不能用int赋值给指针
	*ia2 = 10;
	for (auto i : ia) {
		cout << i << "  ";;
	}
	cout << endl;

	//  尽管ia是由10个整数构成的数组，但当使用ia作为初始值是，编译器实际执行的初始化过程类似于下面的形式
	auto iaa2(&ia[0]); // 显然iaa2的类型是 int*

	// 必须值出的是，当使用decltype关键字时，上述转换不会发生，
	// decltype(ia)返回的类型是由5个整数构成的数组
	decltype(ia) ia3 = { 10,11,12,13,14 };
	// ia3 = p; // err : 不能用整型指针给数组赋值
	ia3[4] = 1111; // 把1111赋值给ia3的一个元素

}

void test_array_visit() {
	int arr[5] = { 1,2,3,4,5 };

	// 下标从0 开始， 
	//  err arr[5] 越界 
	cout << arr[0] << " " << arr[4] << endl;
	 

	for (auto i : arr) {
		i = i * i;
	}
	for (auto i : arr) { 
		cout << i << "  ";
	}
	cout << endl;

	for (auto &i : arr) {  // 引用 可以改变数值
		i = i * i;
	}

	for (auto i : arr) {
		cout << i << "  ";
	}
	cout << endl;

}

void test_array_init()
{
	unsigned cnt = 42; // 不是常量表达式
	constexpr unsigned sz = 3; //常量表达式

	int arr1[10]; // 含有10个整数的数组

	int *parr[sz];  // 含有3个整型指针的数组

	//string bad[cnt]; // err cnt不是常量表达式


	int ial[sz] = { 0,1,2 };// 含有3个元素的数组，元素分别是0,1,2

	int a2[] = { 0,1,2 };// 维度是3的数组

	int a3[5] = { 0,1,2 };// 等价于 a3= {0,1,2,0,0}

	string a4[3] = { "hi","bye" }; // 等价于 a4[] = {"hi","bye",""}

	// int a5[2] = { 0,1,2 }; err 初始值过多

	//字符数组有一种额外的初始化形式，我们可以用字符串字面值对此类数组初始化。
	// 当使用这种方式时，一定要注意字符串字面值的结尾处还有一个空字符，这个空字符也会像字符串的其他字符一样被拷贝到字符串数组中去

	char c1[] = { 'c','+','+' }; // 列表初始化，没有空字符
	char c2[] = { 'c','+','+','\0' }; //列表初始化，含有显式的空字符串

	char c3[] = "c++"; // 自动添加表示字符串结束的空字符

	// char c4[5] = "hello";// 错误没有空间存放空字符


	// 不能将数组的内容拷贝给其他数组作为其初始值，也不能加数组为其他数组赋值
	int aa1[] = { 1,2,3 };

	// int aa2[] = aa1; // err 不允许使用一个数组初始化另一个数组

	int aa3[3];
	// aa3 = aa1; //err 不能把一个数组直接复制给另一个数组


	// 
	int *ptrs[10]; // ptrs 是包含10个整型指针的数组
	// int &refs[10]; // err 不存在 引用的数组
	int aaarr[10];
	int(*ptrArr)[10] = &aaarr; //  指向一个含有10个整数的数组
	int(&arrref)[10] = aaarr; //  arrref引用一个含有10个元素的数组

	int *(&arrf)[10] = ptrs; // arrfs是数组引用，改数组含有10个指针
}