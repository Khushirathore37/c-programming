/* # include<stdio.h>
int main()
{int a,b,result;
scanf("%d %d",&a,&b);
result=(a>b)?a:b;
printf("%d",result);
return 0;
}
# include<stdio.h>
int main()
{int result,a,b,c;
scanf("%d %d %d",&a,&b,&c);
result=(a>b&&a>c?a:b>c?b:c);
printf("%d",result);
return 0;
}
# include<stdio.h>
int main()
{int a,result;
scanf("%d",&a);
result=(a%2==0)?printf("even"):printf("odd");
return 0;
}
# include<stdio.h>
int main()
{int a,result;
scanf("%d",&a);
result=(a%4==0&&a%400==0&&a%100!=0)?printf("leap year"):printf("no leap year");
return 0;
}
# include<stdio.h>
int main()
{char c;
int result;
scanf("%c",&c);
result=((c>='a'&& c<='z')||(c>='A'&&c<='Z'))?printf("alphabet"):printf("not alphabet");
return 0;
}*/

 
