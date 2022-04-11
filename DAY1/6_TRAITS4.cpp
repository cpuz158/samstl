// 6_TRAITS4.cpp
#include <vector>
#include <iostream>
// �Լ� ���� ����
// �ݺ��� : call by value �� �ַ� ��� (ũ�Ⱑ ũ�� ���� Ÿ��)
// �����̳� : const reference �Ǵ� reference  ���

template<typename T> void f1(T c)
{
}

template<typename T> void f2(T& c)
{
}

int main()
{
	int x[4] = { 1,2,3,4 };
	std::vector<int> v = { 1,2,3,4 };
	
	f1(v.begin()); // ��ü�� �ݺ��� ����
	f1(x);		   // raw pointer ����
}