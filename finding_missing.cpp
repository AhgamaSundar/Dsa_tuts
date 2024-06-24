#include<iostream>
#include<stdio.h>
class Array
{
private:
   int *a;
   int size;
   int len;
   int fir;
   int maxv;

public:
Array(int z){
    a= new int[z];
    size=z;
    len=0;
}
int  max(){
     maxv=0;
    for(int i=0;i<len;i++){
        if(a[i]>maxv){
            maxv=a[i];

        }
    }
    return maxv;
}
void missingsingle(){
    int dif=fir-0;
    for(int i =0;i<len;i++){
        if(a[i]-i!=dif){
            printf("%d",i+dif);
            break;
           
        }
        
    }

    
}
void missingmulti(){
    int dif=fir-0;
    for(int i=0;i<len;i++){
        if(a[i]-i!=dif){
            while(dif<a[i]-i){
                printf("%d",dif+i);
                dif++;
            }
        }

    }

}

void insert(int x){
    a[len]=x;
    fir=a[0];
    len++;
    maxv=max();
}
void basehash(){
    int h[maxv+1];
    for(int i=0;i<maxv+1;i++){
        h[i]=0;
    }
    for(int i=0;i<len;i++){
        h[a[i]]=1;
    }
    for(int i=0;i<maxv+1;i++){
        printf("%d",h[i]);
    
}
}
void dupli(){
   
    int count=0;
    for(int i=0;i<len-1;i++){
        
        if(a[i]==a[i+1]){
           
        int j =i;
        while(a[j]==a[i]){
        j++;
       
        }
        printf("%d Repeats %d ",a[i],j-i);
        i=j-1;
    }

}
}

void hashfordupli(){
    int h[maxv+1]={0};
    
    
    for(int i=0;i<len;i++){
        if(a[i]==a[i+1]){
        h[a[i]]++;
        }
    }
    for(int i=1;i<maxv+1;i++){
        printf("%d  %d  ",i,h[i]);
    
}
}
int binsearch(int n){
    int l=0;
    int mid;
    int h=maxv;
    while(l<h){
        mid=(l+h)/2;
        if(a[mid]==n){
            break;
    return mid;
        }
        else if(n>a[mid])
        {
           l=mid; 
        }
        else if(n<a[mid])
        {
            h=mid;
        }
    }
    return -1;
}
void findmissuns(){
    for(int i=0;i<len;i++){
        int count =1; 
        if(a[i]==-1){
            i++;
        }
        else{
            for(int j=i+1;j<len;j++){
                if(a[i]==a[j]){
                    count++;
                    a[j]=-1;
                }
        }
                if(count>1){
                    printf("%d is repeated for %d times ",a[i],count);
                }
        }
         }
}
int letcodeezfir(){
    for(int i=0;i<len-1;i++){
        for(int j=i;j<len;j++){
            if(a[i]+a[j]==10){
            printf("%d    %d" ,a[i],a[j]);
                break;
                
            }
        }
    }
    return -1;
}
void hashforleetcodefir(){
     int h[maxv+1]={0};
     for(int i=0;i<len;i++){
        h[a[i]]=1;
     }
     for (int i=0;i<len;i++){
        if(h[10-a[i]]!=0){
            printf(" %d +%d=%d ",a[i],10-a[i],10);
            
        }
        h[a[i]]++;
     }
     printf("None found");

}
};

int main(){
    Array iol(10);
    iol.insert(1);
    iol.insert(2);
    iol.insert(1);
    iol.insert(1);
    iol.insert(8);
    iol.insert(8);
    iol.insert(8);
    
    iol.hashforleetcodefir();

    

}