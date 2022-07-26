// There is a bug in the code of Module Video 29-5. You will not get the correct result when you try to add “999” and “222”. Find that problem and try to think how the problem will be solved. 

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], sum[101];
    scanf("%s %s", a, b);
    strrev(a);
    strrev(b);

    int i = 0, j = 0, k = 0, hate = 0;
    while (a[i] != '\0' && b[j] != '\0')
    {
        sum[k] = (((a[i] - '0') + (b[j] - '0') + hate)%10) + '0';
        hate = ((a[i] - '0') + (b[j] - '0') + hate)/10;
        i++;
        j++;
        k++;
    }
    while (a[i] != '\0')
    {
        sum[k] = (((a[i] - '0') + hate)%10) + '0';
        hate = ((a[i] - '0') + hate)/10;
        i++;
        k++;
    }
    while (b[j] != '\0')
    {
        sum[k] = (((b[j] - '0') + hate)%10) + '0';
        hate = ((b[j] - '0') + hate)/10;
        j++;
        k++;
    }

    if (hate > 0)
    {
        sum[k] = hate + '0';
        k++;
    }
    else
    {
        sum[k] = '\0';
    }

    strrev(sum);

    printf("%s", sum);

    return 0;
}
