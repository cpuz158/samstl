#include <vector>
#include <algorithm>
#include <functional>	
#include "show.h"
/*
class ClosureType1
{
public:
	inline auto operator()(int a, int b) const  { return a + b;	}
};

class ClosureType2
{
public:
	inline auto operator()(int a, int b) const { return a + b; }
};
*/
int main()
{
	// ��� ���� ǥ������ �ٸ� Ÿ���Դϴ�.
	auto f = [](int a, int b) { return a + b; };
	auto g = [](int a, int b) { return a + b; };

	std::cout << typeid(f).name() << std::endl;
	std::cout << typeid(g).name() << std::endl;

	// bool b1 =  (f == g);  // error. ���� �ٸ� Ÿ���� == �Ҽ� �����ϴ�
	// bool b2 =  (&f == &g);// error. �ٸ� Ÿ���̰�, ��ü ��ü�� �ٸ� ��ü.

//	auto f = [](int a, int b) { return a + b; };
//	auto f = ClosureType(); // �ӽð�ü�� �����ǰ� f�� �ӽð�ü�� ����Ű�°��� �ƴ϶�
							// "ClosureType f" �Դϴ�.
							// ClosureType �� ��ü f
}


