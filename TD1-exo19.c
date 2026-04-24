/*
*Algorithme nombre premier ou non*
VARIABLES
	var n,k,i;entier
DEBUT
	AFFICHE("Entrez n")
	LIRE n
	POUR(i<-1,i<=n,i++)
		SI(n%i==0)
			k++
		FIN SI
	FIN POUR
	SI(k==2)
		AFFICHE("C'est un nombre premier")
	SINON
		AFFICHE("Ce n'est pas un nombre premier")
	FIN SI
FIN
*/
#include<stdio.h>
#include<math.h>
int entrez(int i);
void sortie(int t);

int entrez(int i)
{
	printf("Entrez n :");
	scanf("%d",&i);
	return i;
}

void sortie(int t)
{
	int i,k=0;
	for(i=1;i<=t;i++)
	{
		if(t%i==0)
		{
			k++;
		}
	}
	if(k==2)
	{
		printf("%d est un nombre premier\n",t);
	}
	else
	{
		printf("%d n'est pas un nombre premier\n",t);
	}
}

int main()
{
	int a,n,k=0;
	n=entrez(n);
	sortie(n);
	return 0;
}
