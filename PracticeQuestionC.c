#include <stdio.h>
#include <stdlib.h>


 typedef struct 
 {
  char name[10];
  int age;
  int sex;

}iro;



void inputdata(iro *o);
void show(iro r);

int main(void){
  
int i,count;
iro* data;
// int *p,i;
// p= &i;
// *p=15;
// printf("%d",i);
// printf("%d",*p);
count = 0;

for(i = 0; ;i++){
inputdata(&data);
count++;
data = (iro*)malloc(sizeof((iro)  *  10));

if(data->age = -1) {
    break;
}
}




for(i = 0; i < count;i++){
show(data);

}
// 覚えるC言語練習問題19
/*0～100の範囲で入力された複数の数値の中から、
最大値と最小値を求めて表示するプログラムを作成せよ。

-1が入力された場合は入力の終わりと判定する。
ただし、最大値と最小値はmain関数以外の一つの関数の中で求める。
また、入力された数値を記憶する配列の要素数は10とし、
それ以上入力された場合はエラーが起きても仕方ないこととする。

ヒント:配列の中に -1 があればデータの終わりだと判断できる。
ヒント:最小値を探すには、最大値を記憶した変数との比較を繰り返せば良い。
*/

free(data);

// main関数終了
    return 0;
}


// データの入力専用の関数
void inputdata(iro *o){
// iro r;
int i;
for(i = 0; i<2;i++){
scanf("%s、%d、%d",o->name, o->age, o->sex);
}
return ;
}



void show(iro r){
    char datas[3];
    // データの表示専用の関数
printf("名前%s,年齢%d、性別%d",r.name,r.age,r.sex);
return;
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

