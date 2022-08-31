#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void linear_search(int a[],int n,int key)
{
    int i,res=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            res=1;
            break;
        }
    }
    if(res==0)
    printf("SEARCH KEY NOT FOUND\n");
    else
    printf("SEARCH KEY FOUND AT POSITION: %d\n",i+1);
}

int main(){
    int n,a[1000],i,key;
    clock_t start,end;
    double clk;
    printf("ENTER THE NO. OF MEDICINE TYPES\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    a[i]=rand()%1000;
    
    printf("THE  MEDICINE IDs ARE:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    
    printf("ENTER ID TO SEARCH\n");
    scanf("%d",&key);
    
    start=clock();
    linear_search(a,n,key);
    end=clock();
    clk=(double)(end-start)/CLOCKS_PER_SEC;
    
    printf("TIME TAKEN FOR EXECUTION: %f\n",clk);
}
