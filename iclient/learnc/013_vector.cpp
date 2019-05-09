#include "iostream"
#include "vector"
#include "string"
#include "cctype"
using namespace std;

void test_vector_handler();

void test_iter();

// c++ 中既有类模板，又有函数模板，其中vector是一个类模板。
int main()
{
	// test_vector_handler();

	test_iter();
	getchar();
	return 0;
}

void test_iter() {
	vector <int> v;
	for (int i = 0; i < 5; i++) {
		v.push_back(i); // 向v的尾端添加一个值为t的元素
	}

	auto b = v.begin(); // 指向v的第一个元素
	cout << *b << endl;
	auto	e = v.end(); // 指向v尾元素的下一位
	// cout << *e << endl; err 指向为空 
	
	string s("some thing");
	if (s.begin() != s.end()) {
		auto it = s.begin();
		*it = toupper(*it);
		
	}
	cout << s << endl;
	
	// 迭代器类型
	vector<int > ::iterator it;
	it = v.begin();				// 可读可写

	vector<int>::const_iterator cit;
	it = v.begin(); // const_iterator  和常量指针差不多，能读取但不能修改所知的元素值
	
	// vector 对象可以动态曾长，但是也会有一个副作用，已知的一个是不鞥在范围for循环中向 vector对象添加元素
	// 另一个限制是任何一种能改变vector对象容量的操作，不如 push_back 都会是改vector 对象的 迭代器失效

	// 因为vector是顺序存贮的，一旦删除或者加入一个元素 vector.begin()和vector.end()是变化的

	//erase的返回是一个迭代器，这个迭代器指向删除之前匀速后的第一个元素。
	vector<int> ::iterator iit;
	for (iit = v.begin(); iit != v.end();) {
		cout << *iit << "  ";
		if (*iit == 2) {
			iit = v.erase(iit);
		}
		else {
			++iit;
		}
		// 这里 iit有可能已经等于v.end() 访问 *iit 越界
	} 

}

void test_vector_handler()
{	
	vector<int > v;
	for (int i = 0; i < 5; i++) {
		v.push_back(i); // 向v的尾端添加一个值为t的元素
	}

	cout << v.empty() << endl; // 如果v不含有任何元素，返回真，否则为假

	cout << v.size() << endl; // 返回v中元素个数

	cout << v[1] << endl;  // 返回v中第1个位置上元素的引用 

	
	for (auto &i : v) { // 对于v中的每个元素 注意i是引用   
		i *= i;   // 计算i的平方
	}

	for (auto i : v)
		cout << i << " ";
	cout << endl;


	// 不能用下边形式 添加元素
	vector<int> ivec;
	 cout << ivec[0];  // err ivec中不包含任何元素

	 vector <int> v2(10); // 包含10个元素
	 cout << v2[10]; // err  v2的合法元素的索引为0-9



	getchar();
	
	
}

void test_vector_init(){
	vector<int> v1;  // v1是一个空vector,它潜在的元素是T类型的，执行默认初始化

	vector<int> v2(v1); // v2中包含v1中所有元素的副本,此时需注意两个vector对象的类型必须相同

	vector<int> vv2 = v1; // 等价于 v2(v1); v2中包含v1中所有的元素

	vector<int> v3(3, 3); // v3中包含了n个重复的元素，每个元素的值都是val

	vector<int> v4(4); // v4中包含4个重复执行了值初始化的对象，每个都初始化为0
	vector<int> vv4{ 4 };// 只有一个元素　４　


	// c++11 新标准提供了列表初始化方法 对vector对象中的元素赋初始值，此时用{} 括起来的0个或多个初始元素值被赋给vector对象

	vector<int> v5{ 1,2,3,4 };// v5中包含了初始值个数的元素，每个元素被赋予相应的初始值
	// vector<int> vv5(1,2,3,4); err  只能放到{}中


	vector<int> v6 = { 1,2,3,4 };//等价于v5{1,2,3,4}

	vector<string> v7{ "hi" };// 列表初始化：ｖ７有一个元素
	// vector<string> v8("hi"); // 错误，不能使用字符串字面值构建ｖｅｃｔｏｒ对象

	// v8,v8 提供的值不能作为元素的初始值，编译器会尝试默认初始值初始化
	vector<string> v8 {10}; // v8中有１０个默认初始化的元素jjjjfjskdjfadfjfffffffffffffff
	vector<string> v9{ 10,"hi" };// v9 h含有１０个初始值为＂ｈｉ＂的元素
}