#include <iostream>

template<typename T>
class Ptr
{
	T* obj;
	int* ref;
public:
	Ptr(T* p = 0) : obj(p) 
	{
		ref = new int;
		*ref = 1;
	}

	// ������� ����� ����Ʈ �������� ���� ������
	Ptr(const Ptr& p) : obj(p.obj), ref(p.ref)
	{
		++(*ref);
	}

	~Ptr() 
	{ 
		if (--(*ref) == 0)
		{
			delete obj;
			delete ref;
		}
	}
	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};

int main()
{
	// �Ʒ� �ڵ�� ��������� 3�� �˴ϴ�.
	Ptr<int> p1 = new int;
	Ptr<int> p2 = p1; 
	Ptr<int> p3 = p1;
}



