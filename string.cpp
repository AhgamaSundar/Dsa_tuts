#include <iostream>

int main(){
    char a;
    char str[]={'a','b','c','\0'};
    a='a';// can only be given one character while using "char" type 
    int i;
    for(i=0;str[i]!='\0';i++){
        
    }
   
   
    for(int j=0;str[j]!='\0';j++){
        str[j]=str[j]-32;// adding 32 makes lower ->UPPER vice versa for making it lower as i  did here
        
    }
    printf("%s \n",str);
    for (int j=0;str[j]!='\0';j++){
        if(str[j]>65 && str[j]<=90){
            str[j]=str[j]+32;
        }
        else{
            str[j]=str[j]-32;
        }
    }
     printf("%s \n",str);

}