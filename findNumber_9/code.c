#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){
    int n;
    int num=0;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        int text = i;
        while(text){
            if(i%10 == 9){
                num+=1;
                printf("找到了%d个\n",num);
            }
            text=text/10;
        }
    }
}
