#include <iostream>
#include <iterator>
#include <list>
#include <algorithm> 
#include <fstream> // C++ ǥ�� ���� Ŭ����

int main()
{
	std::ofstream fout("a.txt");
	fout << "hello"; // ���Ͽ� ����


	std::ostream_iterator<int> p(fout, " ");
	*p = 100; // fout << 100 << " "

	std::list<int> s = { 1,2,3 };


	std::copy(s.begin(), s.end(), p);
}