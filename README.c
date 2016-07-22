#include<stdio.h>

int main(){
int n,i,j,t=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{

if(a[i]==a[j]){
    printf("%d",a[i]);
    t=1;
      break;
}
  }
  if(t==1)
  {
break;
}}
    return 0;
}
