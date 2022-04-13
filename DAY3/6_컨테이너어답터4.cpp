#include <stack>
#include <queue> // queue, priority_queue
#include <iostream>
#include "show.h"

int main()
{
	// �켱����ť : ��Ҹ� ������ �켱������ ���� ����
	//			��Ұ� ������ �ȴ�.
	
	// priority_queue<����Ÿ��, ���������̳�, �켱����������Ҷ� ������Լ���üŸ��>"

//	std::priority_queue<int> pq;

	std::priority_queue<int, std::vector<int>, std::greater<int> > pq;
	
	
	pq.push(10);
	pq.push(-10);
	pq.push(-20);
	pq.push(20);
	pq.push(15);

	std::cout << pq.top() << std::endl; 
	pq.pop();
	std::cout << pq.top() << std::endl; 

}



