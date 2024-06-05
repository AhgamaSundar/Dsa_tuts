#include<iostream>
#include<stdio.h>
#include<stdlib.h>
struct array{
  int arr[20];
  int len;
  int size;
  int last= len-1;

};
void display(struct array ars){
    int i;
    printf("display\n");
  for ( i=0;i<ars.len;i++){
    printf("%d\n",ars.arr[i]);

  }

}
void add(struct array *ars,int n){
  ars->arr[ars->len]=n;
  ars->len++;
}
void insert(struct array *ars,int n,int a){
  for (int i=ars->len;i>n;i--){
    
    ars->arr[i]=ars->arr[i-1];
    
  }
  ars->arr[n]=a;


}
void del(struct array *ar,int n){
  int i;
  int a;
  a=ar->arr[n];
  if (n>=0 && n<=ar->len){
  for ( i=n;i<ar->len;i++){
    ar->arr[i]=ar->arr[i+1];
  }
  ar->len--;
  }
  printf("Deleted %d \n",a);
}
void swap(int *i,int *y){
  int k;
  k=*y;
  *y=*i;
  *i=k;

  

}
int linsr(struct array *ar,int n){
  int i;
  for(i=0;i<ar->len;i++){
    if(ar->arr[i]==n){
    swap(&ar->arr[i],&ar->arr[0]);
    return i;
    
  }
  
}
return -1;
}

int binsearch(struct array ar ,int l,int h,int key){
  int mid;
  if (l<=h){
  mid=(l+h)/2;
    if(key==ar.arr[mid]){
      return mid;
    }
    else if (ar.arr[mid]>key)
    { 
      return binsearch(ar,l,mid-1,key);
    
    }
    else if(ar.arr[mid]<key)
    {
      return binsearch(ar,mid+1,h,key);
    }
    
  }
  return -1;

}
int whilbin(struct array ar,int l,int h,int key){
  int mid;
  while(l<=h){
    mid=(l+h)/2;
    if (key ==ar.arr[mid]){
      return mid;
    }
    else if(key<ar.arr[mid]){
      h=mid-1;
    }
    else if (key>ar.arr[mid]){
      l=mid+1;
    }
  }
  return -1;
}
int sumalle(struct array ar){
  int i ;
  int k =0;
  for(i=0;i<ar.len;i++){
    k=k+ar.arr[i];

  }
  return  k;
}
int sumr(struct array ar,int n){
  if (n<0 || n>ar.len){
    return 0;

  }
  else {
    return sumr(ar,n-1)+ar.arr[n];
  }
}

int main(){
  struct array ars={{1,2,3,4,5},5,10};
  struct array bin={{100,101,201,304,405,506,607},7,10};
 /* add(&ars,20);
  insert(&ars,0,70);
  display(ars);
  del(&ars,0);
  display(ars);
  printf("search  %d\n",linsr(&ars,5));
  printf("search  %d\n",linsr(&ars,5));
  printf("search %d\n",linsr(&ars,5));
  display(ars); */
  printf("%d",sumr(ars,ars.len));
  

}