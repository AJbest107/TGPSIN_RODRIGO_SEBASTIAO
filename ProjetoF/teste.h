#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED

test()
{
FILE*logg;
char nome1[35],nome[35],pass1[35],pass[35],nfic[35];
int op,op1,op2,op3,resultado,selecionar,linha;
printf("1-criar uma conta\n2-fazer login\n");
scanf("%i",&op);
system("cls");
fflush(stdin);
if(op==1)
{
printf("Ira trabalhar como:\n1-medico(a)\n2-enfermeiro(a)\n");
scanf("%i",&op1);
system("cls");
fflush(stdin);
if(op1==1)
{ printf("Digite o seu nome\n");
gets(nome);
printf("Digite uma palavra passe\n");
gets(pass);
system("cls");
logg=fopen("Utilizador.txt","a");
fprintf(logg,"M-");
fprintf(logg,nome);
fprintf(logg,"\n"); fclose(logg);
logg=fopen("password.txt","a");
fprintf(logg,pass);
fprintf(logg,"\n");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".\n");
printf("Conta criada com sucesso\n");
fclose(logg);
}
else if(op1==2)
{ printf("Digite o seu nome\n");
gets(nome);
printf("Digite uma palavra passe\n");
gets(pass);
system("cls");
logg=fopen("Utilizador.txt","a");
fprintf(logg,"E-");
fprintf(logg,nome);
fprintf(logg,"\n"); fclose(logg);
logg=fopen("password.txt","a");
fprintf(logg,pass);
fprintf(logg,"\n");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".\n");
printf("Conta criada com sucesso\n");
fclose(logg); }
else
{
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".\n");
printf("ERRO\n");
test();
}}
else if(op==2)
{
logg=fopen("Utilizador.txt","r");
printf("Algum destes nomes é o seu:\n\n");
while(fscanf(logg,"%s ",&nome)!=EOF){
printf("%s\n",nome);
}fclose(logg);
printf("Se sim selecione 1 se nao 2\n");
scanf("%i",&op2);
fflush(stdin);
if(op2==1)
{
printf("Qual é o seu nome\n");
gets(nome1);
logg=fopen("Utilizador.txt","r");
linha=0;
while(fscanf(logg,"%s ",&nome)!=EOF){
linha++;
resultado=strcmp(nome1,nome);
if(resultado==0)
{
printf("Nome encontrado\n");
selecionar=linha; break;
} }fclose(logg);
if(resultado==0)
{
printf("Digite a palavra passe\n");
gets(pass1);
logg=fopen("password.txt","r");
linha=0;
while(fscanf(logg,"%s ",&pass)!=EOF){
linha++;
if(selecionar==linha)
{
if(strcmp(pass1,pass)==0)
{
printf("password correta\n");
system("cls");
}
else
{
printf("pass errada\n");
test();
}
break; } }fclose(logg);
}
}}
else
{
printf("ERRO\n");
test();
}
return op1;
}


#endif // TESTE_H_INCLUDED
