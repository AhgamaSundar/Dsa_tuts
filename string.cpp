#include <iostream>

int main(){
    
    char str[]={'h','o','w',' ','a','r','e',' ','y','o','u',' ',' ','f','i','n','e','\0'};
    // can only be given one character while using "char" type 
   
   
   
   int wordcount=1 ;
    
    printf("%s \n",str);
    for (int j=0;str[j]!='\0';j++){  //switches the case of the strings
        if(str[j]>65 && str[j]<=90){
            str[j]=str[j]+32;
        }
        else if(str[j]>='a' && str[j]<=122){
            str[j]=str[j]-32;
        }
    }
    for(int i=0;str[i]!='\0';i++){ // counts the word using the spaces
       if(str[i]==' '&&str[i+1]!=' '){
        wordcount++;
       }


    }
     //printf("%d",wordcount);

     for(int i=0;str[i]!='\0';i++){
        int rep=0;
        if(str[i]==-1){
            i++;
        }
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                str[j]==-1;
                rep++;
            }
        }
            printf(" %c repeats %d times \n" ,str[i],rep);
     }
}