#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
//	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };


	auto p = std::begin(s);

	
	// �ݺ��� p�� 5ĭ �����ϰ� �ʹ�.
//	p = p + 5; // ok.. �׷���, �������� �ݺ��ڸ� ����
//	++p; ++p; ++p; ++p; ++p; // ok.. ��� �ݺ��� ����.
							 // �׷���, p�� ���� ���� �ݺ����̸� 
							 // ������ ���ڴ�
							 // 
	// �ݺ��ڸ� N ��ŭ �����ϴ� �Լ�.
	std::advance(p, 5); // 1. p�� ���������̸� + ���
						// 2.     ���������� �ƴϸ� ++ ���

	
	std::cout << *p << std::endl;
}