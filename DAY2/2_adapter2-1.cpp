// 2_adapter2-1
#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10 };

	// �־��� �������� 3�� ã�� �ʹ�.
	auto ret1 = std::find(s.begin(),  s.end(),  3); // �տ��� ���� �˻�
	auto ret2 = std::find(s.rbegin(), s.rend(), 3); // �ڿ��� ���� �˻�

	std::list<int> s2;

	// s�� ��� ������ s2�� �����ϴµ�, �Ųٷ� �ϰ� �ʹ�.??

	show(s2); // 10,9, 3,7, 6,5,4,3,2,1
}
