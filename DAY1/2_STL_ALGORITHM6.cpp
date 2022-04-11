#include <iostream>

// find ����
// �˻� ����   : [first, last) ������ ���� Ÿ���� �迭, last �˻� ��� �ƴ�.
// ������ ǥ�� : �ݵ�� �������� �ʿ�� ����. ��, *,  !=, ++ �� ������ Ÿ��
// ������ �̵� : ������ ++ ������ ���
// ������ ��ȯ : last ��ȯ - "past the end" ��� �θ��ϴ�.

// C++ ǥ�ؿ� �̹� �Ʒ� ���� "find" �� �ֽ��ϴ�.

template<typename T1, typename T2>
T1 find(T1 first, T1 last, T2 value)
{
	while (first != last && *first != value)
		++first;

	return first; 
}



int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 10, 5.0f); // ??

	if (p == x + 10)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}