#include <stdio.h>
int main() 
{
 int a[10],p[10],b[10],x[10],i,j,largest,count=0,time,n;
 double wt=0,tat=0,end;
  printf("enter the number of Processes:\n");
  scanf("%d",&n); 
 printf("enter process id\n");
 for(i=0;i<n;i++)
 scanf("%d",&p[i]);
 printf("enter arrival time\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter burst time\n");
 for(i=0;i<n;i++)
 scanf("%d",&b[i]); 
 for(i=0;i<n;i++)
 x[i]=b[i];
b[9]=-999;
for(time=0;count!=n;time++)
 {
   largest=9;
  for(i=0;i<n;i++)
  {
   if(a[i]<=time && b[i]>b[largest] && b[i]>0)
   largest=i;
  }
  b[largest]--;
  if(b[largest]==0)
  {
   count++;
   end=time+1;
   wt=wt+end-a[largest]-x[largest];
   tat= tat+end-a[largest];
  }
 }
 printf("\n\nAverage waiting time = %lf\n",wt/n);
    printf("Average Turnaround time = %lf",tat/n);
}

