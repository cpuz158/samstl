#include <iostream>

// Traits : Ÿ��(T) �� ���� �پ��� Ư���� �����ϴ� ���
// "���ø� �κ�Ư��ȭ ����"���� ����� ����

// ����� ���
// 1. primary template �� ����� false ��ȯ ( value = false ��� �ǹ�)
// 2. ������ �����ϴ�(������) ����� �κ� Ư��ȭ�� ����� true ��ȯ

template<typename T> struct is_pointer
{
	enum { value = false };
};

template<typename T> struct is_pointer<T*>
{
	enum { value = true };
};


template<typename T> void foo(const T& b)
{
	if ( is_pointer<T>::value )

		std::cout << "������" << std::endl;
	else
		std::cout << "������ �ƴ�" << std::endl;	
}
int main()
{
	int n = 10;
	printv(n);
	printv(&n);
}

