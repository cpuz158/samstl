// ��� ��� �Լ��� ������ �ƴ� �ʼ� �����Դϴ�.
// ��� �Լ��� ���鶧, ��ü�� ���¸� �������� ���� ��� ����Լ�(getter)��
// �ݵ�� "��� ��� �Լ�"�� �ؾ� �մϴ�.

class Rect
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h) : x{ x }, y{ y }, w{ w }, h{ h } {}

	int getArea() const { return w * h; }
};

//void foo(Rect r)   // ����� ���� Ÿ���� ���ڷ� �������� call by value �� �����ʴ�
void foo( const  Rect& r)
{
	int n = r.getArea(); 
}
int main()
{
	Rect r(1,2,3,4);	 // �����ü �ƴ�. 
	int n = r.getArea(); // ok. 
	foo(r);
}