#include <iostream>
using namespace std;

enum Aniaml_enum
{
    CAT = 1,
    DOG,
    // COW, Just add in enum and Class
};

class Animal{//Abstract Class
public:
    void virtual speak() = 0;
};

class Cat : public Animal{
    public:
        void speak(){
            cout << "Meow" << '\n';
        }
};

class Dog : public Animal{
    public:
        void speak(){
            cout << "Bark" << '\n';
        }
};

// class Cow : public Animal
// {
// public:
//     void speak()
//     {
//         cout << "Um Mewo" << '\n';
//     }
// };

class Factory{
    public:
        Animal* Create_Animal(Aniaml_enum animal){
            if(animal == CAT) return new Cat;
            else if(animal == DOG) return new Dog;
            // else if(animal == COW) return new Cow;
        }
};
int main()
{
    Factory factory;

    Animal *cat = factory.Create_Animal(CAT);
    Animal *dog = factory.Create_Animal(DOG);
    // Animal *cow = factory.Create_Animal(COW);

    cat->speak();
    dog->speak();
    // cow->speak();
}