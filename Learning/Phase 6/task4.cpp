#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class student{

    public:
        string name;

    student(string n,int a){
        name=n;
        age=a;
        //setAge(a);       // 🔥 ----------------GOOD PRACTICE-------------------
    } 

    void setAge(int p){

        if(p<0){
            cout<<"Invalid Age";
        }
        else{
            age=p;
        }

    }

    int getAge(){
        return age;
    }

    void display(){
         cout<<"Name of the student is: "<<name<<endl;
         cout<<"The age of student is : "<<getAge()<<endl;
    }

    private:
    int age;

};

int main() {

    student s1("Somya",18);
    student s2("Manu",20);

    s1.display();
    s2.display();

    

    return 0;
}