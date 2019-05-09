#include "iostream"
#include "vector"
using namespace std;

int main() 
{
	// 逗号运算符  含有连个运算对I先拿个，安卓从左向右的顺序依次求值。
	// 对于逗号运算符来说，首先对左侧求值，然后将求值结果丢弃。逗号运算符真正的结果是右侧表达式的值。如果右侧运算符对象是一个左值，那么最终求值结果也是左值

	int a = (1, 2111);
	cout << a << endl;
	
	// 位运算符
	int bit = 0b101;
	int b = 0b01;

	int wyh = b ^ bit;
	cout << wyh << endl;

	int wh = b | bit;
	cout << wh << endl; // 位或 

	int wbit = bit & b; // 位与   同为真 
	cout << wbit << endl;
	
	double ybit = bit >> 2;// 右移
	cout << ybit << endl;

	int zbit = bit << 2; // 左移
	cout << zbit << endl;
	
	int fbit = ~bit; // 对bit求反
	cout << fbit << endl;





	
	
	getchar();

}

void test_cond() {


	//条件运算符
	int aa = 1, bb = 2;

	// cond ? a :b ;  如果cond为true 则a  否则b
	int cc = aa > bb ? aa : bb;
	cout << cc << endl;



	// 成员访问运算符 点运算符（.)和箭头（->)运算符都可以用访问成员，其中，点运算符获取类对象的一个成员；箭头运算符与独爱你运算符有关，表达式 ptr->mem <=> (*ptr).mem
	string str = "a string";
	string *ps = &str;
	auto n = str.size();
	auto m = ps->size();
	auto l = (*ps).size();  // 因为解引用运算符的优先级低于点运算符，所以执行接运算符的子表达式两端必须加上（）.如果没有（），代码的含义就不大相同了
	//*p.size(); // err :p是一个指针，他没有size成员



	int i = 0, j;
	j = ++i;		// j = 1,i = 1; 前置版本得到递增后的值
	cout << j << "  " << i << endl;

	j = i++;	// j= 1,i = 2; 后置版本得到递增前的值
	cout << j << "  " << i << endl;

	vector<int> v = { 1,2,3,4,5 };
	auto pbeg = v.begin();
	cout << "-------------------" << *pbeg << endl;
	while (pbeg != v.end())
	{
		cout << *pbeg++ << endl;  // 后置递增运算符的优先级高于解引用运算符，因此*pbeg++ 等价于*（pb++)   p++ 返回p的副本  
	}
}

void test_op() {
	// 逻辑与运算符（&&）和 逻辑或运算符（||）都是先求左侧运算对象的值再求右侧运算对象的值，
	// 当且仅当左侧运算符对象无法确定表达式的结果时，彩绘机酸右侧运算符对象的值。这种策略称为短路求值

	// 对于&& ，当且仅当左侧运算符对象为真时才对右侧运算对象求值
	// 对于|| ，当且仅当右侧运算符对象为假时才对右侧运算对象求值

	int i = 0, j = 0, k = 0;// 初始化而非赋值
	const int ci = 0;// 初始化 而非赋值

	// 1024 = j; //err: 字面值 是右值
	// i+j = k; // err : 算术表达式是右值
	// ci = i; // err : ci是常量（不可修改的）左值

	k = 0; // 类型是int  值0
	k = 3.1415926;// 类型是int z值3

	// c++11 新标准中允许使用花括号括起来的初始值列表 作为赋值语句的右侧运算对象
	// k = { 3.14 }; // err   窄化转换

	vector <int> vi;// 初始化为空
	vi = { 1,2,3,4,5 };  // 

	int ik;
	double dd;
	dd = ik = 3.5; // 3,3 


	cout << ik << " " << dd << endl;

	ik = dd = 3.5; // 3,3.5

	cout << ik << " " << dd << endl;

}

