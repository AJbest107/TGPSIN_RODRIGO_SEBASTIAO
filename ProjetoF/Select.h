#ifndef SELECT_H_INCLUDED
#define SELECT_H_INCLUDED

int Sel()
{
                            /*CORRIGIR ERRO DE DELAY NAS TECLAS*/
char op;
int w=0,a=0,b=0,o=0;


/*    printf(R"EOF(               _   ______ _____ _      __  __  _____
     /\       | | |  ____|_   _| |    |  \/  |/ ____|
    /  \      | | | |__    | | | |    | \  / | (___
   / /\ \ _   | | |  __|   | | | |    | |\/| |\___ \
  / ____ \ |__| | | |     _| |_| |____| |  | |____) |
 /_/    \_\____/  |_|    |_____|______|_|  |_|_____/
                                                    )EOF"); */


printf("\n\n\n");
gotoxy(15,10);
textcolor(BLACK);
textbackground(WHITE);
printf("batata");
gotoxy(35,10);
textcolor(WHITE);
textbackground(BLACK);
printf("arroz");
gotoxy(50,10);
printf("pãomania");
gotoxy(15,15);
printf("kkk-o-filme");
gotoxy(35,15);
printf("Slime");
gotoxy(50,15);
printf("teste21");

for(int i=1;i>w;i=1)
{
    op=getch();
    if(op== 'w' && a!=1)
    {
        a=a-1;
    }
    else if(op == 's' && a!=2)
    {
        a=a+1;
    }
    else if(op== 'a' && b!=1)
    {
        b=b-1;
    }
    else if(op== 'd' && b!=3)
    {
        b=b+1;
    }

    if(b==1 && a==1)
    {
 printf("\n\n\n");
gotoxy(15,10);
textcolor(BLACK);
textbackground(WHITE);
printf("batata");
gotoxy(35,10);
textcolor(WHITE);
textbackground(BLACK);
printf("arroz");
gotoxy(50,10);
printf("pãomania");
gotoxy(15,15);
printf("kkk-o-filme");
gotoxy(35,15);
printf("Slime");
gotoxy(50,15);
printf("teste21");
if(op==13)
{
    w=1;
    o=1;
}
    }
    else if(b==1 && a==2)
    {
        gotoxy(15,10);
printf("batata");
gotoxy(35,10);
printf("arroz");
gotoxy(50,10);
printf("pãomania");
gotoxy(15,15);
textcolor(BLACK);
textbackground(WHITE);
printf("kkk-o-filme");
textcolor(WHITE);
textbackground(BLACK);
gotoxy(35,15);
printf("Slime");
gotoxy(50,15);
printf("teste21");
if(op==13)
{
    w=1;
    o=2;
}
    }
    else if(b==2 && a==1)
    {
                gotoxy(15,10);
printf("batata");
gotoxy(35,10);
textcolor(BLACK);
textbackground(WHITE);
printf("arroz");
gotoxy(50,10);
textcolor(WHITE);
textbackground(BLACK);
printf("pãomania");
gotoxy(15,15);
printf("kkk-o-filme");
gotoxy(35,15);
printf("Slime");
gotoxy(50,15);
printf("teste21");
if(op==13)
{
    w=1;
    o=3;
}
    }
    else if(b==2 && a==2)
    {
        gotoxy(15,10);
printf("batata");
gotoxy(35,10);
printf("arroz");
gotoxy(50,10);
printf("pãomania");
gotoxy(15,15);
printf("kkk-o-filme");
gotoxy(35,15);
textcolor(BLACK);
textbackground(WHITE);
printf("Slime");
gotoxy(50,15);
textcolor(WHITE);
textbackground(BLACK);
printf("teste21");
if(op==13)
{
    w=1;
    o=4;
}
    }
    else if(b==3 && a==1)
    {
        gotoxy(15,10);
        printf("batata");
gotoxy(35,10);
printf("arroz");
gotoxy(50,10);
textcolor(BLACK);
textbackground(WHITE);
printf("pãomania");
gotoxy(15,15);
textcolor(WHITE);
textbackground(BLACK);
printf("kkk-o-filme");
gotoxy(35,15);
printf("Slime");
gotoxy(50,15);
printf("teste21");
if(op==13)
{
    w=1;
    o=5;
}
    }
    else if(b==3 && a==2)
    {
                gotoxy(15,10);
        printf("batata");
gotoxy(35,10);
printf("arroz");
gotoxy(50,10);
printf("pãomania");
gotoxy(15,15);
printf("kkk-o-filme");
gotoxy(35,15);
printf("Slime");
gotoxy(50,15);
textcolor(BLACK);
textbackground(WHITE);
printf("teste21");
textcolor(WHITE);
textbackground(BLACK);
if(op==13)
{
    w=1;
    o=6;
}
    }
}
clrscr();
return o;

}

#endif // SELECT_H_INCLUDED
