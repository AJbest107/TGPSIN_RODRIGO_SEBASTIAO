#ifndef SESSAO_H_INCLUDED
#define SESSAO_H_INCLUDED

struct h
{
    int h1,h2,h3,h4,h5;
};

se(int o)
{
    struct h A;
char ho1[]="12h35",ho2[]="13h00",ho3[]="13h30",ho4[]="14h30",ho5[]="15h00",ho6[]="15h40",ho7[]="15h45",ho8[]="16h30",ho9[]="16h35",ho10[]="17h30";
char ho11[]="18h00",ho12[]="18h30",ho13[]="19h00",ho14[]="19h35",ho15[]="21h00",ho16[]="21h30",ho17[]="22h00",ho18[]="22h50",ho19[]="23h00",ho20[]="00h20",ho21[]="00h30";
char S[20000],t[5][6];
int z=0,z1=0,z2=0,z3=0,z4=0,z5=0,a=0;

FILE * H1;FILE * H2;FILE * H3;FILE * H4;FILE * H5;FILE * H6;
FILE * HO1;FILE * HO2;FILE * HO3;FILE * HO4;FILE * HO5;

FILE * se;




do{
/*    printf(R"EOF(
     /\       | | |  ____|_   _| |    |  \/  |/ ____|
    /  \      | | | |__    | | | |    | \  / | (___
   / /\ \ _   | | |  __|   | | | |    | |\/| |\___ \
  / ____ \ |__| | | |     _| |_| |____| |  | |____) |
 /_/    \_\____/  |_|    |_____|______|_|  |_|_____/
                                                    )EOF"); */

    printf("\n\n");
    if(o==1)
    {
    se=fopen("s/s1.txt","a+");
    while(fscanf(se,"%s",&S)!= EOF)
    {
    printf("\t\t\t%s\n",S);
    }
    gotoxy(35,10);
    printf("\n\nDigite o número correspondente á sessão que deseja ir ------>");
    scanf("%i",&z);
    H1=fopen("H/H1.txt","r");
    fscanf(H1,"%i",&A.h1);
    H2=fopen("H/H2.txt","r");
    fscanf(H2,"%i",&A.h2);
    H3=fopen("H/H3.txt","r");
    fscanf(H3,"%i",&A.h3);
    H4=fopen("H/H4.txt","r");
    fscanf(H4,"%i",&A.h5);
    H5=fopen("H/H5.txt","r");
    fscanf(H5,"%i",&A.h5);
    fclose(H1);
    fclose(H2);
    fclose(H3);
    fclose(H4);
    fclose(H5);
    if(z==1&&A.h1==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h1=1;
        strcpy(t[1],ho3);
        HO1=fopen("HO/HO1.txt","w");
        fprintf(HO1,"%s\n\n",t[1]);
        H1=fopen("H/H1.txt","w");
        fprintf(H1,"%i",A.h1);
        fclose(HO1);
        fclose(H1);
        sleep(2);
        system("cls");
    }
    else if(z==1 && A.h1==1 || z==1 && A.h1==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
     /*________________________________________________________________________________________________________________________*/
     else if(z==2&&A.h2==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h2=1;
        strcpy(t[2],ho7);
        HO2=fopen("HO/HO2.txt","w");
        fprintf(HO2,"%s\n\n",t[2]);
        H2=fopen("H/H2.txt","w");
        fprintf(H2,"%i",A.h2);
        fclose(HO2);
        fclose(H2);
        sleep(2);
        system("cls");
    }
    else if(z==2 && A.h2==1 || z==2 && A.h2==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
    /*________________________________________________________________________________________________________________________*/
     else if(z==3&&A.h3==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h3=1;
        strcpy(t[3],ho11);
        HO3=fopen("HO/HO3.txt","w");
        fprintf(HO3,"%s\n\n",t[3]);
        H3=fopen("H/H3.txt","w");
        fprintf(H3,"%i",A.h3);
        fclose(HO3);
        fclose(H3);
        sleep(2);
        system("cls");
    }
    else if(z==3 && A.h3==1 || z==3 && A.h3==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
     /*________________________________________________________________________________________________________________________*/
     else if(z==4&&A.h4==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h4=1;
        strcpy(t[4],ho11);
        HO4=fopen("HO/HO4.txt","w");
        fprintf(HO4,"%s\n\n",t[4]);
        H4=fopen("H/H4.txt","w");
        fprintf(H4,"%i",A.h4);
        fclose(HO4);
        fclose(H4);
        sleep(2);
        system("cls");
    }
    else if(z==4 && A.h4==1 || z==4 && A.h4==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
    }
    if(o==2)
    {
    se=fopen("s/s2.txt","a+");
    while(fscanf(se,"%s",&S)!= EOF)
    {
    printf("\t\t\t%s\n",S);
    }
    gotoxy(35,10);
    printf("\n\nDigite o número correspondente á sessão que deseja ir ------>");
    scanf("%i",&z1);
    H1=fopen("H/H1.txt","r");
    fscanf(H1,"%i",&A.h1);
    H2=fopen("H/H2.txt","r");
    fscanf(H2,"%i",&A.h2);
    H3=fopen("H/H3.txt","r");
    fscanf(H3,"%i",&A.h3);
    H4=fopen("H/H4.txt","r");
    fscanf(H4,"%i",&A.h5);
    H5=fopen("H/H5.txt","r");
    fscanf(H5,"%i",&A.h5);
    fclose(H1);
    fclose(H2);
    fclose(H3);
    fclose(H4);
    fclose(H5);
    if(z1==1&&A.h1==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h1=1;
        strcpy(t[1],ho4);
        HO1=fopen("HO/HO1.txt","w");
        fprintf(HO1,"%s\n\n",t[1]);
        H1=fopen("H/H1.txt","w");
        fprintf(H1,"%i",A.h1);
        fclose(HO1);
        fclose(H1);
        sleep(2);
        system("cls");
    }
    else if(z1==1 && A.h1==1 || z1==1 && A.h1==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
     /*________________________________________________________________________________________________________________________*/
     else if(z1==2&&A.h2==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h2=1;
        strcpy(t[2],ho10);
        HO2=fopen("HO/HO2.txt","w");
        fprintf(HO2,"%s\n\n",t[2]);
        H2=fopen("H/H2.txt","w");
        fprintf(H2,"%i",A.h2);
        fclose(HO2);
        fclose(H2);
        sleep(2);
        system("cls");
    }
    else if(z1==2 && A.h2==1 || z1==2 && A.h2==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
    /*________________________________________________________________________________________________________________________*/
     else if(z1==3&&A.h4==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h4;
        strcpy(t[4],ho17);
        HO4=fopen("HO/HO4.txt","w");
        fprintf(HO4,"%s\n\n",t[4]);
        H4=fopen("H/H4.txt","w");
        fprintf(H4,"%i",A.h4);
        fclose(HO4);
        fclose(H4);
        sleep(2);
        system("cls");
    }
    else if(z1==3 && A.h4==1 || z1==3 && A.h4==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
     /*________________________________________________________________________________________________________________________*/
     else if(z1==4&&A.h5==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h5=1;
        strcpy(t[5],ho21);
        HO5=fopen("HO/HO5.txt","w");
        fprintf(HO5,"%s\n\n",t[5]);
        H5=fopen("H/H5.txt","w");
        fprintf(H5,"%i",A.h5);
        fclose(HO5);
        fclose(H5);
        sleep(2);
        system("cls");
    }
    else if(z1==4 && A.h5==1 || z1==4 && A.h5==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
    }
    if(o==3)
    {
    se=fopen("s/s3.txt","a+");
    while(fscanf(se,"%s",&S)!= EOF)
    {
    printf("\t\t\t%s\n",S);
    }
    gotoxy(35,10);
    printf("\n\nDigite o número correspondente á sessão que deseja ir ------>");
    scanf("%i",&z2);
    H1=fopen("H/H1.txt","r");
    fscanf(H1,"%i",&A.h1);
    H2=fopen("H/H2.txt","r");
    fscanf(H2,"%i",&A.h2);
    H3=fopen("H/H3.txt","r");
    fscanf(H3,"%i",&A.h3);
    H4=fopen("H/H4.txt","r");
    fscanf(H4,"%i",&A.h5);
    H5=fopen("H/H5.txt","r");
    fscanf(H5,"%i",&A.h5);
    fclose(H1);
    fclose(H2);
    fclose(H3);
    fclose(H4);
    fclose(H5);
    if(z2==1&&A.h2==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h2=1;
        strcpy(t[2],ho9);
        HO2=fopen("HO/HO2.txt","w");
        fprintf(HO2,"%s\n\n",t[2]);
        H2=fopen("H/H2.txt","w");
        fprintf(H2,"%i",A.h2);
        fclose(HO2);
        fclose(H2);
        sleep(2);
        system("cls");
    }
    else if(z2==1 && A.h2==1 || z2==1 && A.h2==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
     /*________________________________________________________________________________________________________________________*/
     else if(z2==2&&A.h3==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h3=1;
        strcpy(t[3],ho13);
        HO3=fopen("HO/HO3.txt","w");
        fprintf(HO3,"%s\n\n",t[3]);
        H3=fopen("H/H3.txt","w");
        fprintf(H3,"%i",A.h3);
        fclose(HO3);
        fclose(H3);
        sleep(2);
        system("cls");
    }
    else if(z2==2 && A.h3==1 || z2==2 && A.h3==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
    /*________________________________________________________________________________________________________________________*/
     else if(z2==3&&A.h4==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h4=1;
        strcpy(t[4],ho18);
        HO4=fopen("HO/HO4.txt","w");
        fprintf(HO4,"%s\n\n",t[4]);
        H4=fopen("H/H4.txt","w");
        fprintf(H4,"%i",A.h4);
        fclose(HO4);
        fclose(H4);
        sleep(2);
        system("cls");
    }
    else if(z2==3 && A.h4==1 || z2==3 && A.h4==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
    }
    if(o==4)
    {
    se=fopen("s/s4.txt","a+");
    while(fscanf(se,"%s",&S)!= EOF)
    {
    printf("\t\t\t%s\n",S);
    }
    gotoxy(35,10);
    printf("\n\nDigite o número correspondente á sessão que deseja ir ------>");
    scanf("%i",&z3);
    H1=fopen("H/H1.txt","r");
    fscanf(H1,"%i",&A.h1);
    H2=fopen("H/H2.txt","r");
    fscanf(H2,"%i",&A.h2);
    H3=fopen("H/H3.txt","r");
    fscanf(H3,"%i",&A.h3);
    H4=fopen("H/H4.txt","r");
    fscanf(H4,"%i",&A.h5);
    H5=fopen("H/H5.txt","r");
    fscanf(H5,"%i",&A.h5);
    fclose(H1);
    fclose(H2);
    fclose(H3);
    fclose(H4);
    fclose(H5);
    if(z3==1&&A.h1==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h1=1;
        strcpy(t[1],ho1);
        HO1=fopen("HO/HO1.txt","w");
        fprintf(HO1,"%s\n\n",t[2]);
        H1=fopen("H/H1.txt","w");
        fprintf(H1,"%i",A.h1);
        fclose(HO1);
        fclose(H1);
        sleep(2);
        system("cls");
    }
    else if(z3==1 && A.h1==1 || z3==1 && A.h1==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
     /*________________________________________________________________________________________________________________________*/
     else if(z3==2&&A.h2==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h2=1;
        strcpy(t[2],ho6);
        HO2=fopen("HO/HO2.txt","w");
        fprintf(HO2,"%s\n\n",t[2]);
        H2=fopen("H/H2.txt","w");
        fprintf(H2,"%i",A.h2);
        fclose(HO2);
        fclose(H2);
        sleep(2);
        system("cls");
    }
    else if(z3==2 && A.h2==1 || z3==2 && A.h2==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
    /*________________________________________________________________________________________________________________________*/
     else if(z3==3&&A.h3==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h3=1;
        strcpy(t[3],ho12);
        HO3=fopen("HO/HO3.txt","w");
        fprintf(HO3,"%s\n\n",t[3]);
        H3=fopen("H/H3.txt","w");
        fprintf(H3,"%i",A.h3);
        fclose(HO3);
        fclose(H3);
        sleep(2);
        system("cls");
    }
    else if(z3==3 && A.h3==1 || z3==3 && A.h3==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
     /*________________________________________________________________________________________________________________________*/
     else if(z3==4&&A.h4==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h4=1;
        strcpy(t[4],ho17);
        HO4=fopen("HO/HO4.txt","w");
        fprintf(HO4,"%s\n\n",t[4]);
        H4=fopen("H/H4.txt","w");
        fprintf(H4,"%i",A.h4);
        fclose(HO4);
        fclose(H4);
        sleep(2);
        system("cls");
    }
    else if(z3==4 && A.h4==1 || z3==4 && A.h4==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
    }
    if(o==5)
    {
    se=fopen("s/s5.txt","a+");
    while(fscanf(se,"%s",&S)!= EOF)
    {
    printf("\t\t\t%s\n",S);
    }
    gotoxy(35,10);
    printf("\n\nDigite o número correspondente á sessão que deseja ir ------>");
    scanf("%i",&z4);
    H1=fopen("H/H1.txt","r");
    fscanf(H1,"%i",&A.h1);
    H2=fopen("H/H2.txt","r");
    fscanf(H2,"%i",&A.h2);
    H3=fopen("H/H3.txt","r");
    fscanf(H3,"%i",&A.h3);
    H4=fopen("H/H4.txt","r");
    fscanf(H4,"%i",&A.h5);
    H5=fopen("H/H5.txt","r");
    fscanf(H5,"%i",&A.h5);
    fclose(H1);
    fclose(H2);
    fclose(H3);
    fclose(H4);
    fclose(H5);
    if(z4==1&&A.h1==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h1=1;
        strcpy(t[1],ho2);
        HO1=fopen("HO/HO1.txt","w");
        fprintf(HO1,"%s\n\n",t[1]);
        H1=fopen("H/H1.txt","w");
        fprintf(H1,"%i",A.h1);
        fclose(HO1);
        fclose(H1);
        sleep(2);
        system("cls");
    }
    else if(z4==1 && A.h1==1 || z4==1 && A.h1==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
     /*________________________________________________________________________________________________________________________*/
     else if(z4==2&&A.h2==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h2=1;
        strcpy(t[2],ho8);
        HO2=fopen("HO/HO2.txt","w");
        fprintf(HO2,"%s\n\n",t[2]);
        H2=fopen("H/H2.txt","w");
        fprintf(H2,"%i",A.h2);
        fclose(HO2);
        fclose(H2);
        sleep(2);
        system("cls");
    }
    else if(z4==2 && A.h2==1 || z4==2 && A.h2==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
    /*________________________________________________________________________________________________________________________*/
     else if(z4==3&&A.h3==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h3=1;
        strcpy(t[3],ho14);
        HO3=fopen("HO/HO3.txt","w");
        fprintf(HO3,"%s\n\n",t[3]);
        H3=fopen("H/H3.txt","w");
        fprintf(H3,"%i",A.h3);
        fclose(HO3);
        fclose(H3);
        sleep(2);
        system("cls");
    }
    else if(z4==3 && A.h3==1 || z4==3 && A.h3==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
     /*________________________________________________________________________________________________________________________*/
     else if(z4==4&&A.h5==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h5=1;
        strcpy(t[5],ho17);
        HO5=fopen("HO/HO5.txt","w");
        fprintf(HO5,"%s\n\n",t[5]);
        H5=fopen("H/H5.txt","w");
        fprintf(H5,"%i",A.h5);
        fclose(HO5);
        fclose(H5);
        sleep(2);
        system("cls");
    }
    else if(z4==4 && A.h5==1 || z4==4 && A.h5==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
    }
        if(o==6)
    {
    se=fopen("s/s6.txt","a+");
    while(fscanf(se,"%s",&S)!= EOF)
    {
    printf("\t\t\t%s\n",S);
    }
    gotoxy(35,10);
    printf("\n\nDigite o número correspondente á sessão que deseja ir ------>");
    scanf("%i",&z5);
    H1=fopen("H/H1.txt","r");
    fscanf(H1,"%i",&A.h1);
    H2=fopen("H/H2.txt","r");
    fscanf(H2,"%i",&A.h2);
    H3=fopen("H/H3.txt","r");
    fscanf(H3,"%i",&A.h3);
    H4=fopen("H/H4.txt","r");
    fscanf(H4,"%i",&A.h5);
    H5=fopen("H/H5.txt","r");
    fscanf(H5,"%i",&A.h5);
    fclose(H1);
    fclose(H2);
    fclose(H3);
    fclose(H4);
    fclose(H5);
    if(z5==1&&A.h2==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h2=1;
        strcpy(t[2],ho5);
        HO2=fopen("HO/HO2.txt","w");
        fprintf(HO2,"%s\n\n",t[2]);
        H2=fopen("H/H2.txt","w");
        fprintf(H2,"%i",A.h2);
        fclose(HO2);
        fclose(H2);
        sleep(2);
        system("cls");
    }
    else if(z5==1 && A.h2==1 || z5==1 && A.h2==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
     /*________________________________________________________________________________________________________________________*/
     else if(z5==2&&A.h3==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h3=1;
        strcpy(t[3],ho10);
        HO3=fopen("HO/HO3.txt","w");
        fprintf(HO2,"%s\n\n",t[3]);
        H3=fopen("H/H2.txt","w");
        fprintf(H3,"%i",A.h3);
        fclose(HO3);
        fclose(H3);
        sleep(2);
        system("cls");
    }
    else if(z5==2 && A.h3==1 || z5==2 && A.h3==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
    /*________________________________________________________________________________________________________________________*/
     else if(z5==3&&A.h4==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h4=1;
        strcpy(t[4],ho15);
        HO4=fopen("HO/HO4.txt","w");
        fprintf(HO4,"%s\n\n",t[4]);
        H4=fopen("H/H4.txt","w");
        fprintf(H4,"%i",A.h4);
        fclose(HO4);
        fclose(H4);
        sleep(2);
        system("cls");
    }
    else if(z5==3 && A.h4==1 || z5==3 && A.h4==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
     /*________________________________________________________________________________________________________________________*/
     else if(z5==4&&A.h5==0)
    {
        system("cls");
        gotoxy(45,10);
        textbackground(GREEN);
        textcolor(BLACK);
        printf("A sessão foi marcada com sucesso\n\n");
        textbackground(BLACK);
        textcolor(WHITE);
        A.h5=1;
        strcpy(t[5],ho20);
        HO5=fopen("HO/HO5.txt","w");
        fprintf(HO5,"%s\n\n",t[5]);
        H5=fopen("H/H5.txt","w");
        fprintf(H5,"%i",A.h5);
        fclose(HO5);
        fclose(H5);
        sleep(2);
        system("cls");
    }
    else if(z5==4 && A.h5==1 || z5==4 && A.h5==6421943)
    {
        system("cls");
        gotoxy(45,10);
        textcolor(BLACK);
        textbackground(RED);
        printf("Já tem uma sessão marcada para essas horas\n\n");
        textcolor(WHITE);
        textbackground(BLACK);
        sleep(2);
        system("cls");
    }
    }
    clrscr();
}while(a!=3);
}

#endif // SESSAO_H_INCLUDED
