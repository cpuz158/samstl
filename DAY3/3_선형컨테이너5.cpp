#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "show.h"

// �����̳ʸ� �����ϴ� �����̳�

int main()
{
	std::vector<int> v1(10, 0);
	v1[0] = 10;

	// vector �� ������ matrix ó�� ����ϴ� ���
	std::vector< std::vector<int> > v2(10, std::vector<int>(10));

	v2[0][0] = 10; 



	std::vector< std::list<int> > v3(10);
	
	v3[0].push_back(10);
	v3[0].push_back(20);
	v3[0].push_back(30);

	v3[1].push_back(1);
	v3[2].push_back(2);
	v3[3].push_back(3);

}