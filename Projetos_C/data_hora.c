#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    time_t tempo;
    struct tm *infotempo;
    char texto[80];
    setlocale(LC_TIME, "pt_BR.UTF-8");
    time(&tempo);
    infotempo = localtime(&tempo);
    strftime(texto, 80, "Hora atual: %H:%M:%S", infotempo);
    puts(texto);
    strftime(texto, 80, "Data: %A, %d/%m/%Y", infotempo);
    puts(texto);
    getchar();
    return 0;
}