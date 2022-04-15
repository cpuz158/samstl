#include <iostream>
#include <functional>

// �̵� ������ ������ ����� ���ô�.
template<typename T> struct reference_wrapper
{
	T* ptr;
public:
	reference_wrapper(T& obj) : ptr(&obj) {}

	operator T&() { return *ptr; }
};

int main()
{
	int n1 = 10;
	int n2 = 20;
	reference_wrapper<int> r1(n1);
	reference_wrapper<int> r2(n2);

	r1 = r2; // r1, r2 ��� reference_wrapper Ÿ���̹Ƿ�
			 // reference_wrapper�� ���� ������ ȣ��
			 // �����Ϸ��� �����ϴ� ���Կ����� ���

	int& r3 = r1; // r1.operator int&()
				  

	std::cout << n1 << std::endl; // 20		10
	std::cout << n2 << std::endl; // 20		20
	std::cout << r1 << std::endl; // 20		20
	std::cout << r2 << std::endl; // 20		20
}

