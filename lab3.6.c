#include <stdio.h>
int main(){
    int score;
    scanf("%d",&score);

    if(score < 0) {printf("error score"); return 0;}
    else if(score > 100) {printf("error score"); return 0;}

    if(score >= 68){
        if(score >= 85){printf("A");}
        else if(score >= 75){printf("B");}
        else{printf("C need to gain more %d point(s) to reach B",75 - score);}
    }else{
        if(score >= 55){printf("D");}
        else{printf("F");}

    }
    return 0;
}
