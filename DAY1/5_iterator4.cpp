#include <iostream>
#include <list>   
#include <vector>

// �ݺ��� ��ȿȭ
// => Ư�� �����̳��� � ��� �Լ���
//    �ݺ��ڸ� ��ȿȭ ��Ű�� ��, �˰� ����ؾ� �մϴ�.
// 
// => cppreference.com �� �����ؼ�
//    std::vector ã�� ������
int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	
	auto p = std::begin(v); // v.begin()

	std::cout << *p << std::endl; // 1


	v.resize(10); // �̼��� vector�� ����ϴ� ���۰� ���Ҵ�˴ϴ�.
				  // ������ ���� ���Ҵ� ��� �ݺ��ڴ� ����Ҽ� �����ϴ�
				  // interator invalidate(�ݺ��� ��ȿȭ ����)

	std::cout << *p << std::endl; // �����ұ�� ?
}



