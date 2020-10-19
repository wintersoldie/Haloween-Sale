#include<stdio.h>
#include<math.h>

int main (){
    int n;
    scanf("%d",&n);
    int arr[n],l=n,c=0;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
                int z=j-i;
                if(l>z){
                    l=z;
                }
            }

        }
    }

    if(l==n && c==0){
        printf("-1");
    }
    else{
    printf("%d",l);
    }
    
    return 0;
}
