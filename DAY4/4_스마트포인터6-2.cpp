// 4_����Ʈ������6-2
#include <memory>
#include <cstdlib>

int main()
{
//	FILE* f = fopen("a.txt", "wt");
//	fclose(f);

	std::shared_ptr< FILE > pf( fopen("a.txt", "wt"), fclose );

	fprintf(pf.get(), "hello");

}