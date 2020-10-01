#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i, k, j, y, o, m, n, z;
	char senha[200];
	char senhac[200];
	char senha2[200];
	char texto[200];
	char crip[200];
	char escolha;
	printf("Digite a frase para criptografia\n");
	fgets (texto, 200, stdin);
	y = strlen(texto)-2;
	fflush(stdin);
	printf("chave para criptografia\n");
	scanf("%s", &senha);
	k = strlen(senha);
	senhac[z]=senha[j];
	fflush(stdin);
	i=0;
	j=0;
	if (k>y){
	k=y;
	}
	for (i >= 0; i <= y; i++)
	{
	   if (j>=k)
	   j=0;
   	if ((int)senha[j]>= 65 && senha[j]<= 90){
	   senha[j]=senha[j]-65;
	}
	if ((int)senha[j]>= 97 && senha[j]<= 122){
	   senha[j]=senha[j]-97;
	}
	else
	if ((senha[j]>=32 && senha[j]<=64) || (senha[j]>=91 && senha[j]<=96) || (senha[j]>=123 && senha[j]<=126))
	{
	printf("senha invalida, escolha somente letras");
	return 1;
	}
    texto[i]=((int)texto[i] + (int)senha[j]);
     if ((texto[i]>=(32+senha[j]) && texto[i]<=(64+senha[j])) || (texto[i]>=(91+senha[j]) && texto[i]<=(96+senha[j])) || (texto[i]>=(123+senha[j]) && texto[i]<=(126+senha[j])))
	{
	texto[i]=texto[i]-senha[j];
	j--;
	}
	else{
    if (texto[i]>=123){
    texto[i]=texto[i] - 26;
	}
	else
	if (texto[i]>= (65+senha[j]) && texto[i]<= (90+senha[j])){
	if (texto[i]>=91){
	texto[i]=texto[i] - 26;
	}}}
	if(m==y){
	strcpy(crip, texto);
	printf("%s", crip);
	}
	m++;
	j++;
	}
	printf("deseja descriptografar? se sim digite s\n");
	scanf("%c", &escolha);
	fflush(stdin);
	if (escolha==115 || escolha==83){
		printf("chave para descriptografia\n");
	scanf("%s", &senha2);
	if (senhac[z]==senha2[n]){
		y=0; j=0; m=0;
		o=strlen(crip)-1;
		for (m >= 0; m <= o; m++)
	{
	   if (j>=k)
	   j=0;
    crip[m] = ((int)crip[m] - (int)senha[j]);
     if ((crip[m]>=(32-senha[j]) && crip[m]<=(64-senha[j])) || (crip[m]>=(91-senha[j]) && crip[m]<=(96-senha[j])) || (crip[m]>=(123-senha[j]) && crip[m]<=(126-senha[j])))
	{
	crip[m]=crip[m]+senha[j];
	j--;
	}
	else{
    if (crip[m]>=(97-senha[j]) && crip[m]<=(122-senha[j]) &&(crip[m]<=96)){
    crip[m]=crip[m] + 26;
	}
	else
	if (crip[m]>= (65-senha[j]) && crip[m]<= (90-senha[j]))
	{
	if (crip[m]<=64){
	crip[m]=crip[m] + 26;
	}}}
	printf("%c", crip[m]);
	j++;
	}
	}
	else{
	printf("senha invalida");
	return 1;
	}
	}
	return 0;
}