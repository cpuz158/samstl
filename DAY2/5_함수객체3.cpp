#include <iostream>


class URandom
{
public:
	int operator()()
	{
		return rand() % 10;
	}
};

URandom urand; // ����, urand �� �Լ��� �ƴ� ��ü�Դϴ�.
			   // ������, �Լ�ó�� ��밡���մϴ�.

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





