#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	// ����ڰ� -1�� �Է��Ҷ� ���� ��� �Է� �޾Ƽ� �����ϰ� �ʹ�.
	std::vector<int> v;

	int num = 0;

	while (1)
	{
		std::cin >> num;
		
		if (num == -1) break;

		v.push_back(num);
	}

}




