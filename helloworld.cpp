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
int maxmin(struct array ar ){
  int mx=0;
  int sm=0;
  for (int i=0;i<ar.len;i++){
    if(ar.arr[i]>mx){
      mx=ar.arr[i];
    }
    
  }
  return(mx);  

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
void reverse(struct array *ar){
  int m;
  int j;
  int array[6];
  for (int i=ar->len-1,j=0;j<=i;i--,j++){
    m=ar->arr[j];
    ar->arr[j]=ar->arr[i];
    ar->arr[i]=m;
    
    }  
} 
void leftshift(struct array *ar ,int n){

for(int i=0;i<n;i++){
  ar->arr[0+ar->len]=ar->arr[0];
  
  for(int j=0;j<ar->len;j++){
    ar->arr[j]=ar->arr[j+1];
  }
  
} 
}

bool isort(struct array ar){
  int i=0;

  while(ar.arr[i]<ar.arr[i+1]&&i<ar.len-1){
    
    i++;
    
  }
  if (i==ar.len-1){
    return true;
  }
  return false;

}
void insertsot(struct array *ar,int x){
  int i=ar->len-1;
  if(ar->len==ar->size){
    return;
  }
  while (i>=0&&ar->arr[i]>x){
    ar->arr[i+1]=ar->arr[i];
    i--;
  }
  ar->arr[i+1]=x;
  ar->len++;
  
}
void arra(struct array *ar){
  
  int j=0;
  int k=ar->len-1;

  while(j<k){
    while(ar->arr[j]<0)j++;
    while(ar->arr[k]>=0)k--;
    if(j<k)swap(&ar->arr[j],&ar->arr[k]);
  }
}




int main(){
  struct array ars={{1,2,3,4,5},5,10};
  struct array bin={{-1,3,12,-23,4,-2},6,10};
  arra(&bin);
  display(bin);
  

}