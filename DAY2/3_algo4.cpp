#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// s �� ��� ������ ������ ������
//	s.reverse(); // 1. ��� �Լ� ���
				// list �ȿ� �ִ� prev, next �� ���� ��ȯ
				// ��, ������ 2���� swap �ϴ� ����.

	std::reverse(s.begin(), s.end()); // 2. �˰��� ���
								// ����, swap(ù��°��Ұ�, ��������Ұ�)
								// list �� �����ϴ� ��Ұ� ũ�Ⱑ ū ����ü
								// ��� �ణ�� ���� �̽�!!

	show(s); // 10, 9, 8, 7, 6, 5, 4, 3, 2, 1

	return 0;
}
