#include<stdio.h>
int s1,s2;
int main()
{
    for(int t=0;;t++)
    {
        char n1[10],n2[10];
        if(t==0)
    {
        printf("Enter Player 1's name: ");
    fflush(stdin);
    gets(n1);
    fflush(stdin);
    if(strcmp(n1,"Shanto")==0)
    {
        system("cls");
        printf("\n\n\t\t\t\t(Player 1)Dogs are not Allowed\n\n\n\n\n");
        return 0;
    }
    printf("Enter Player 2's name: ");
    gets(n2);
    if(strcmp(n2,"Shanto")==0)
    {
        system("cls");
        printf("\n\n\t\t\t\t(Player 2)Dogs are not Allowed\n\n\n\n\n");
        return 0;
    }
    printf("\n\n\n\n\t\t\t\t\tPress any key to start");
    getch();
    }
    system("cls");
    int p,w=1;
    char a[9]={"123456789"};
    for(int i=0;i<9;i++)
    {
        printf("%c\t",a[i]);
        if(i%3==2)
        {
            printf("\n\n");
        }
    }
    for(int k=0;k<9;k++)
    {
    int x;
    if(p>2)
    {
        p=1;
    }
    if(p==1)
    printf("%s's move: ",n1);
    else
        printf("%s's move: ",n2);
    scanf("%d",&x);
    system("cls");
    x=x-1;
    if(p==1)
    {
        a[x]=n1[0];
    }
    if(p==2)
    {
        a[x]=n2[0];
    }
    for(int i=0;i<9;i++)
    {
        printf("%c\t",a[i]);
        if(i%3==2)
        {
            printf("\n\n");
        }
    }
    if((a[0]==a[1]&&a[1]==a[2])||(a[3]==a[4]&&a[4]==a[5])||(a[6]==a[7]&&a[7]==a[8])||(a[0]==a[3]&&a[3]==a[6])||(a[1]==a[4]&&a[4]==a[7])||(a[2]==a[5]&&a[5]==a[8])||(a[0]==a[4]&&a[4]==a[8])||(a[2]==a[4]&&a[4]==a[6]))
        {
            w=0;
            break;
        }
    p++;
    }
    if(w==0)
    {
        if(p==1)
        {
            printf("\n\n\n\t\t\t%s Won\n\n\n",n1);
            s1++;
        }
        else
        {
            printf("\n\n\n\t\t\t%s Won\n\n\n",n2);
            s2++;
        }

    }
    else
    printf("\n\n\n\t\t\tIt's A DRAW\n\n\n");
    printf("\t\t\t%s: %d\n",n1,s1);
    printf("\t\t\t%s: %d\n\n\n",n2,s2);
    printf("\n\n\n\t\t\tPress any key to play again");
    getch();
    system("cls");

}
    return 0;
}
