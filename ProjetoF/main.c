#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "conio.c"
#include <unistd.h>
#include <time.h>
#include "MenuT.h"
#include "Select.h"
#include "login.h"
#include "sessao.h"

int main()
{
    int o;
    setlocale(LC_ALL,"Portuguese");
    clrscr();
    o= Sel();
    se(o);
    return 0;
}
