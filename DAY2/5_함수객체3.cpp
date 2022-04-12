#include <iostream>
#include <bitset>  // STL �� �����ϴ� "��Ʈ"�� �����ϴ� Ŭ����

// �Ϲ� �Լ��� "���¸� ������ ������"
// �Լ� ��ü�� "���¸� ������ �ֽ��ϴ�." => ��� ����Ÿ�� ����� �ִٴ� �ǹ�.

class URandom
{
	std::bitset<10> bs;
	bool recycle;
public:
	URandom(bool b = false) : recycle(b)
	{
//		bs.set(5); // 5��° ��Ʈ�� 1��
		bs.set();  // ��� ��Ʈ�� 1��
	}

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





