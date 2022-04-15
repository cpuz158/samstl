#include <iostream>
#include <type_traits>

// traits ���̺귯���� 2���� ����
// 1. Ÿ�� ����   : is_xxx       ex) std::is_pointer<T>::value  
// 2. ����Ÿ�Ծ��				ex) std::remove_pointer<T>::type

template<typename T> void foo(const T& b)
{
	// ���� T �� : int, int* �Դϴ�. (main ����)
	typename std::remove_pointer<T>::type n;

	std::cout << typeid(n).name() << std::endl;
}

int main()
{
	int n = 10;

	foo(n);
	foo(&n);
}

