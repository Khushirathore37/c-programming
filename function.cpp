# include<stdio.h>
void cube(int a)
{int cube;
cube=a*a*a;
printf("%d",cube);
}
int main()
{int num;
scanf("%d",&num);
cube(num);
return 0;
}
# include<stdio.h>
void area(int a)
{float area;
area=3.14*a*a;
printf("%d",area);
}
void diameter(int a)
{int diameter;
diameter=2*a;
printf("%d",diameter);
}
void circum(int a)
{int circum;
circum=2*3.14*a;
printf("%d",circum);
}
int main()
{int radius;
scanf("%d",radius);
area(radius);
diameter(radius);
circum(radius);
return 0;
}
# include<stdio.h>
void max_min(int a,int b)
{if(a>b)
printf("maximum is %d",a);
else
printf("minimum is %d",a);
}
int main()
{int a,b;
scanf("%d %d",&a,&b);
max_min(a,b);
return 0;
}
# include<stdio.h>
void even_odd(int a)
{if(a%2==0)
printf("even");
else
printf("odd");
}
int main()
{int a;
scanf("%d",&a);
even_odd(a);
return 0;
}
# include<stdio.h>
void prime(int n)
{int c=0;
for(int i=0;i<=n;i++)
if(n%i==0)
c++;
if(c==2)
printf("prime");
else
printf("not prime");
}
int main()
{int a;
scanf("%d",&a);
prime(a);
return 0;
}
# include<stdio.h>
void natural(int n)
{for(int i=1;i<=n;i++)
printf("%d",i);
}
int main()
{int n;
scanf("%d",n);
natural(n);
return 0;
}
# include<stdio.h>
void natural_sum(int n)
{int sum=0;
for(int i=1;i<=n;i++)
sum=sum+i;
printf("%d",sum);
}
int main()
{int n;
scanf("%d",&n);
natural_sum(n);
return 0;
}
# include<stdio.h>
void sum(int a,int b)
{int sum;
sum=a+b;
printf("%d",sum);
}
int main()
{int a,b;
scanf("%d %d",&a,&b);
sum(a,b);
return 0;
}
