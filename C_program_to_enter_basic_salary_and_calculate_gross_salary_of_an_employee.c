#include<stdio.h>
int main(){
    float arr[5];
    for(int k=0;k<5;k++){    
        float salary,gross;
        
        scanf("%f",&salary);
        if(salary>10000&&salary<=20000){
            gross=1.1*salary;
            arr[k]=gross;

        }
        else if(salary>20000&&salary<=30000){
            gross=(1.115)*salary;
            arr[k]=gross;

        }
        else if(salary>30000){
            gross=(1.125)*salary;
            arr[k]=gross;

        }
        else{
            gross=(1.14)*salary;
            arr[k]=gross;

            
        }
        

    }
    for(int i=0;i<5;i++){
        printf("%.2f ",arr[i]);

    }
    
    return 0;
}