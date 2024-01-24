#include <stdio.h>
​
int[] stuffBit(int[] data, int size){
    int nSize=size;
    int i=0;
    int j=0;
    int count=0;
    int temp1=0;
    int temp2=0;
    
    for(i=0;i<nSize;i++){
        if(data[i]==1){
            
            if(count==5){
                if(nSize==size+1)i=i+1;
                size=nSize;
                nSize+=1;
                count=0;
                temp1=data[i];
                data[i]=0;
                for(j=i+1;j<nSize;j++){
                    temp2=data[j];
                    data[j]=temp1;
                    temp1=temp2;
                }
            }
            count++;
            
        }else{
            count=0;
        }
    }
    
    return data;
    
    
​
}
​
​
​
int main() {
    // Write C code here
    int data[20];
    int size=12;
    int nSize=size;
    // printf("\nEnter the size for bits: ");
    // scanf("%d",&size);
    int i=0;
    int j=0;
    int count=0;
    int temp1=0;
    int temp2=0;
    for(i=0;i<size;i++){
        printf("BIT NO%d: ",(i+1));
        scanf("%d",&data[i]);
    }
    // for(i=0;i<nSize;i++){
    //     if(data[i]==1){
            
    //         if(count==5){
    //             if(nSize==size+1)i=i+1;
    //             size=nSize;
    //             nSize+=1;
    //             count=0;
    //             temp1=data[i];
    //             data[i]=0;
    //             for(j=i+1;j<nSize;j++){
    //                 temp2=data[j];
    //                 data[j]=temp1;
    //                 temp1=temp2;
    //             }
    //         }
    //         count++;
            
    //     }else{
    //         count=0;
    //     }
    // }
    data=stuffBit(data, size);
    printf("\nNew data: ");
    for(int i=0;i<nSize;i++){
        printf("%d, ",data[i]);
    }
    return 0;
}
