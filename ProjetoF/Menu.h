#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED


int menu()
{
    char ch,op,op2,op3;
    for(int i=0;i<2;i=0)
    {
        clrscr();
        printf(R"EOF(               _   ______ _____ _      __  __  _____
     /\       | | |  ____|_   _| |    |  \/  |/ ____|
    /  \      | | | |__    | | | |    | \  / | (___
   / /\ \ _   | | |  __|   | | | |    | |\/| |\___ \
  / ____ \ |__| | | |     _| |_| |____| |  | |____) |
 /_/    \_\____/  |_|    |_____|______|_|  |_|_____/
                                                    )EOF");
        textbackground(WHITE);
        textcolor(BLACK);
        printf("\n\t\t\top1\n");
        textcolor(WHITE);
        textbackground(BLACK);
        printf("\t\t\top2\n");
        printf("\t\t\top3\n");
        switch(getch())
        {
            case 's':clrscr();
            printf(R"EOF(               _   ______ _____ _      __  __  _____
     /\       | | |  ____|_   _| |    |  \/  |/ ____|
    /  \      | | | |__    | | | |    | \  / | (___
   / /\ \ _   | | |  __|   | | | |    | |\/| |\___ \
  / ____ \ |__| | | |     _| |_| |____| |  | |____) |
 /_/    \_\____/  |_|    |_____|______|_|  |_|_____/
                                                    )EOF");
        printf("\n\t\t\top1\n");
        textcolor(BLACK);
        textbackground(WHITE);
        printf("\t\t\top2\n");
        textbackground(BLACK);
        textcolor(WHITE);
        printf("\t\t\top3\n");
        op = getch();
        if(op='s'){
                clrscr();
                printf(R"EOF(               _   ______ _____ _      __  __  _____
     /\       | | |  ____|_   _| |    |  \/  |/ ____|
    /  \      | | | |__    | | | |    | \  / | (___
   / /\ \ _   | | |  __|   | | | |    | |\/| |\___ \
  / ____ \ |__| | | |     _| |_| |____| |  | |____) |
 /_/    \_\____/  |_|    |_____|______|_|  |_|_____/
                                                    )EOF");
                printf("\n\t\t\top1\n");
        printf("\t\t\top2\n");
        textbackground(WHITE);
        textcolor(BLACK);
        printf("\t\t\top3\n");
        op = getch();
        if(op='w')
        {
            clrscr();
        printf("\n\n\n\t\t\top1\n");
        textcolor(BLACK);
        textbackground(WHITE);
        printf("\t\t\top2\n");
        textbackground(BLACK);
        textcolor(WHITE);
        printf("\t\t\top3\n");
        }
        else if(op='s')
        {
            clrscr();
        }
        }
        else if(op='w')
        {
            clrscr();

        }break;
        case 'w':clrscr;break;
        }

    }

}

#endif // MENU_H_INCLUDED
