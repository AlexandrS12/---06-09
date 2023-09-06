#include <iostream>
using namespace std;

class fraction
{
private:
    int x = 15;
    int y = 5;
public:
    void initFraction(int _i, int _j)
    {
        x = _i;
        y = _j;
    }
    void Print()
    {
        cout << "numerator = " << x << endl << "denominator = " << y << endl;
    }
    void numberAddition(int c, int d)
    {
        if (c > 0 && d > 0)
        {
            x += c;
            y += d;
        }
        else
        {
            cout << "Use denominator > 0." << endl;
        }
    }
    void numberSubstraction(int c, int d)
    {
        if (c > 0 && d > 0)
        {
            x -= c;
            y -= d;
        }
        else
        {
            cout << "Use denominator > 0." << endl;
        }
    }
    void numberMultiplication(int c, int d)
    {
        if (c > 0 && d > 0)
        {
            x *= c;
            y *= d;
        }
        else
        {
            cout << "Use denominator > 0." << endl;
        }
    }
    void numberDivision(int c, int d)
    {
        if (c > 0 && d > 0)
        {
            x /= c;
            y /= d;
        }
        else
        {
            cout << "Use denominator > 0." << endl;
        }
    }
    void addToX(int k)
    {
        x += k;
    }
    void addToY(int k)
    {
        y += k;
    }
    void setX(int k)
    {
        x = k;
    }
    void setY(int k)
    {
        y = k;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

int main()
{


    fraction action;

    action.initFraction(12, 6);
    action.Print();
    cout << endl << "Addition\n";

    action.numberAddition(2, 2);
    action.Print();
    cout << endl << "Substraction\n";

    action.numberSubstraction(4, 3);
    action.Print();
    cout << endl << "Multiplication\n";

    action.numberMultiplication(10, 5);
    action.Print();
    cout << endl << "Division\n";

    action.numberDivision(4, 5);
    action.Print();

}