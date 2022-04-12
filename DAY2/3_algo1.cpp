#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 1. ���
// "�˰���"�� �Ϲ����� �ǹ� : ������ �ذ��ϴ� ���
// STL ������ "�˰���"     : std::find() ���� ����Լ��� �ƴ�
//						    "�Ϲ� �Լ� ���ø�" �� �ǹ�

// 2. ��� ����
// #include <algorithm>// ��κ��� �˰���
// #include <numeric>  // ��ġ ���� ���� �˰���
// #include <memory>   // �޸� �۾� ���� �˰���

// �˰��� �⺻
int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	
	// 3. ����
	// �˰���( first, last, �߰����ڵ�..)
	auto p = std::find( v.begin(), v.end(), 3);
//	auto p = std::find( v, 3); // �̷��� �ϴ°� �� ������ ������ ?
							   // STL ó�� ���鶧.. �̷��� �Ϸ��� �ߴµ�,
							   // ����������� ����� ������.(C++98 ����)
	// �׷���, C++20 ���ʹ� ������ �����ϴ�.
//	auto p1 = std::ranges::find(v, 3); // ok.. 


	return 0;
}



















//
