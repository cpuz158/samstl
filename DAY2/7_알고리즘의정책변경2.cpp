#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>    // ��ġ ���� ����
#include <functional>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2;

//	std::partial_sum(v1.begin(), v1.end(), std::back_inserter(v2) );

//	std::partial_sum(v1.begin(), v1.end(), std::back_inserter(v2), 
//													std::multiplies<int>());

	std::adjacent_difference(v1.begin(), v1.end(),
							std::back_inserter(v2) ); // �⺻ ���� - 


	show(v2);
}
