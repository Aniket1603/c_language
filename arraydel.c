#include<stdio.h>
#include<conio.h>
int i,n;
void main()
{
int a[100],pos;
void del(int a[],int,int);
clrscr();
printf("how many elements in array");
scanf("%d",&n);
printf("enter the elements in array");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position in array");
scanf("%d",&pos);
del(a,pos,n);
getch();
}
void del(int a[],int pos,int n)
{
int j,item;
item = a[pos];
for(j = pos-1;j<=n-1;j++)
{
a[j]=a[j+1];
}
n =n-1;
printf("New Array");
for(i=0;i<=n-1;i++)
{
printf("%d\n",a[i]);

}
}
