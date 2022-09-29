// Thiago Salata Siena

// receives as parameter the start time and the end time of a game, 
// both subdivided into 2 distinct values: hours and minutes.
// the procedure returns the duration of the game in hours and minutes,
// considering that the maximum duration of a game is 24 hours
// The game can start one day and end the next.

#include <stdio.h>
#include <stdlib.h>

struct convert{
    int horas,minutos;
};

typedef struct convert Struct;

Struct tempo(int a, int b, int c, int d){
    int mint=0;
    int horat=0;
    Struct temp;
    
    if(d>=b){
        mint = d-b;
    }
    else{
        mint = (60-(b-d));
    }
    
    if(c>a){
        horat = c-a;
    }

    else if(a == c ){
        if(b>d){
            horat = 23;
        }
        else{
            horat = 0;
        }
    }
    
    else{
        horat = ((24-a)+c);
    }

    mint += horat*60;
    temp.horas = horat;
    temp.minutos = (mint%60);

    return temp;
}




int main(){
    int a,b,c,d;
    Struct tempp;

    printf("inicio/final: ");
    scanf("%i:%i/%i:%i", &a,&c,&b,&d);

    tempp = tempo(a,c,b,d);

    printf("%d:%d", tempp.horas,tempp.minutos);



    return 0;
}