#include <iostream>

template<typename T>
class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}
	T* operator->() { return obj; }
	T& operator*() { return *obj; }
	~Ptr() { delete obj; }

	// ���� ������ ��ü�� ����Ҽ� ���� �Ѵ�.
	Ptr(const Ptr& p) = delete; // ��������� ����
	Ptr& operator=(const Ptr&) = delete; // ��������ڸ� �����ϸ�
										 // ���Կ����ڵ� �����ϴ� ���� ��Ģ�Դϴ�.
};

int main()
{
	Ptr<int> p1 = new int;
	*p1 = 100;
	std::cout << *p1 << std::endl;

//	Ptr<int> p2 = p1; // ���� �����ڰ� �����Ǿ����Ƿ� "������ ����"
}

