class Test
{
public:
	enum { value = 1 };
	typedef int DWORD;
};
int p = 0;

template<typename T> void foo(T a)
{
	// �Ʒ� 2�ٿ��� * �� �ǹ̸� ������ ������(1. ���ϱ�, 2. ������ ���� ����)
	
	// "Ŭ�����̸�::�̸�" ���� "�̸�"�� �ǹ̴� "��" �Ǵ� "Ÿ��" �Դϴ�.
//	Test::value * p; // ���ϱ� �ǹ�					=> ��
//	Test::DWORD * p; // ������ ���� p�� ���� �Ѱ�.		=> Ÿ��


	// �Ʒ� 2���� ������ ������
	// "T::�̸�" ó�� ǥ���ϴ� �����Ϸ��� "�̸�"�� ������ "��"���� �ؼ��մϴ�.
	T::value * p;  // ok
	T::DWORD * p;  // error
}


int main()
{
	Test t;
	foo(t);
}