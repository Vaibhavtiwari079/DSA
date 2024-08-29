#include<iostream>;
using namespace std;
class Nstack{

    int*a,*top,*next;
    int n;
    int size;
    int freespot;
    public:
      Nstack(int _n,int _s):n(_n),size(_s){
        freespot=0;
        a=new int(size);
        top= new int[n];
        next=new int[size]; 
    
    for (int i=0;i<n;i++ ){
        top[i]=-1;
    }
    
    for (int i=0;i<size;i++ ){
        next[i]=i+1;
    }
    next[size-1]=-1;
    }
    bool push(int X,int m){
        if (freespot=-1){
            return false;
        }
        //find index
        int index=freespot;
        //incre freespot
        
        //update freespot
          freespot=next[index];
          //insert
          a[index]=X;
          //update next
          next[index]=top[m-1];
          //update top
          top[m-1]=index;

          return true;
           

    }
    int pop(int m){
        if (top[m-1]==-1){
            return -1;
        }
        int index=top[m-1];
        top[m-1]=next[index];
        int poppedelem=a[index];
        next[index]=freespot;
        freespot=index;
        return poppedelem;
    }
    ~Nstack(){
        delete[] a;
        delete[] top;
        delete[] next;
         

    }
       
};
int main(){
       
    return 0;
}