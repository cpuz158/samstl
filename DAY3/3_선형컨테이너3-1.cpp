#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	// ����ڰ� -1�� �Է��Ҷ� ���� ��� �Է� �޾Ƽ� �����ϰ� �ʹ�.
//	std::vector<int> v(100); // �̷��� �� ���� 
							 // �׻� size = 100 �̹Ƿ� 
							 // � �Է� �Ǿ����� �ľ��� �ȵ˴ϴ�.

	std::vector<int> v;
	v.reserve(100); // 100 ���� �̸� Ȯ��..

	int num = 0;

	while (1)
	{
		std::cin >> num;
		
		if (num == -1) break;

		v.push_back(num);
	}
	std::cout << v.size() << std::endl;

}




