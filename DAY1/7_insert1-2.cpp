#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::list<int>   s = { 1,2,3 };
	std::vector<int> v = { 1,2,3 };

	// ���Թݺ��ڶ� ?
	// => �����̳ʿ� ��Ҹ� �߰� �Ҷ� ����ϴ� �ݺ���
	
	// ����ϴ� ��� 1. ���Թݺ��� Ŭ���� �̸� ���� ���.
	std::back_insert_iterator< ? > p1(s);
	std::back_insert_iterator< ? > p2(v);
}