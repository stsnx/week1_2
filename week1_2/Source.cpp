#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char l[10001], temp;
	int i = 0, che[2] = { 0 };
	gets_s(l);
	for (i = 0; i < strlen(l); i++)
	{
		if (islower(l[i]))
			che[1] = 1;
		if (isupper(l[i]))
			che[0] = 1;
	}
	if (che[0] == 1 && che[1] == 1)printf("Mix");
	else if (che[0] == 1)printf("All Capital Letter");
	else if (che[1] == 1)printf("All Small Letter");
	return 0;
}
