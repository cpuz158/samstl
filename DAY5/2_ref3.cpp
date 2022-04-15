#include <iostream>

void foo(int& a) { a = 200; }

// bind_call : �Լ�, ���ڸ� �޾Ƽ�
//				�Լ�(����)���·� ȣ���� �ִ� ����
template<typename F, typename T> void bind_call(F f, T arg)
{
	f(arg);
}
int main()
{
	int n = 10;
	foo(n);	// ���� ����, n�� 200���� ����˴ϴ�.
//	bind_call(foo, n);
//	bind_call(foo, &n); // ���� �ƴ� n�� �޸� �ּҸ� �����ϴ�.

	// reference_wrapper�� �ǹ� : ��ü�� �ּҸ� �����ϴµ�, �����ε� ��ȯ������ ����
//	std::reference_wrapper<int> r(n); // 1. r�� n�� �ּҸ� ����		
								  // 2. ������ ��ȯ ����
//	bind_call(foo, r);

	bind_call(foo, std::ref(n)); // std::ref(n) �� �ᱹ
								 // std::reference_wrapper �� ����� �ִ� �����Լ��Դϴ�.
								// ���ٰ� �� 2���� ���� �մϴ�.


	std::cout << n << std::endl; 
}
