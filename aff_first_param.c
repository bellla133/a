#include <unistd.h>


int main (int argv , char **agrc )
{
	if(argv >=2)
	{
		int	i=0;
		while(argc[1][i]= '\0')
		{
			char j[] =argc[1][i];
			write(1, &j[], 1);
			i++;
		}
	}
	else if(argv == 1)	
	{
		write(1, "\n");
	}


}



