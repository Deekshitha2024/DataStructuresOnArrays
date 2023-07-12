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
    printf("enter position of the element ");
    scanf("%d",&pos);
    if(pos==n){
        n=n-1;
    }
    else{
        for(int j=pos-1;j<n-1;j++){
            a[j]=a[j+1];
        }
        
        
    }
    printf("Elements of the array");
    for(int i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
