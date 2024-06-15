#include<iostream>

using namespace std;
template<class T>
class Array
{
private:
   T *a;
   int size;
   int len;

public:
    Array(){
        size=10;
        a=new T[10];
        len=0;

    }
    Array(int z){
        size=z;
        len=0;
        a=new T[size];
    }

    ~Array(){
        delete []a;
    }
    void display();
    void insert(int index,T y);
    int del(int index);
    void binsearch(int x);
};
template <class T>
void Array<T>::display(){
    int i;
    for (i=0;i<len;i++){
         cout<<a[i]<<endl;
         cout<<endl;
    }

}
template <class T>
void Array<T>::insert(int index,T y){
    int i;
    for (i=len;i>=index;i--){
        a[i+1]=a[i];

    }
    a[index]=y;
    len++;

}
template <class T>
int Array<T>::del(int index){
    int x=0;
    x=a[index];
    if(index>len&& index>=0){
        for(int i=index;i<len-1;i++){
        a[i]=a[i+1];
    }
    len--;
}
    return x;
    }
    template <class T>
void Array<T>::binsearch(int x){
    int m=0;
    int t=0;
    int b=len-1;
    while(a[m]!=x){
        m=(t+b)/2;
        if(x>a[m]){
            t=m;
        }
        else if(x<a[m]){
            b=m;
        }
        else break;
    }

}
int main()
{
    Array<int>  arr(10);
    arr.insert(0,1);
    arr.insert(1,2);
    arr.insert(2,3);
    arr.display();
    

return 0;
}

