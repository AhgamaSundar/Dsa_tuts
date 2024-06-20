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
    int h[maxv+1]={1};
    
    
    for(int i=0;i<len;i++){
        if(a[i]==a[i+1]){
        h[a[i]]++;
        }
    }
    for(int i=1;i<maxv+1;i++){
        printf("%d Appears %d  ",i,h[i]);
    
}
}
};

int main(){
    Array iol(10);
    iol.insert(1);
    iol.insert(2);
    iol.insert(2);
    iol.insert(6);
    iol.insert(8);
    iol.insert(8);
    iol.insert(8);
    
    iol.hashfordupli();

    

}