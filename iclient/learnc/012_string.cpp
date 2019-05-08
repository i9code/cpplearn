#include "iostream"
#include "cctype"
using namespace std;

// 位于头文件的代码，一般来说不应该使用using。这是因为头文件的内容会拷贝到所有引用他的文件中，如果头文件离有某些using声明，
// 那么每个使用该头文件的文件都会有这个生命。对于某些出鞥许来书，由于不经意间包含了一些名字，反而可能残生始料未及的名字冲突

// 标准库类型string 表示可变长的字符串序列，使用string类型必须首包含string头文件.
// 作为标准库的一部分，string定义在明明空间std中。

#include "string"

using std::string;

void test_string_handler();
void test_string_char();
	

int main()
{
	
	test_string_char();
	
	getchar();
	
	return 0;
}

// 处理string对象中的字符
void test_string_char() {
	string s = "a";
	char c  = s[0];

	for (auto c : s) {
	}
		cout << isalnum(c) << endl; // 当c是字母或者数字时为真

		cout << isalpha(c) << endl; // 当c为字母是为真

		cout << iscntrl(c) << endl; // 当c为控制字符是为真

		cout << isdigit(c) << endl; // 当c 为数字时为真

		cout << isgraph(c) << endl; // 当c不为空但是可打印时为真

		cout << islower(c) << endl; // 当c 为小写字母是为真

		cout << isprint(c) << endl; // 当c是可打印字符时为真(即c是空格或c具有可视形式)

		cout << ispunct(c) << endl; // 当c为标点符号是为真（即c不是控制字符，数字，字母，可打印空白字中的一种

		cout << isspace(c) << endl; // 当c是空白是为真 即 c是空格，横向制表符，纵向制表符，回车符，换行符，进制符中的一种

		cout << isupper(c) << endl; // 当c是大写字母是为真

		cout << isxdigit(c) << endl; // 当c是十六进制数字时为真

		cout << tolower(c) << endl; // 输出对应的小写字母
		cout << toupper(c) << endl; // 输出对应大写字母
	
	cout << s << endl;
	
}

void test_string_handler() {

	string s = "abcdefg";
	string s1 = "abc";
	string s2 = "defg";
	// os << s; //将s写到输出流os当中,返回os
	// is >>s ; // 从is中读取字符串赋值给s,字符串以空白分隔，返回is
	// getline(is,s);// 从is中读取一行赋值给s,返回is

	cout << s.empty() << endl; // s为空返回true，否则返回false

	cout << s.size() << endl; // 返回s中字符串的个数
	int n = 2;
	cout << s[n] << endl; // 返回s中第n个字符串的引用，位置从n计算

	cout << s1 + s2 << endl; //返回s1 和s2 连接后的值

	cout << (s1 = s2) << endl; // 用s2的副本替代s1中的字符串

	cout << (s1 == s2) << endl; // 如果s1和s2中所含的字符串完全一样，则他们相等

	cout << (s1 != s2) << endl; // 等性判断对字符串的大小写敏感  < <= > >= 利用字符串在字典中的顺序进行比较，且对大小写敏感

}

void test_string_initialization(){
	string s1;	// 默认初始化，s1是一个空字符串
	string ss2(s1); // ss2是s1的一个副本
	string s2 = s1; // 等价于ss2(s1) s2是s1的一个副本
	s2 = "xxxxx";
	cout << s1 << "      " << s2 << endl;

	string ss3("value"); // ss3是字面值"value"的副本，除了字面值最后的哪个空字符串外
	string s3 = ss3; //  等价于 ss3（"value"）， s3是字面值"value"的副本
	string s4(10, 'c'); // s2的内容是"cccccccccc"，连续初始化n个字符c的组合

	// 如果使用等号（=）初始化一个变量，实际上执行的是拷贝初始化（copy initialization）,编译器把等号右侧的初始化值拷贝到一个新创建的对象中
	// 如果不使用等号，则执行的是直接初始化
	string s5 = "hiya"; // 拷贝初始化
	string s6("hiya"); // 直接初始化
	string s7(5, 'c'); // 直接初始化，s7 ccccc

	string s8 = string(7, 'c'); // 拷贝初始化

}