// #include <stdio.h>
// int main()
// {
//     printf("hello world");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", 23+43);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// main()
// {short i,m,flag;
//     m=2;
//     while (m<=100)
//     {i=2;flag=1;
//         while(i<=sqrt(m)&&flag==1)
//         {if(m%i==0)flag=0;i=i+1;}
//         if(flag==1)printf("%d\n",m);
//         m=m+1;
//     }
// }

// #include <stdio.h>
// #include <math.h>
// main()
// {short i,m,flag,num;
//     m=2,num=200;
//     while (m<=num)
//     {i=2;flag=1;
//         while(i<=sqrt(m)&&flag==1)
//         {if(m%i==0)flag=0;i=i+1;}
//         if(flag==1)printf("%d\n",m);
//         m=m+1;
//     }
// }

// #include <stdio.h>
// #include <math.h>
// main()
// {short i,m,flag,num;
//     m=2,num=200;
//     while (m<=num)
//     {i=2;flag=1;
//         while(i<=sqrt(m)&&flag==1)
//         {if(m%i==0)flag=0;i=i+1;}
//         if(flag==1)printf("%d\n",m);
//         m=m+1;
//     }
// }

// #include <stdio.h>
// main()
// {short a;
// a=3;
// printf("%d\n",&a);
// }

#include <stdio.h>
int main()
{
    int max(int x,int y);
    int a,b,c;
    scanf("%d,%d",&a,&b);
    c=max(a,b);
    printf("max=%d",c);
    return 0;
}
int max(int x, int y)
{
    int z;
    if(x>y)z=x;
    else z=y;
    return(z);
}
