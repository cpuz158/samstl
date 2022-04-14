#include <iostream>
#include <unordered_set>
#include "show.h"

int main()
{
	// set           : tree �� ����� set
	// unordered_set : hash �� ����� set
	std::unordered_set<int> s;

	// set �� unordered_set �� ������ ���� �����մϴ�.
	// �׷���, ���ۿ����� ������ �ٸ��ϴ�.
	s.insert(10); // set : root ��ҿ� ���ؼ� left/right �ڽ����� ����
				  // unordered_set : 30�� hash �Լ��� ������
				  //				hash ���� ������ ����
	s.insert(35);
	s.insert(20);
	s.insert(25);

	auto p = s.find(20);  // �ؽ� �Լ��� ����ؼ� �˻�

	std::cout << *p << std::endl;

	show(s);
}

