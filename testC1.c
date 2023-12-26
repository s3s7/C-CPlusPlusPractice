#include <stdio.h>
#include <stdlib.h>
int keisan (int kingaku);
int fruits (int apple);

int main(void){
    // printf("hello\n ho");

    //  printf("%d",11);

    //  printf("%f",11.1);

    // int value;
    // value = 10;
    // printf("%d",value);


    int suuti;
    // scanf("%d",&suuti);
    //  printf("入力されたのは%d",suuti);

     
// keisan(scanf("%d",&suuti));
// int hoge;
// hoge = fruits(10);
// printf("計算されたのは%d",hoge);

char str [3]={'J','o','\0'};
printf("計%s",str);

char str[] = "256";


// main関数終了
    return 0;
}

int keisan (int kingaku){
printf("%f",kingaku*1.1);
return 0;

}

int hello (void){
printf("ありがとう");
return 0;
}

int fruits(int apple){
int kingaku;
kingaku = apple * 300;
return kingaku;

}


