#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };

	// 1. inplace, �� ����
//	auto p1 = std::remove(v1.begin(), v1.end(), 3);

	// 2. inplace, ������ ����
//	auto p2 = std::remove_if(v1.begin(), v1.end(), 
//						[](int n) { return n % 2 == 0; });


	// 3. copy, �� ����
	// copy(v1=>v2) �Ŀ� remove(v2) �� �ϴ� �� ���ٴ� 
	// remove_copy �� �ϸ� 2���� ��������� �ֱ� ������ ������ ����
	// sort_copy �� ����. ������ copy �� sort �� ����� �ð��� �ƴ϶� sort()�� �ξ� ��δ�.
	// �׷���, "copy �� sort" �ص� �ȴ�.

	// ���� ��ȯ�� p3�� v2�� �ݺ��� �Դϴ�.
	auto p3 = std::remove_copy(v1.begin(), v1.end(), 
							   v2.begin(), 
							   3);

	// 4. copy, ������ ����
	auto p4 = std::remove_copy_if(v1.begin(), v1.end(),
								 v2.begin(),
								[](int n) { return n % 2 == 0; });


	show(v1);
	show(v2);
}
