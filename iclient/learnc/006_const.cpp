#include "iostream"

using namespace std;

int get_size();
void test_const_base();
void test_const_point();
void test_top_low_const();
void test_constexpr();

//Ĭ������£�const�����趨Ϊ�����ļ�����Ч��������ļ��г�����ͬ����const����ʱ����ʵ��ͬ���ڲ�ͬ�ļ��зֱ����˶����ı���

//���ļ�����const�����Ľ���취������const�����������������Ƕ��嶼���extern�ؼ��֡�
// flie.cc ���岢��ʼ����һ�����ȣ��ĳ����������ļ�����
extern const int bufsize = 100;
// file.h ͷ�ļ�
extern const int bufsize;


int main()
{
	test_constexpr();

	getchar();

}

// �������ʽ��ֵֵ����ı䲢���ڱ�������о��ܵõ��������ı��ʽ
void test_constexpr() {
	// c11�У�������������Ϊconstexpr�����Ա��������֤������ֵ�Ƿ���һ���������ʽ��
	// ����Ϊconstexpr����һ����һ�����������ұ����ó������ʽ��ʼ��
	constexpr int mf = 20;// 20�ǳ������ʽ
	constexpr int limit = mf + 1; // mf+1�ǳ������ʽ
	// constexpr int sz = size(); // ֻ�е�size��һ��constexpr ����ʱ����һ����ȷ���������

}

// ����const��ʾָ�뱾���ǳ������ײ�const��ʾָ��ָ��Ķ�����һ������
void test_top_low_const() {
	int i,j = 0;
	int *const p1 = &i; // ���ܸı�p1��ֵ������һ������const
	// p1 = &j;//err  ���ܸ�������ֵ
	int const *p2 = &i;
	p2 = &j;

	const int ci = 42; // ���ܸı�ci��ֵ�� ����const
	const int *p2 = &ci; // �ܹ���p2��ֵ�� �ײ�const

	const int *const p3 = p2;// �����Ƕ���const�������ǵײ�const

	const int &r = ci; // �����������õ�const���ǵײ�const




}




// ָ���Ƕ�������ò��ǣ���ˣ�����������������һ���������ָ�뱾����Ϊ������const pointer���뱻��ʼ��
void test_const_point() {
	int ii = 1;
	// constָ
	int * const cp = &ii; // cp ��һֱָ�� ii
	int jj = 2;
	// cp = &jj;  err  cpָ���ܸı�
	*cp = 100;
	cout << *cp << endl;

	const double d = 3.14;
	const double *const pdp = &d; // pdp ��һ��ָ��������ĳ���ָ��
	
	
	// ָ������ָ�벻�����ڸı�����ָ������ֵ��Ҫ���ų�������ĵ�ַ��Ҳֻ��ʹ��ָ������ָ��
	const double i = 3.14;
	// double *pi = &i;		// err: pi��һ����ͨ��ָ��
	const double *cpi = &i; // cpi��ָ��һ��˫�����ĳ���
	//*cpi = 42;			// ���ܸ�cpi��ֵ
	const double j = 1;
	cpi = &j;				// ���Ըı�cpi ָ��ĵ�ַ
	cout << *cpi << endl;
}


void test_const_base() {

	// ���� ���ý������ÿɲ���Ĳ����������޶����������ö������ǲ��ǳ���δ�����޶�����Ϊ��������Ǹ��ǳ�������������ͨ������;���ı�����ֵ
	int iii = 100;
	const int &ri = iii;
	iii = 20;
	// ri = 10; err ri��һ���������ã�����ͨ�����޸�i��ֵ
	cout << "iii = " << iii << "    const ri = " << ri << endl;


	const int bufsize = 512; // ���峣����ֵ���ܱ��޸�
	// bufsize = 512; // err 
	const int i = get_size(); // ��ȷ������ʱ��ʼ��
	const int j = 42;	      // ��ȷ������ʱ��ʼ��
	//const int k;		      // err: k��һ��δ����ʼ���ĳ���

	//�ڲ��ı�const����Ĳ����л���һ�ֳ�ʼ�����������һ�������ʼ�� ����һ�������������ǲ���const���޹ؽ�Ҫ
	int ii = 54;
	const int ci = ii;// ��ȷ�� i��ֵ����������ci
	int jj = ci;	  // ��ȷ�� ci��ֵ��������jj
	ii = 10;
	cout << "ii = " << ii << " ci= " << ci << " jj " << jj << endl;
	getchar();

	// ���԰����ð󶨵�const�����ϣ�����󶨵�����������һ�������ǳ�֮Ϊ�Գ��������á�
	// ����ͨ���ò�ͬ���ǣ������������ò��������޸������󶨵Ķ���
	const int cj = 1024;
	const int &rcj = cj;	// ��ȷ�����ü����Ӧ�Ķ����ǳ���
	//rcj= 42;			    // err:rcj�ǶԳ���������
	//int &rcj2 = cj;		// err:��ͼ��һ���ǳ���ҽ��ָ��һ�����������޷���const int ת��Ϊ int&
	const int &r2 = 42;		// ��ȷ��r2�� һ������Ӧ��
	const int &r3 = cj * 2; // ��ȷ��r3 ��һ����������

}

int get_size() {
	return 1;
}
