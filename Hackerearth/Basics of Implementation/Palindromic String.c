#include <stdio.h>

#include <string.h>

void main()

{

	int x,v;

	v=0;

	char S[100];

	scanf("%s",S);

	x=strlen(S)-1;

	for (int i=0; i<=x; i++)

	{

		if (S[i]==S[x])

		{

			v=v;

		}

		else

		{

			v++;

		}

		x--;

	}

	if (v==0)

	{

		printf("YES\n");

	}

	else

	{

		printf("NO\n");

	}

}