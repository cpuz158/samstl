#include <iostream>
#include <list>
#include <iterator>

int main()
{
	std::list<int> s = { 1, 2, 3, 4, 5};

	// �����̳ʿ� ��Ҹ� �ִ� ���
	// 1. push_xxx()�迭 �Լ� ���
	s.push_back(10);

	// 2. ���Թݺ��� ���
	// �Ʒ� �ڵ忡�� "p" �� �ݺ����Դϴ�
	std::back_insert_iterator< std::list<int> > p(s);

	// p�� ���� ������ s �� ���� �߰� �˴ϴ�.
	*p = 20; // s.push_back(20);

	for (auto e : s)
		std::cout << e << ", ";
}
