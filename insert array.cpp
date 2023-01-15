# include<stdio.h>
int main()
{int a[10]={1,2,3,4,5,6,7,8,9,10};
for(int i=0;i<10;i++)
printf("%d",a[i]);
return 0;
}
# include<stdio.h>
int main()
{int a[10]={1,2.-3,-4,5,6,-7,8,9,10};
for(int i=0;i<n;i++)
{if(a[i]<0)
printf("%d",a[i]);
}
return 0;
}
# include<stdio.h>
int main()
{int a[10]={1,2,3,4,5},sum=0;
for(int i=0;i<5;i++)
sum=sum+a[i];
printf("%d",sum);
return 0;
}
# include<stdio.h>
int main()
{int n,negative_count=0;
printf("enter the size of array:");
scanf("%d",&n);
int a[n],b[100];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{if(a[i]<0){
b[negative_count]=a[i];
negative_count++;}}
printf("negative count:");
printf("%d",negative_count);
return 0;
}
