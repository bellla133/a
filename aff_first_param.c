#include <unistd.h>


int main (int argv , char **argc )
{
	if(argv >=2)
	{
		int	i=0;
		while(argc[1][i] != '\0')
		{
			write(1, &argc[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else if(argv == 1)	
	{
		write(1, "\n", 1);
	}

return 0;
}



