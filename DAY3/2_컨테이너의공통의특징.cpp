// STL �����̳��� Ư¡

std::list<int> s = { 1,2,3 };


// 1. ��� Ÿ���� �ִ�.
std::list<int>::value_type n = s.front();
std::list<int>::size_type    = s.size();

class AAA
{
private:
	int data; // ��� ����Ÿ

public:
	void foo() {} // ��� �Լ�

	using iterator = slist_iterator;
	using value_type = int;
};



// 2. ��ȯ�� ���Ÿ� ���ÿ� ���� �ʴ´�.
//    => �׷��� "��Ƽ������ ȯ�濡�� ����, �� ����ȭ�� �ʿ��մϴ�."
std::list<int> s = { 1,2,3 };

int n = s.back();	// ��ȯ��. ���ŵ��� �ʴ´�.
s.pop_back();		// ���Ÿ� �Ѵ�. ��ȯ Ÿ���� void



// 3. ���� ������ ���� ����Ѵ�.
std::list<int, MyAlloc<int>> s2;
std::set<int, greater<int>, MyAlloc<int>> ss;
