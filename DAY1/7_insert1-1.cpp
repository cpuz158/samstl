// 7_insert1-1
#include <iostream>

template<typename T>
T square(T a)
{
	return a * a;
}

// �Լ� ���ø��� Ÿ�� ���ڸ� �����Ҽ� ������, 
// Ŭ����(����ü) ���ø��� Ÿ�����ڸ� �����Ҽ� ����.( ~ C++14 ����)
// �׷��� Ŭ���� ���ø��� �ٷ� ����ϸ� �׻� ����� ���Դϴ�
// 
// �� ���� Ŭ���� ���ø� �� ��ü�� �����  �Լ� ���ø��� �����ϸ� ���մϴ�

// Object Generator ��� �̸��� ���� ��� �Դϴ�.
template<typename T, typename U>
std::pair<T, U> make_pair(const T& a, const U& b)
{
	return std::pair<T, U>(a, b);
}

int main()
{
	// ������ ���� ���̴� ���� ?
	square<int>(3); // 1
	square(3);		// 2.  ���� ���δ�!!

	std::pair<int, double> p1(3, 3.4); // int, double�� �����Ҽ� ������ ?

//	auto p2 = make_pair<int, double>(3, 3.4); // �� ǥ���� ��Ȯ�� ǥ��������
//	auto p2 = make_pair(3, 3.4); // �̷��� �ص� �˴ϴ�.

	auto p2 = std::make_pair(3, 3.4);


	std::pair p3(3, 3.4); // C++17 ���ʹ� Ŭ����(����ü)���ø���
							// Ÿ�� ���� ���� �����մϴ�
}


