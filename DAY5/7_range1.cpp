// 7_range1
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	
	// �Ʒ� �ڵ带 ������ �˾� ���ô�.
	for (auto e : v)
	{
		std::cout << e << std::endl;
	}
	//------------------------------------
	// �� �ڵ带 ���� �����Ϸ��� ����� �ڵ�
	// �ٽ� : for(auto e : "�����̳�")  ���� "�����̳��� begin,end()" ����� �� ����ϼ���
	auto first = v.begin();
	auto last = v.end();

	for (auto p = first; first != last; ++p)
	{
		auto e = *p;
		//----------------------
		// ���⼭ ���� ����� �ڵ�
		std::cout << e << std::endl;
	}




}
// ���� ����Ʈ
// 1. gotbolt.org    ==> C++(�Ӿƴ϶� ���� ��� ���)�� �������� Ȯ�ΰ���
// 2. cppinsights.io ==> �پ��� C++ ������ ������ �����ִ� ����Ʈ