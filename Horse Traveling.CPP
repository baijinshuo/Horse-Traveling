#include<stdio.h>
#include<stdlib.h>
struct
{
  int a;
  int b;
}road[14],roads[14],p0;
int main()
{
   int compare(int pass[14],int a1);
   road[0].a=1;road[0].b=7; road[1].a=1;road[1].b=10; road[2].a=2;road[2].b=9;
   road[3].a=2;road[3].b=11; road[4].a=2;road[4].b=8; road[5].a=3;road[5].b=5;
   road[6].a=3;road[6].b=10; road[7].a=3;road[7].b=12; road[8].a=4;road[8].b=6;
   road[9].a=4;road[9].b=11; road[10].a=5;road[10].b=11; road[11].a=6;road[11].b=12;
   road[12].a=7;road[12].b=9; road[13].a=8;road[13].b=10;

   int a1,i,j,k=0,m,one,last=0;
   int pass[12]={0};
   for(i=0;i<14;i++)
      roads[i]=road[i];
   printf("\nPlease input your first position:");
   scanf("%d",&one);
   do{a1=one;
      k=0;
      for(i=0;i<12;i++)
       pass[i]=0;
      j=0;
      for(m=0;m<14;m++)
      for(i=0;i<14;i++)
   {  if(road[i].a==a1)

	 {
	   if(compare(pass,road[i].b)){
	   pass[j++]=a1;
	   a1=road[i].b;
	   k++;
	   road[i].a=0;
	   last=road[i].b;
	   road[i].b=0;break;}}
      if(road[i].b==a1)

	 {
	   if(compare(pass,road[i].a)){
	   pass[j++]=a1;
	   a1=road[i].a;
	   k++;
	   last=road[i].a;
	   road[i].a=0;
	   road[i].b=0;break;}  }
    }
    p0=roads[13];
    for(i=13;i>0;i--)
       roads[i]=roads[i-1];
    roads[0]=p0;
    for(i=0;i<14;i++)
      road[i]=roads[i];
    }while(k<11);
    pass[11]=last;
    for(i=0;i<12;i++)
    printf("%d   ",pass[i]);
    system("pause");
}
int compare(int pass[12],int a1)
{
   int i;
   for(i=0;i<12;i++)
     if(pass[i]==a1)
	return 0;
   else return 1;
}

