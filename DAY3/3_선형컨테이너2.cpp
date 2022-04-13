
#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	// �迭 vs vector
	// �迭    : ũ�⸦ �����Ҽ� �����ϴ�. ����������� stack 
	// vector : ũ�� ������ ����(�����迭), v �� ����������, ��� ��ü�� ��������
	//						
	int x[5];				
	std::vector<int> v(5);	
	v.resize(10); // ũ�� ����
	

	// 1. ����
	std::vector<int> v1;		// ũ�� 0
	std::vector<int> v2(10);	// ũ�� 10, ��� ��� 0���� �ʱ�ȭ
	
	std::vector<int> v3(10, 3);	// ũ�� 10, ��� ��� 3���� �ʱ�ȭ
//	std::vector<int> v5 = {10, 3};
	std::vector<int> v5 { 10, 3 }; // �� �ڵ�� ���� �����մϴ�.

	std::vector<int> v4(v3);	// v3�� ������ vector

	std::vector<int> v6 = { 1,2,3 }; // 3���� 1,2,3 ���� �ʱ�ȭ.
	

	// 2. ���� - 3���� ���, ��, ��, ����
	v.push_back(10);
//	v.push_front(10); // vector �� ������� �ȵ�.
	
	auto p = v.begin();
	++p;

	v.insert(p, 20); //  v.insert(��ġ, ��) - ��ġ �տ� �ֱ� 

	// 3. ����, : pop_front(), pop_back(), erase() - ���� ��ġ

	// 4. ����
	int n1 = v[0];    // list �ȵ�.
	int n2 = v.at(0); // list �ȵ�. ���� �������� �ڿ��� ����.
	int n3 = v.front(); // ����/������ �ƴϹǷ� vector�� ����
	int n4 = v.back();

	// 5. ��� ����
	std::vector<int> v8 = { 1,2,3 };
	std::vector<int> v9 = { 1,2,3,4,5 };
	v8.assign(v9.begin(), v9.end());
	v8.clear(); // ��� ��� ����

	// 6. ��Ÿ �Լ���
	bool b = v.empty();
	int  n = v.size();

}