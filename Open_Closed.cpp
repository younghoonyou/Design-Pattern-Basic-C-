#include <iostream>
using namespace std;
class Animal{
    public:
        void virtual speak() = 0;
};

class Cat : public Animal{
    public:
        void speak(){
            cout << "meow" << '\n';
        }
};
class Dog : public Animal{
    public:
        void speak(){
            cout << "bark" << '\n';
        }
};

class Sheep : public Animal{
    public:
        void speak(){
            cout << "me me" << '\n';
        }
};
/*
class Animal Species : public Animal{
    public:
        void speak(){
            cout << "Animal sound" << '\n';
        }
};
*/
void hey(Animal& animal){
    animal.speak();
}

int main(){
    Cat kitty;
    Dog bingo;
    Sheep mea;
    kitty.speak();
    bingo.speak();
    mea.speak();
}
/*
In your Code you should not modify your Abstract Class code 
but If someone request addition you can make new Class extension of Class
*/