#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

int logi()
{
    FILE * contaN;
    FILE * contaP;
    contaN = fopen("contaN.txt","a");
    contaP = fopen("contaP.txt","a");
    int op=0,b=0;
    char name[30],pass[30];
    char nameF[30],passF[30];
    do{
/*            printf(R"EOF(               _   ______ _____ _      __  __  _____
     /\       | | |  ____|_   _| |    |  \/  |/ ____|
    /  \      | | | |__    | | | |    | \  / | (___
   / /\ \ _   | | |  __|   | | | |    | |\/| |\___ \
  / ____ \ |__| | | |     _| |_| |____| |  | |____) |
 /_/    \_\____/  |_|    |_____|______|_|  |_|_____/
                                                    )EOF"); */
    printf("\n\n\n\n1- Criar conta\n\n2- Fazer login\n\n");
    scanf("%i",&op);
    system("cls");
    if(op == 1){
   /*         printf(R"EOF(               _   ______ _____ _      __  __  _____
     /\       | | |  ____|_   _| |    |  \/  |/ ____|
    /  \      | | | |__    | | | |    | \  / | (___
   / /\ \ _   | | |  __|   | | | |    | |\/| |\___ \
  / ____ \ |__| | | |     _| |_| |____| |  | |____) |
 /_/    \_\____/  |_|    |_____|______|_|  |_|_____/
                                                    )EOF"); */
        printf("\n\n\nUsername: -----> ");
        scanf("%s",&name);
        fputs(name,contaN);
        printf("\nPassword: -----> ");
        scanf("%s",&pass);
        fputs(pass,contaP);
        clrscr();
    }
    else if(op == 2){
  /*          printf(R"EOF(               _   ______ _____ _      __  __  _____
     /\       | | |  ____|_   _| |    |  \/  |/ ____|
    /  \      | | | |__    | | | |    | \  / | (___
   / /\ \ _   | | |  __|   | | | |    | |\/| |\___ \
  / ____ \ |__| | | |     _| |_| |____| |  | |____) |
 /_/    \_\____/  |_|    |_____|______|_|  |_|_____/
                                                    )EOF"); */
        printf("\n\n\nUsername -----> ");
        scanf("%s",&nameF);
        fgets(name,30,contaN);
        if(strcmp(name,nameF)== 1)
        {
            printf("Nome errado\n\n");
            sleep(3);
            clrscr();
        }
        else if(strcmp(name,nameF) == 0)
        {
               printf("\nPassword: ----->");
        scanf("%s",&passF);
        fgets(pass,30,contaP);
        if(strcmp(pass,passF) == 1)
        {
            printf("Senha errada\n\n");
            sleep(3);
            clrscr();
        }
        else if(strcmp(pass,passF) == 0)
        {
            b=1;
        }
        }
    }
    }while(b!=1);
}

#endif // LOGIN_H_INCLUDED
