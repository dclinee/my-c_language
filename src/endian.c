#include <stdio.h>
#include <stdbool.h>

bool IsBig_Endian()
{
	unsigned short test = 0x1234;

	if(*((unsigned char*)&test) == 0x12)
	{
		return true;
		printf("1");
	}
	else	
	{
		return false;
		
		printf("0");
	}

}

int main()
{
	IsBig_Endian();
	return 0;
}
