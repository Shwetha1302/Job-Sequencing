#include <stdio.h>
int main() {
    int n, d[10],p[10],s[20],i, j ,top=-1;
    printf("Enter the number of jobs:\t");
    scanf("%d",&n);
    printf("Enter the deadlines for the %d jobs:\n",n);
    for(i=1;i<=n;i++){
        scanf("%d",&d[i]);
    }
    printf("Enter the profits for the %d jobs:\n",n);
    for(j=1;j<=n; j++){
        scanf("%d",&p[j]);
    }
    
    printf("The processing sequence for:\n");
    for(i=1;i<=n;i++){
        printf("job %d \t\t\t\t:job %d\n",i,i);
    }

    for(i=1;i<=n;i++){
        for(j=i+1;j<=n; j++){
            
                if(d[i]<d[j])
                printf("job %d, job %d \t\t:job %d, job %d\n",i ,j , i, j);
                else if(d[i]>d[j])
                  printf("job %d, job %d \t\t:job %d, job %d\n",i , j, j, i);
                else{
                    if(d[i]==1&&d[j]==1)
                printf("job %d, job %d \t\t:Not a feasible solution\n",i, j);
                else 
                  printf("job %d, job %d \t\t:job %d, job %d or job %d, job %d\n",i, j, i, j, j, i);
                }
        }
    }  

  printf("The respective profits are:\n");
     for(j=1;j<=n; j++){
        printf("%d\n",p[j]);
    }
  
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n; j++){
            if(d[i]==1&&d[j]==1)
            printf("- \n");
            else{
                printf("%d\n",p[i]+p[j]);
                }
            }
        }

   //To find the highest profit 
for(i=1;i<=n; i++){ 		      
 for(j=i+1;j<=n; j++){
            s[++top]=p[i]+p[j];
            }
        }

for(i=0;i<top; i++){
    if(s[0]<s[i+1]){
        s[0]=s[i+1];
    }
}
printf("The highest profit is : %d",s[0]);
    return 0;
}
						
