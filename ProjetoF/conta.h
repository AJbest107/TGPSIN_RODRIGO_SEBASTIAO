#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

conta()
{
FILE*contaN;
FILE*contaP;
char name1[35],name[35],pass1[35],pass[35];
int op=0,op2,op3,a=0,b=0,L=0;
printf("1-criar uma conta\n2-fazer login\n");
scanf("%i",&op);
system("cls");
fflush(stdin);
if(op==1)
{
    printf("Nome de utilizador ------>");
gets(name);
printf("\n\nPalavra passe ------>");
gets(pass);
system("cls");
contaN=fopen("contaN.txt","a");
fprintf(contaN,"M-");
fprintf(contaN,name);
fprintf(contaN,"\n");
fclose(contaN);
contaP=fopen("contaP.txt","a");
fprintf(contaP,pass);
fprintf(contaP,"\n");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".\n");
printf("A conta foi criada com sucesso\n");
fclose(contaP);
sleep(2);
system("cls");
conta();
}
else if(op==2)
{
printf("Nome de utilizador ------>");
gets(name1);
contaN=fopen("contaN.txt","r");
L=0;
while(fscanf(contaN,"%s ",&name)!=EOF){
L++;
a=strcmp(name1,name);
if(a==0)
{
b=L;




}



}fclose(contaN);
if(b==0)
{
printf("Palavra passe ------>\n");
gets(pass1);
contaP=fopen("contaP.txt","r");
L=0;
while(fscanf(contaP,"%s ",&pass)!=EOF){
L++;
if(b==L)
{




if(strcmp(pass1,pass)==0)
{

system("cls");
}
else
{
printf("Nome ou palavra pass incorretos\n");
conta();
}




}



}fclose(contaP);
}
}





}




#endif // CONTA_H_INCLUDED
