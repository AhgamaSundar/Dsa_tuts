#include<iostream>


class array{
    private:
  int *arr;
  int len;
  int size;
  

public:
array(){
    size=10;
    len=0;
    arr=new int[size];
}
array(int sz){
    size=sz;
    len=0;
    arr=new int[size];
}
~array(){
    delete []arr;
}
void display(){
    int i;
    printf("display\n");
  for ( i=0;i<len;i++){
    printf("%d\n",arr[i]);

  }

}
void add(int n){
  arr[len]=n;
  len++;
}
void insert(int n,int a){
  for (int i=len;i>n;i--){
    
    arr[i]=arr[i-1];
    
  }
  arr[n]=a;


}
void del(int n){
  int i;
  int a;
  a=arr[n];
  if (n>=0 && n<=len){
  for ( i=n;i<len;i++){
    arr[i]=arr[i+1];
  }
  len--;
  }
  printf("Deleted %d \n",a);
}
void swap(int *i,int *y){
  int k;
  k=*y;
  *y=*i;
  *i=k;

  

}
int linsr(int n){
  int i;
  for(i=0;i<len;i++){
    if(arr[i]==n){
    swap(&arr[i],&arr[0]);
    return i;
    
  }
  
}
return -1;
}

int binsearch(int l,int h,int key){
  int mid;
  if (l<=h){
  mid=(l+h)/2;
    if(key==arr[mid]){
      return mid;
    }
    else if (arr[mid]>key)
    { 
      return binsearch(l,mid-1,key);
    
    }
    else if(arr[mid]<key)
    {
      return binsearch(mid+1,h,key);
    }
    
  }
  return -1;

}
int whilbin(int l,int h,int key){
  int mid;
  while(l<=h){
    mid=(l+h)/2;
    if (key ==arr[mid]){
      return mid;
    }
    else if(key<arr[mid]){
      h=mid-1;
    }
    else if (key>arr[mid]){
      l=mid+1;
    }
  }
  return -1;
}
int max( ){
  int mx=0;
  
  for (int i=0;i<len;i++){
    if(arr[i]>mx){
      mx=arr[i];
    }
    
  }
  return(mx);  

}
int sumalle(){
  int i ;
  int k =0;
  for(i=0;i<len;i++){
    k=k+arr[i];

  }
  return  k;
}
int sumr(int n){
  if (n<0 || n>len){
    return 0;

  }
  else {
    return sumr(n-1)+arr[n];
  }
}
void reverse(){
  int m;
  int j;
  int array[6];
  for (int i=len-1,j=0;j<=i;i--,j++){
    m=arr[j];
    arr[j]=arr[i];
    arr[i]=m;
    
    }  
} 
void leftshift(int n){

for(int i=0;i<n;i++){
  arr[0+len]=arr[0];
  
  for(int j=0;j<len;j++){
    arr[j]=arr[j+1];
  }
  
} 
}

bool issort(){
  int i=0;

  while(arr[i]<arr[i+1]&&i<len-1){
    
    i++;
    
  }
  if (i==len-1){
    return true;
  }
  return false;

}
void insertsot(int x){
  int i=len-1;
  if(len==size){
    return;
  }
  while (i>=0&&arr[i]>x){
    arr[i+1]=arr[i];
    i--;
  }
  arr[i+1]=x;
  len++;
  
}
void arra(){
  
  int j=0;
  int k=len-1;

  while(j<k){
    while(arr[j]<0)j++;
    while(arr[k]>=0)k--;
    if(j<k)swap(&arr[j],&arr[k]);
  }
}
array* merge(array n){
   array *f=new array(len+n.len);
  int i=0;
  int j=0;
  int k=0;
  while(i<len&&j<n.len){
    if (arr[i]<n.arr[j]){
      f->arr[k]=arr[i++];
    }
    else{
      f->arr[k]=n.arr[j++];
    }
    k++;
    
  }
  for(;i<len;i++){
    f->arr[k++]=arr[i];
    
  }
  for(;j<n.len;j++){
    f->arr[k++]=n.arr[j];
    
  }
  f->len=len+n.len;
  f->size=20;
  return f;
}
 array* usnion( array *p){
    array *f=new array(len+p->len);
    int i=0;
    int j=0;
    int k=0;
    while(i<len&&j<p->len){
      if(arr[i]<p->arr[j]){
        f->arr[k++]=arr[i++];
      }
      else if(p->arr[j]<arr[i]){
        f->arr[k++]=p->arr[j++];
      }
      else{
        f->arr[k++]=arr[i++];
        j++;
      }
    }
  
  
  for(;i<len;i++){
    f->arr[k++]=arr[i];
    
  }
  for(;j<p->len;j++){
    f->arr[k++]=p->arr[j];
    
  }
  f->len=k;
  f->size=20;
  return f;
  

}
 array* intersection(array *p){
    array *f=new array(len+p->len);
    int i=0;
    int j=0;
    int k=0;
    while(i<len&&j<p->len){
      if(arr[i]<p->arr[j]){
        i++;
      }
      else if(p->arr[j]<arr[i]){
        j++;
      }
      else{
        f->arr[k++]=arr[i++];
        j++;
      }
    }
  
  
 
  f->len=k;
  f->size=20;
  return f;
  

}
 array* difference( array *p){
    array *f=new array(len+p->len);
    int i=0;
    int j=0;
    int k=0;
    while(i<len&&j<p->len){
      if(arr[i]<p->arr[j]){
        f->arr[k++]=arr[i++];
      }
      else if(p->arr[j]<arr[i]){
        j++;
      }
      else{
        i++;
        j++;
      }
    }
  
  
  for(;i<len;i++){
    f->arr[k++]=arr[i];
    
  }
  
  f->len=k;
  f->size=20;
  return f;

}
 array* usunion(struct array *p){
   array *f=new array(len+p->len);
  int k=0;
  for(int i=0;i<len;i++){
    f->arr[k++]=arr[i];
    f->len++;
    
  }
  int r=len+p->len;
  
    bool t=0;
  for(int l=0;l<p->len;l++){
    t=0;
    for (int j=0;j<f->len;j++){
      if(p->arr[l]==f->arr[j]){
        t= 1;
        break;
      }
      }
      if(t==0){
        f->arr[k++]=p->arr[l];
      }
  }
  f->len=k;
  return f;

}
};


int main(){
   array *men;
  
  int x,ch,n,size,f;
  printf("Please enter the size :");
  scanf("%d",&size);
  men=new array(size);

  printf("Array operations \n");
  printf("1.Insert\n");
  printf("2.Add\n");
  printf("3.Delete\n");
  printf("4.display\n");
  printf("5.check if sorted\n");
do{
  printf("Enter the choice :" );
  scanf("%d",&ch);
  switch (ch)
  {
  case 1:printf("Enter the location and the element");
  std::cin>>x;
  scanf("%d",&n);
  men->insert(x,n);
  men->display();
  break;
  case 2:printf("Enter the element");
    std::cin>>x;
    men->add(x);
  break;
  case 3:printf("Enter the location of the element to delete ");
  std::cin>>x;
  men->del(x);
  break;
  case 4:men->display();
  break;
  case 5:x=men->issort();
  printf("%d",x);
  break;
  
  }
}while(ch<6);

  


  
  
  
  
  

}