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
		if (bs.none()) // ��� 0�̸� ���̻� ������ ���Ҽ� ����
		{
			if (recycle == true) // �����Ѵٸ�
				bs.set();  // �ٽ� ��� 1
			else
				return -1;
		}
		int v = -1;
		while ( ! bs.test(v = rand() % 10) );
		bs.reset(v); 
		return v;
	}
};
//URandom urand; // ����, urand �� �Լ��� �ƴ� ��ü�Դϴ�.
			   // ������, �Լ�ó�� ��밡���մϴ�.
URandom urand(true);
int main()
{
	for (int i = 0; i < 15; i++)
		std::cout << urand() << std::endl;
}





