#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(void)
{
  int score=0;
  int cnt = 0;
  srand(time(NULL));
  while(cnt<3)
    {
      int x=rand()%10;
      int y=rand()%10;
      int op=rand()%3;
      char ch='\0';
      int bi1=0,bi2=0,bi3=0;
      int ans=0;
      if(op==0)
	{ch='+';ans=x+y;bi1=0;bi2=5;bi3=-8;}
      else if(op==1)
	{ch='-';ans=x-y;bi1=-7;bi2=0;bi3=9;}
      else if(op==2)
	{ch='*';ans=x*y;bi1=9;bi2=-4;bi3=0;}
      
      printf("%d %c %d = ?\n",x,ch,y);
      printf("%d\n%d\n%d\n",ans+bi1,ans-bi2,ans+bi3);
      int input;
      scanf("%d",&input);
      if(input==ans)
	{score++;}
      //DEBUG printf("x=%d\ny=%d\nop=%d\nch=%c\nans=%d\n",x,y,op,ch,ans);
      cnt++;
    }
  if(score > 1)
    printf("you got %d points\n",score);
  else
    printf("you got %d point\n",score);
}
