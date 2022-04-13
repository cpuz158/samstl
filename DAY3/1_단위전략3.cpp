#include <set> // Red Black Tree
#include <functional>
#include "show.h"

// STL �� ũ�� �񱳵� ��� "��������" ���� �մϴ�.
// �޸� �Ҵ�� ���� : allocate, deallocate �ʿ�
// ũ�� ��(Pred)���� : operator()(T a, T b) �� �־�� �Ѵ�.
//						a,b �� ũ�� ���� bool ��ȯ
template<typename T, typename Pred = std::less<T>, typename Alloc = std::allocator<T>>
class set
{
	Alloc ax; // �޸� �Ҵ��� �ʿ��Ҷ� ���
	Pred pred; // ����� ũ�� �񱳸� ���� ��ü.
public:
	void insert(const T& newElem)
	{
//		if (rootElem < newElem) // �̷��� ����� ũ�� ����å�� ��ü�Ҽ� �����ϴ�.
		if ( pred(newElem, rootElem) )
			add right child;

		else if (pred(rootElem, newElem))
			add left child;
		else
			fail; // set �� ����� �ߺ��� ������� �ʽ��ϴ�
				  // �̹� ��Ұ� �ִٴ°�.
	}
};



int main()
{
	std::set<int> s; // Red Black Tree �Դϴ�.

	s.insert(15);
	s.insert(25);
	s.insert(5);
	s.insert(17);
	s.insert(10);

	show(s);
}