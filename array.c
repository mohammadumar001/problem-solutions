#include <stdio.h>
#define x 10
void read(int n,int a[]){
printf("Enter %d elements into the array : ",n);
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("the elements of the array are : \n"); 
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");
}
void insert(int n,int a[]){
    int pos,value,i;
printf("enter the position : ");
scanf("%d",&pos);
printf("enter the value to be inserted : ");
scanf("%d",&value);
if(pos<1||pos>n+1){
    printf("invalid position!!");
    return;
}
for(i=n;i>=pos;i--){
    a[i]=a[i-1];
}
a[pos-1]=value;
n++;
printf("array after insertion : \n");
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
}
int main()
{
    int a[x],n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    read(n,a);
    insert(n,a);
    return 0;
}