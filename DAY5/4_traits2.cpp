#include <iostream>

// Traits : Ÿ��(T) �� ���� �پ��� Ư���� �����ϴ� ���
// "���ø� �κ�Ư��ȭ ����"���� ����� ����

// ����� ���
// 1. primary template �� ����� false ��ȯ ( value = false ��� �ǹ�)
// 2. ������ �����ϴ�(������) ����� �κ� Ư��ȭ�� ����� true ��ȯ

template<typename T> struct is_pointer
{
//	bool value = false; // 1. C++11 �������� �̷��� �ʱ�ȭ �ȵǾ���
						// 2. �� ���� ������ �ð� ����� �ƴ� ���� �Դϴ�.

//	enum { value = false }; // C++11 ���� ��Ÿ��

	static constexpr bool value = false; // ���� ��Ÿ��
};

template<typename T> struct is_pointer<T*>
{
//	enum { value = true };

	static constexpr bool value = true;
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

