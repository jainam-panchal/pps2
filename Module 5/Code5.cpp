#include <iostream>
#include <math.h>
using namespace std;

class complex
{
private:
    double real;
    double img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }

    ~complex()
    {
        cout << "Object Destroyed\n";
    }

    void getData()
    {
        cout << "Enter Real Number: ";
        cin >> real;
        cout << "Enter Img Number: ";
        cin >> img;
        cout << "\n";
    }

    void putData()
    {
        cout << "Your Complex Number has --> Real: " << real << " Img: " << img << endl
             << endl;
    }

    complex plus (complex const &obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

    complex minus (complex const &obj)
    {
        complex temp;
        temp.real = real - obj.real;
        temp.img = img - obj.img;
        return temp;
    }

    complex multiply (complex const &obj)
    {
        complex temp;
        temp.real = ((real * obj.real) - (img * obj.img));
        temp.img = ((real * obj.img) + (img * obj.real));
        return temp;
    }

    complex div (complex const &obj)
    {
        complex temp;
        temp.real = ((real * (obj.real)) + (img * (obj.img))) / (pow(obj.real, 2) + pow(obj.img, 2));
        temp.img = (((obj.real) * img) - (real * (obj.img))) / (pow(obj.real, 2) + pow(obj.img, 2));
        return temp;
    }
};

int main()
{
    class complex c1, c2, c3;
    cout << "First Complex number\n";
    c1.getData();
    cout << "Second Complex number\n";
    c2.getData();

    int choice;
    cout << "\nWhich operatio you want to perform on given compelx numbers?\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nChoose :";
    cin >> choice;

    switch (choice)
    {
    case 1:
        c3 = c1.plus(c2);
        cout << "\nAfter Addition\n";
        c3.putData();
        break;
    case 2:
        c3 = c1.minus(c2);
        cout << "\nAfter Subtraction\n";
        c3.putData();
        break;
    case 3:
        c3 = c1.multiply(c2);
        cout << "\nAfter Subtraction\n";
        c3.putData();
        break;
    case 4:
        c3 = c1.div(c2);
        cout << "\nAfter Division\n";
        c3.putData();
        break;
    default:
        cout << "Invalid Input\n";
    }

    cout << "\n\n";
    return 0;
}
