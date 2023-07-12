#include <stdio.h>

int main()
{
    int a[50],n;
    printf("Enter size of the array");
    scanf("%d",&n);
    printf("Enter elements of the array");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    printf("Elements of the array");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }

    return 0;
}
