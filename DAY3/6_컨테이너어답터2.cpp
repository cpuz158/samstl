// 3���� �����̳� ����Ͱ� �ֽ��ϴ�.
#include <stack>
#include <queue> // queue, priority_queue
#include "show.h"

int main()
{
	std::stack<int> s1;
	s1.push(10);

	// ���� �����̳ʸ� �����ϴ� ���
	std::stack<int, std::vector<int> > s2;

	// ���� : stack s3�� ���弼��
	// 1. ���� �����̳� vector�� �ϼ���
	// 2. ��������3-1�� �ִ� "debug_alloc" �� ����� ������.
	
	std::stack< ? > s3;

	s3.push(10);
	s3.push(20);

}