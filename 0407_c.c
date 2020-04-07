void main()
{
    int n,i,t;
    int num1;
    int a[24]={};
    scanf("%d", &num1);

    for(int i=0; i<num1; i++)
    {
        scanf("%d", &t);
        a[t]=a[t]+1;
    }

    for(i=1; i<=23; i++)
    {
        printf("%d ", a[i]);
    }
    }

