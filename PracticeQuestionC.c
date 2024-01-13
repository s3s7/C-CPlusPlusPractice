#include <stdio.h>
#include <stdlib.h>
void inputdata(char *name,int *age,char *sex);


 typedef struct 
 {
  char name[10];
  int age;
  int sex;

}iro;

int main(void){
  
iro ir;

// int *p,i;
// p= &i;
// *p=15;
// printf("%d",i);
// printf("%d",*p);


char na,se;
int a;
char b;
inputdata(&na,&a,&se);
show(b);


// 覚えるC言語練習問題19
// 入力終了処理
// if(age = -1) {
//     break;
// }



// main関数終了
    return 0;
}


// データの入力専用の関数
void inputdata(char *name,int *age,char *sex){
iro r;
scanf("%s、%d、%s",iro->name, &age, &sex);

return ;
}

void show(iro r){
    // データの表示専用の関数
 printf("名前%s、年齢%d、性別%s",iro.name,ir.age,ir.sex);


    return ;
}



// int keisan (int kingaku){
// printf("%f",kingaku*1.1);
// return 0;

// }

// int hello (void){
// printf("ありがとう");
// return 0;
// }

// int fruits(int apple){
// int kingaku;
// kingaku = apple * 300;
// return kingaku;
// }

// void kei(int a,int b,int *c,int*d){
//     *c = a + b;
//     *d = a-b;
// }

