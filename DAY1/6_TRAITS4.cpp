// 6_TRAITS4.cpp
#include <vector>
#include <iostream>
// �Լ� ���� ����
// �ݺ���   : call by value �� �ַ� ��� (ũ�Ⱑ ũ�� ���� Ÿ��)
// �����̳� : const reference �Ǵ� reference  ���

template<typename T> void f1(T p)
{
	// T �� ��ü�� �ݺ��� �Ǵ� raw pointer �Դϴ�.
	// �Ѵ� ������ �����ϹǷ� *p ������ ��� ���� �����մϴ�
	auto n = *p; // ��ü�� �ݺ��ڰ�, raw pointer �� ��� ����..
	++p;         // ok..

	// �׷���, �ݺ��ڰ� ����Ű�� Ÿ���� �ʿ��ϸ�
//	typename T::value_type n2; // �� �ڵ�� ��ü�� �ݺ��ڿ� ���ؼ��� ����

	typename std::iterator_traits<T>::value_type n2; // ok
						// T�� ��ü�� �ݺ��ڰ�, raw pointer �̰� ��� ����

	// ����, �� ǥ����� �ʹ� �����ؼ�, C++20���� ���ο� ǥ����� �����մϴ�
//	std::iter_value_t<T> n3; // ok. ���� ����. typename�� �ʿ� ����.

}

template<typename T> void f2(T& c)
{
	// T�� STL Container �̰ų�, raw array �Դϴ�.
	// std::begin()������ �ݺ��ڸ� ������ ���� �մϴ�.
//	auto p1 = c.begin(); // c�� �迭�̸� �ȵ�.

	auto p1 = std::begin(c); // ok.. ��� ����.


	// �����̳ʰ� �����ϴ� Ÿ���� �˰�ʹ�.
//	typename T::value_type n;	// T �� STL Container �϶��� ����..
								// T�� �迭�̸� error

	// iterator_traits ó��
	// �����̳ʿ� �迭�� ������� ����� Ÿ���� ���ϴ� ����� ������ ?
	// => C++20�� �Ǿ�� ���ԵǾ�����.
//	std::ranges::range_value_t<T>  n; // ok
}

int main()
{
	int x[4] = { 1,2,3,4 };
	std::vector<int> v = { 1,2,3,4 };
	
	f2(v); // �����̳� ����
	f2(x); // raw array ����


	f1(v.begin()); // ��ü�� �ݺ��� ����
	f1(x);		   // raw pointer ����
}