#include<stdio.h>
int main()
{
    int i,k,Count=0,sum=0;//a[100];
    char a[100];
    scanf("%d",&k);
//    for(i=0; i<=k; i++)
//    {
//        scanf("%s",a[i]);
//    }

    scanf("%s",a);
    for(i=0; /*i<=k*/ i<k; i++)
    {
        //if(a[i]==A)
        if (a[i]=='A')
        {
            //count++;
            Count++;
        }
        //if(a[i]==D)
        if (a[i]=='D')
        {
            sum++;
        }
    }
    if(Count>sum)
    {
        printf("Anton");
    }
    //else
    else if(sum>Count)
    {
        printf("Danik");
    }
    else {
        printf("Friendship");
    }
}
