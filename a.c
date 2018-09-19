#include<stdio.h>
#include<stdlib.h>
int yan(int a){
  int i;
  for(i=0;i<a;i++)
    
  if(a==0)return 1;
  return (yan(a-1)+a+1)%2;
}
int main(){
  int i,j,a=0,b[10],c[10]={0},d[10][10]={{0}},k;
  /* for(i=0;i<10;i++){ */
  /*   c[i]=i; */
  /*   //scanf("%d",&b[i]); */
  /*   b[i]=i; */
  /*   for(j=1;j<10;j++){ */
  /*     if(j%2)a+=i+j; */
  /*     //d[i][j]=d[b[i]][abs(c[j])]+d[i][j-1]+yan(a); */
  /*     if(d[i][j]<100)goto p; */
  /*     if(d[i][j]<100)break; */
  /*     if(d[i][j]<100)return 1; */
  /*   } */
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      b[j]=j;
      for(k=0;k<10;k++){
	c[j]+=b[k];
      }
    }

    c[i]=c[i+1];
    
    for(j=0;j<10;j++){
      for(k=1;k<9;k++){
	//c[k]=c[k-1];
	//c[k]=c[k]+b[k];
	c[k]=c[k];
	//c[k]=c[(k-1)+(k+1)]+b[k+1];
	//c[k]-=b[k-1]+d[k][j];
	//d[j][k]=d[k][j];
      }
    }
    printf("a");
  }
  /* p: */
  /* ; */
  printf("\n");
  for(i=0;i<10;i++)
    printf("%d\n",b[i]);
  return 0;
}
