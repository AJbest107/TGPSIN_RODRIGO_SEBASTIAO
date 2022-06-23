#ifndef MENUT_H_INCLUDED
#define MENUT_H_INCLUDED

int menu()
{
    char op;
    int a=1,w=0;

    /*printf(R"EOF(               _   ______ _____ _      __  __  _____
     /\       | | |  ____|_   _| |    |  \/  |/ ____|
    /  \      | | | |__    | | | |    | \  / | (___
   / /\ \ _   | | |  __|   | | | |    | |\/| |\___ \
  / ____ \ |__| | | |     _| |_| |____| |  | |____) |
 /_/    \_\____/  |_|    |_____|______|_|  |_|_____/
                                                    )EOF"); */
        textbackground(WHITE);
        textcolor(BLACK);
        printf("\n\t\t\top1\n");
        textcolor(WHITE);
        textbackground(BLACK);
        printf("\t\t\top2\n");
        printf("\t\t\top3\n");

    for(int i=1;i>w;i=1)
    {
        op = getch();
        clrscr();

        if(op == 's' && a!=3)
        {
            a=a+1;
        }
        else if(op == 'w' && a!=1)
        {
            a=a-1;
        }

        if(a==1)
        {
/*            printf(R"EOF(               _   ______ _____ _      __  __  _____
     /\       | | |  ____|_   _| |    |  \/  |/ ____|
    /  \      | | | |__    | | | |    | \  / | (___
   / /\ \ _   | | |  __|   | | | |    | |\/| |\___ \
  / ____ \ |__| | | |     _| |_| |____| |  | |____) |
 /_/    \_\____/  |_|    |_____|______|_|  |_|_____/
                                                    )EOF"); */
            textbackground(WHITE);
            textcolor(BLACK);
            printf("\n\n\n\t\t\top1\n");
            textcolor(WHITE);
            textbackground(BLACK);
            printf("\t\t\top2\n");
            printf("\t\t\top3\n");
            if(op== 13)            /*  Valor do Enter --> 13  */
            {
                w=i;

            }
        }
        else if(a==2)
        {
  /*          printf(R"EOF(               _   ______ _____ _      __  __  _____
     /\       | | |  ____|_   _| |    |  \/  |/ ____|
    /  \      | | | |__    | | | |    | \  / | (___
   / /\ \ _   | | |  __|   | | | |    | |\/| |\___ \
  / ____ \ |__| | | |     _| |_| |____| |  | |____) |
 /_/    \_\____/  |_|    |_____|______|_|  |_|_____/
                                                    )EOF"); */
            printf("\n\n\n\t\t\top1\n");
            textcolor(BLACK);
            textbackground(WHITE);
            printf("\t\t\top2\n");
            textbackground(BLACK);
            textcolor(WHITE);
            printf("\t\t\top3\n");
            if(op== 13)
            {
                w=i;


            }
        }
        else if(a==3)
        {
  /*          printf(R"EOF(               _   ______ _____ _      __  __  _____
     /\       | | |  ____|_   _| |    |  \/  |/ ____|
    /  \      | | | |__    | | | |    | \  / | (___
   / /\ \ _   | | |  __|   | | | |    | |\/| |\___ \
  / ____ \ |__| | | |     _| |_| |____| |  | |____) |
 /_/    \_\____/  |_|    |_____|______|_|  |_|_____/
                                                    )EOF"); */
            printf("\n\n\n\t\t\top1\n");
            printf("\t\t\top2\n");
            textbackground(WHITE);
            textcolor(BLACK);
            printf("\t\t\top3\n");
            textbackground(BLACK);
            textcolor(WHITE);
            if(op== 13)
            {
                w=i;


            }
        }

    }
}

#endif // MENUT_H_INCLUDED
