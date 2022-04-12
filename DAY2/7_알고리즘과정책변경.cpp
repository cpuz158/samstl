// 3_�˰������å����
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>    // ��ġ ���� ����
#include <functional>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

	// 1. sort �� �� ��å.
//	std::sort(v1.begin(), v1.end(), [](int a, int b) {return a < b; });

	// 
//	int n = std::accumulate(v1.begin(), v1.end(), 0); // +�� �ձ��ϱ�

	int n = std::accumulate(v1.begin(), v1.end(), 1,
									[](int a, int b) { return a * b; });	

	// C++11 ���Ŀ��� ���� ǥ�������� ���� ������
	// C++11 �������� <functional> �ȿ� �ִ� std::plus<>, std::multiples<> 
	// ���� �Լ� ��ü ���
	int n = std::accumulate(v1.begin(), v1.end(), 1, 
											std::multiplies<int>() );

	std::cout << n << std::endl; // 55
}
