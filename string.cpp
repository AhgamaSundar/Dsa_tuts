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
void swap(char &a,char &b){
    char temp;
    temp=a;
    a=b;
    b=temp;

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
void switchCase(char *str){
     
    for (int j=0;str[j]!='\0';j++){  //switches the case of the strings
        if(str[j]>65 && str[j]<=90){
            str[j]=str[j]+32;
        }
        else if(str[j]>='a' && str[j]<=122){
            str[j]=str[j]-32;
        }
    }
}
//for comparing two strings with the exception of case convert the strirng a lower or a upper one

void hashdupli(char a[]){ //has for finding duplicates
         
     char string[26]={0};
     for (int i=0;a[i]!='\0';i++){
        string[a[i]-'a']++; //subtracts '97' and increments the index
     }
     for(int i=1;i<26;i++){
        if(string[i]>1){
            printf("%c is repeated \n",i+'a');
        }
        else{printf("%s",string);}
     }


}

void bitwisedupli (char a[]){
    long int H=0,x=0;
    for(int i=0;a[i]!='\0';i++){
        x=1;
        x=x<<(a[i]-97); //replacing 0 with 1 by using  the  leftshit operator  which moves the "ON state i.e 1  to the position like has table"
        if((x&H) >0){ //masking -:basically ANDing two bits i.e performing an AND operation on the two variables bits 
            printf("%c is duplicate \n",a[i]);
        }
        else{
            H=H|x; //merging or  ORing
        }
    }
}
void isAnogram(char a[],char b[]){ //using has table to find anogram
    int Hash[26]={0};
    int i;
    for( i=0;a[i]!='\0'&&b[i]!='\0';i++);
    if(a[i]=='\0'&&b[i]=='\0'){
        for(int i=0;a[i]!='\0';i++){
            Hash[a[i]-97]++;
            Hash[b[i]-97]++;
        }
        int j;
        for( j=0;j<26;j++){
            if(Hash[j]%2!=0){
                printf("Not an a  nogram");
                break;
                
            }
            
        }
        if(j==26){
            printf("Yep \n %s and %s  is an anogram",a,b);
        }
 

    }
    else{

        printf("Not an anogram");
       
    }

}
void premu(char a[], int k){ //debug this fucntion to get the idea
    static int snew[10]={0};
    static char res[10];
    if(a[k]=='\0'){
        res[k]='\0';
        printf("%s \n",res);

    }
    else{
        int i;
        for(i=0;a[i]!='\0';i++){
            if(snew[i]==0){
            res[k]=a[i]; //the output or reult array 
            snew[i]=1; //the array used as a flag for each element in the original string
            premu(a,k+1);
            snew[i]=0;
            }
        }
    }

}
void prem(char a[],int l ,int h){
    int i;
    if(l==h){
       printf(" %s \n",a);
    }
    else{
    for( i=l;i<=h;i++){

        swap(a[l],a[i]);
        prem(a,l+1,h);
        swap(a[l],a[i]);

    }
    }
}

int main(){
    char a[]="meem";
    char str[]={'h','o','w',' ','a','r','e',' ','y','o','u','1','#','f','i','n','e','$','\0'};
    char ano[]="verbose";
    char gram[]="observe";
    char premutation[]="ABC";
    // can only be given one character while using "char" type 
   
   
   
   int wordcount=1 ;
   for (int j=0;str[j]!='\0';j++){  //switches the case of the strings
        if(str[j]>65 && str[j]<=90){
            str[j]=str[j]+32;
        }
    
   }
    for(int i=0;str[i]!='\0';i++){ // counts the word using the spaces
       if(str[i]==' '&&str[i+1]!=' '){
        wordcount++;
       }


    }
  prem(premutation,0,2);

     
}