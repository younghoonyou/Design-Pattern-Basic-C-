#include <iostream>
using namespace std;

class Animal{// Abstract Class
public:
    void virtual speak() = 0;//Virtual function
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Meow" << '\n';
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Bark" << '\n';
    }
};

class Factory{//Abstract Factory
    public:
        Animal virtual *Create_Animal() = 0;//Virtual function
};

class Animal_Factory{
    public:
        void virtual Create_Animal() = 0;
};

class Cat_Factory : public Factory{
    private:
        int cnt;

    public:
        Cat_Factory():cnt(0){}
        Animal* Create_Animal(){
            cnt++;
            return new Cat;
        }
        int Cat_Count(){//New Feature of Cat
            return cnt;
        }
};

class Dog_Factory : public Factory{
    public:
        Animal* Create_Animal(){
            return new Dog;
        }
};

int main(){
    Cat_Factory cat_factory;

    Animal *cat1 = cat_factory.Create_Animal();//Declare 4 Cats
    Animal *cat2 = cat_factory.Create_Animal();
    Animal *cat3 = cat_factory.Create_Animal();
    Animal *cat4 = cat_factory.Create_Animal();

    cat4->speak();

    cout << cat_factory.Cat_Count() << '\n';//Cat Factory Method
    //you can make animal factory's method or variable individually
    Dog_Factory dog_factory;

    Animal *dog = dog_factory.Create_Animal();

    dog->speak();
}
/*
Difference from Factory Pattern is Using Method you can modify Object Feactures from Factory
*/