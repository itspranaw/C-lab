#include<stdio.h>
#include<math.h>

main()
{
    float arr[100], sum1=0,sum=0, mean,var, sd,diff=0;
    float *ptr;
    int n,i;
    printf("Enter the number of elements in the array:");

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%f",&arr[i]);
    }

    ptr = arr;

    for(i=0; i<n; i++)
    {
        sum += *(ptr +i);
    }
    printf("%f\n", sum);

    printf("mean = %f\n", sum/n);

    mean = sum/n;

    for(i=0; i<n; i++)
    {
        diff = *(ptr +i) - mean;
        printf("\t%d\n", diff);
        sum1 = sum1 + (diff*diff);
    }

    var = sum1/n;

    printf("%f\n", var);

    sd = sqrt(var);

    printf("%f\n", sd);
}
