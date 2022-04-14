#include "show.h"
#include <set>


// set �� ����� ���� Ÿ���� ��������
// ==> ũ�� �񱳰� �����ؾ� �Ѵ�.
// ��� 1. Ÿ���� "<" ������ �����ϵ��� ������ ������ �Լ� ����
//        => ��, ��� ��� �Լ� �� ���弼��
//        => �Ϲ������δ� < �� ����� <=, >, >=, ==, != � �����ϴ°��� �����ϴ�.
//        => C++20 ���� "<=>" �� �� �����ڸ� �Ѱ��� ����� 6�� �񱳿����� �ڵ�����
// 
// ��� 2. Point ��ü 2���� ũ�� ���Ҽ� �ִ� �Լ� ��ü�� ���� 
//        set �� 2��° ���ø� ���ڷ� ����

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}

//	bool operator<(const Point& pt) const  {	return x < pt.x;	}
};

struct PointCompare
{
	bool operator()(const Point& p1, const Point& p2) const
	{
		return p1.x < p2.x;
	}
};

int main()
{
//	std::set<Point> s;  // �� ���� �񱳽� "less" ���
						// less�� �ᱹ "<" ����ϹǷ� Point ��ü�� < �����ؾ���

	std::set<Point, PointCompare> s; // Point ��ü�� < ������ ���� �ʾƵ�
									// ��� ����.
									// Point 2�� �񱳽� PointCompare ��ü���


	s.insert(Point(5, 5)); 
	s.emplace(3, 2);
	s.emplace(2, 1);
	s.emplace(1, 5);

}










