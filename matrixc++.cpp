#include<iostream>
using namespace std;

class Diagonal{
    private:
    int n;
    int *A;
    public:
        Diagonal(int k){
            this->n=k;
            A=new int [n];


        }
        void set(int i,int j,int x){
            if(i==j){
                A[i-1]=x;

            }
            else{
                cout<<"Not a Diagonal matrix";
            }
        }
        int  get(int i,int j){
            if(i==j){
                return(A[i-1]);
            }
            else{
                return 0;
            }
        }
        void Display(){
            for(int i=1;i<n;i++){
                for(int j=1;j<n;j++){
                    if(i==j)cout<<A[i-1]<<" ";
                    else cout<<"0 ";

                }
                cout<<endl;
            }
        }
        ~Diagonal(){
            delete[]A;
        }

};
int main(){
    Diagonal a(4);
    a.set(1,1,5);
    a.set(2,2,6);
    a.set(3,3,7);
    a.set(4,4,7);
    a.Display();
}