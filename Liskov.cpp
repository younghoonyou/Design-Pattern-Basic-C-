#include <iostream>
using namespace std;
class Cat
{
public:
    Cat(){}
    void speak()
    {
        cout << "meow" << '\n';
    }
};
class Black_Cat : public Cat
{
public:
    Black_Cat(){}
    void speak(){
        cout << "Black mewo" << '\n';
    }
};

void speak(Cat& cat){
    cat.speak();
}
int main()
{
    Cat *kitty = new Black_Cat;//Up scaling in C++
    speak(*kitty);//Using * reference object that is Black_Cat but result in Cat class

    // Black_Cat *black = new Cat; it can't be because Black_Cat is child Class of Cat
    return 0;
}