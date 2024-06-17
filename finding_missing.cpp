#include<iostream>
#include<stdio.h>
class Array
{
private:
   int *a;
   int size;
   int len;
   int fir;

public:
Array(int z){
    a= new int[z];
    size=z;
    len=0;
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
void insert(int x){
    a[len]=x;
    fir=a[0];
    len++;
}
};
int main(){
    Array iol(10);
    iol.insert(1);
    iol.insert(2);
    iol.insert(3);
    iol.insert(5);
    iol.insert(6);
    iol.missingsingle();

    

}