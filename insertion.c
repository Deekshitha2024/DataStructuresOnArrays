#include <stdio.h>

int main()
{
    int a[50],n,x,pos;
    printf("Enter size of the array");
    scanf("%d",&n);
    printf("Enter elements of the array");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    printf("Enter element to be inserted and position of the element ");
    scanf("%d%d",&x,&pos);
    if(pos==n){
        a[pos-1]==x;
    }
    else{
        for(int j=n-1;j>=pos-1;j--){
            a[j+1]=a[j];
        }
        a[pos-1]=x;
        
    }
    printf("Elements of the array");
    for(int i=0;i<=n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
