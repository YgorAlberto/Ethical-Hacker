//Fazendo programas em Linguagem C

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

	printf ("Fazendo um Programa Maluco\n");
	
	int port;
	char ip[12];
	float ver = 1.1;
	int i;

	printf ("Informe o Host: \n");
	fgets (ip,12,stdin); //permite uma entrada mais segura sem a possibilidade de uma inserção maliciosa.
	//scanf ("%s",&ip);

	printf ("Informe a Porta: \n");
	scanf ("%i",&port);


	printf ("\nVersão do Script: %1.f\n",ver);
	printf ("\nVarrendo o IP: %s na porta %i \n",ip,port);

	if(argc<2){

		printf ("Passe o IP e a PORTA");
	} else {
	for (i=0;i<=10;i++)
	{

		printf ("\nVarrendo o IP: %s.%i na porta %s \n\n\n",argv[1],i,argv[2]);

	}}

	system ("ifconfig");

	return 0;
} 
