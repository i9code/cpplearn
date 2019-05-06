#include "iostream"
using namespace std;
void test_constexpr();

int main() {
	test_constexpr();
	getchar();
	return 0;
}

// c11中，允许将变量声明为constexpr类型以便编译器验证变量的值是否是一个常量表达式。
// 声明为constexpr变量一定是一个常量，而且必须用常量表达式初始化

// 常量表达式是值值不会改变并且在编译过程中就能得到计算结果的表达式
void test_constexpr() {
	
	int staff_size = 27; // staff_size 不是常量表达式，(尽管staff_size的初始值是一个字面值常量，但是由于他的数据类型只是一个普通的int 而非const int,所以他不属于常量表达式)

	constexpr int mf = 20;// 20是常量表达式
	constexpr int limit = mf + 1; // mf+1是常量表达式
	// constexpr int sz = size(); // 只有当size是一个constexpr 函数时才是一个正确的声明语句

	


	// 指针和引用都能成为constexpr  但是初始化都收到严格限制
	// 一个constexpr 指针的初始化值必须是nullptr或者0 ，或者是存储于某个固定地址中的对象，函数体内定义的变量一般来说并非存在固定地址中，因此constexpr指针不能指向这样的变量
	// 定义于所有函数体之外的对象其地址固定不变，能用来初始化constexpr 指针。
	// 函数定义一类有效范围超出函数本身的变量，这类变量和定义在函数体之外的变量一样也有固定的地址，因此，constexpr 引用能够 绑定到这样的变量上，constexpr指针也能指向这样的变量
	


}
