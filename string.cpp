#include <iostream>

void valid(char name[]){
    bool isValid=true;
    int i;
    for( i=0;name[i]!='\0';i++){
        if(!(name[i]>=65 && name[i]<=90) &&!(name[i]>=97 && name[i] <=122)&&!(name[i]>=48&&name[i]<=57) ){
        isValid = false;
        printf("'%c 'is not valid \n",name[i]);
        }
    }



}

void reverse(char string[]){ //we can also use a tem variable to avoid using another array
    int i;
    for (i=0;string[i]!='\0';i++){

    }
    char * str=new char[i];
    i=i-1;
    for(int j=0;i>=0;j++,i--){
        str[j]=string[i];
        
    
    }
    //checking if palindrome
    bool pali =true;
    for (int j=0;str[j]!='\0'&&string[j]!='\0' ;j++){ //we can also use same- 
        if (str[j]!=string[j]){                       //-string array by using two index variables to check for
            pali =false;
            break;
        }
    }
    
    printf("\n %s",str);
    if(pali){
        printf(" \n %s is a palindrome ",string);
    }
    else{
        printf(" Not a palindrome");
    }
}
//for comparing two strings with the exception of case convert the strirng a lower or a upper one
int main(){
    char a[]="meem";
    char str[]={'h','o','w',' ','a','r','e',' ','y','o','u','1','#','f','i','n','e','$','\0'};
    // can only be given one character while using "char" type 
   
   
   
   int wordcount=1 ;
    
   
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
    printf("%s",str);
     reverse(a);

     
}