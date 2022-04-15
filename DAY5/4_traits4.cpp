#include <iostream>

// traits �� ����Ϸ��� �Ʒ� ��� �ʿ� �մϴ�.
#include <type_traits>

template<typename T> void foo(const T& b)
{
	// ����
	bool b1 = std::is_pointer<T>::value;  // C++11 ��Ÿ��
	bool b2 = std::is_pointer_v<T>;       // C++17 ��Ÿ��

	// ������ Ÿ�� ���
	typename std::remove_pointer<T>::type n1; // C++11 ��Ÿ��
	std::remove_pointer_t<T> n2;			  // C++14 ��Ÿ��

	
}



int main()
{
	int n = 10;

	foo(n);
	foo(&n);
}

