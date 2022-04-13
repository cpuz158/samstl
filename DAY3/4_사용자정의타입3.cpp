
#include <vector>
#include <algorithm>
#include "show.h"
class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}

	~Point() {  }

	void dump() const 	{	std::cout << x << ", " << y << std::endl;	}

	inline bool operator<(const Point& p1, const Point& p2) const
	{
		return p1.x < p2.x;
	}
};

int main()
{
	std::vector<Point> v;

	v.emplace_back(1, 2); // Point(1,2)
	v.emplace_back(2, 3);
	v.emplace_back(3, 2);
	v.emplace_back(0, 1);

	// �ٽ� : 1. ����� ���� Ÿ���� �����̳ʿ� �ִ°��� ���� �����ϴ�.
	// 
	// 2. �׷���, �Ϻ� �˰��� ����� �˰����� �䱸�ϴ� ������ �߻����ϼ���

	// sort �ҷ��� Point Ÿ���� ��ü 2���� ���� ũ�� �񱳰� �����ؾ� �մϴ�.
//	std::sort(std::begin(v), std::end(v)); // error

	// ��� 1. sort �� ������ ���ڷ� Point 2���� ���ϴ� ������ ����
//	std::sort(std::begin(v), std::end(v), 
//		[](const Point& p1, const Point& p2) { return p1.x < p2.x; });

	// ��� 2. Point Ÿ�� �ȿ� "operator<()" �� ���� ũ�� �񱳰� �����ϵ���
	Point p1(1, 2);
	Point p2(1, 2);
	bool b = p1 < p2;

	std::sort(std::begin(v), std::end(v)); // ok.. < �����ϹǷ�

}




