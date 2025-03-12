#include <stdio.h>

int main() 
{

    int i_1;
    int i_2;


    printf("Jede zweite und jede fuenfte Zahl von 1 bis 50:\n");


    for (int i_1 = 2; i_1 <= 50; i_1 = i_1 + 2) 
    
    {
    
        printf("%d ", i_1);
    
    }

    for (int i_2 = 5; i_2 <= 50; i_2 = i_2 + 5) 
    
    {
        printf("%d ", i_2);
        
    }



    
    return 0;
}




/*


Programm 11 – Nur jede zweite und jede fünfte Zahl


Schreiben Sie ein Programm, mit dem Sie jede zweite und jede fünfte Zahl von  1 bis 50 ausgeben können



*/