#include <iostream>
#include <bitset> 

template<int COUNT, int BASE = 0> 
class URandom
{
	std::bitset<COUNT> bs;
	bool recycle;
public:
	URandom(bool b = false) : recycle(b)
	{		
		bs.set();
	}
	int operator()()
	{
		if (bs.none())
		{
			if (recycle == true)
				bs.set();  
			else
				return -1;
		}
		int v = -1;
		while (!bs.test(v = rand() % COUNT));
		bs.reset(v);
		return v + BASE;
	}
	void reset() { bs.set(); } // ��� 1��..

	int count() { return bs.count(); }   // ���� �ִ� ������ ���� ( 1�� �� ��Ʈ�� ����)
};

URandom<100, 100> urand(true); // 100 ~ 199 �� ���� ���ϴ� ����

int main()
{
	std::cout << urand.count() << std::endl; // 100

	for (int i = 0; i < 15; i++)
		std::cout << urand() << ", ";
	std::cout << std::endl;

	std::cout << urand.count() << std::endl; // 85
}





