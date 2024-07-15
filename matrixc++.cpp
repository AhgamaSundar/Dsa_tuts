#include <iostream>
using namespace std;

class Diagonal
{
private:
    int n;
    int *A;

public:
    Diagonal(int k)
    {
        this->n = k;
        A = new int[n];
    }
    void set(int i, int j, int x)
    {
        if (i == j)
        {
            A[i - 1] = x;
        }
        else
        {
            cout << "Not a Diagonal matrix";
        }
    }
    int get(int i, int j)
    {
        if (i == j)
        {
            return (A[i - 1]);
        }
        else
        {
            return 0;
        }
    }
    void Display()
    {
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (i == j)
                    cout << A[i - 1] << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
    }
    ~Diagonal()
    {
        delete[] A;
    }
};

class ltm{
private:
    int n;
    int *a;
   
public :
    ltm(){
    n=15;
    a=new int[n*(n+1)/2];

     }
    ltm(int x){
        n=x;
        a=new int [n*(n+1)/2];

    }
   
    void set(int i ,int j,int x){
        if(i>=j){
           
            a[i*(i-1)/2+j-1]=x;
        }
    }
    void setcm(int i, int j ,int x){
        if(i>=j){
            a[n*(j-1)-(j-2)*(j-1)/2+i-j]=x;
        }
    }
    int getcm(int i,int j){
        return a[n*(j-1)-(j-2)*(j-1)/2+i-j];
    }
    int  get(int i ,int j){
        if(i>=j){
            return (a[i*(i-1)/2+j-1]);
        }
    }
    
    void display(){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if(i>=j){
                    cout<<(a[n*(j-1)-(j-2)*(j-1)/2+i-j])<<" ";
                }
                else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
    }

};

int main()
{
    int n=4;
    ltm a(n);
    int x;
    cout<<"enter the elements";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>x;
            a.setcm(i,j,x);
        }

    }
    a.display();
}