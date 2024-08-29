#include<bits/stdc++.h>
using namespace std;
class Animal {
    private:
    int weight;
  
  
    public:
    int age;
    string type;
    
    
    //constructor
      
     Animal( ){
        this->age=0;
        this->weight=0;

     }
     //parameteriased constructor
     Animal(int age){
        this->age=age;
        this->weight=0;

     }
      Animal(int age,int weight){
        this->age=age;
        this->weight=weight;

     }
     //copy constructor
      Animal(Animal &obj){
        this->age=obj.age;
        this->weight=obj.weight;

     }





   // behviour
   void eat(){
    cout<<"eating"<<endl;
   }


//destrucor static(automatically) dynamic(delete keyword)
  ~Animal(){
     
}
} 
;
class Cat{
   public:
     int age;
     string name;
};
//inheritance
class dog: public Cat {
   
};
int main(){
    //static
     Animal a;
     //Dynamic
     Animal *b= new Animal;
//copy
Animal c=a;
return 0;

}

////lect2 opertr overloDING
/*
class param {
   int val;
   void opertor+(Param& obj2){
      int value1=this->val;
      int value2=obj2.val;
      cout<<(value2.value)<<endl;

   }

   main ke andar 
   param obj1 , obj2;
   obj1 +obj2
}*/