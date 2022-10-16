#include "struct.h"
//헤더 파일을 여러 파일에 포함시킬 때에
//반드시 단 한번만 포함 시켜야 한다.
#include "new.h"
int main()
{
	MyStruct Granluz = { "Granluz", 30 };

	display(Granluz);
	return 0;
}

