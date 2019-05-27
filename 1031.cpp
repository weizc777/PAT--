#include <stdio.h>
#include <string.h>
int main(){
    int num,i,j,q=0,sum,c=0;
    char id[19];
    char Nid[100][19]={0};
    int w[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char m[]={'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%s",id);
        for(j=0,sum=0;j<17&&id[j]>='0'&&id[j]<='9';j++){
            sum=sum+(id[j]-'0')*w[j];
        }
        if(j==17&&id[17]==m[sum%11]){
            c++;
        }else{
            strcpy(Nid[q],id);
            q++;
        }
    }
    if(c==num){
        printf("All passed");
    }else{
        for(i=0;i<q;i++){
            puts(Nid[i]);
        }
    }
    return 0;
}
