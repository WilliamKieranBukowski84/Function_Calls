/* William Bukowski

*/

#include <iostream>
using namespace std;

int AddTwoInt(int x, int y);
int SubTwoInt(int x, int y);
int MultTwoInt(int x, int y);
int DivTwoInt(int x, int y);
int MaxInt(int x, int y);
int MinInt(int x, int y);
double RecipInt(int x);

int main ()
{
    int x;
    int y;
    int r;
    double h;

    cout << "Enter two numbers, one at a time" << endl;
    cin >> x >> y;


    r = AddTwoInt(x, y);
    cout << r << ": Addition" << endl;

    r = SubTwoInt(x,y);
    cout << r << ": Subtraction" << endl;
    
    r = MultTwoInt(x,y);
    cout << r << ": Multiplication" << endl;

    r = DivTwoInt(x,y);
    cout << r << ": Division" << endl;

    r = MaxInt(x,y);
    cout << r << ": Max" << endl;

    r = MinInt(x,y);
    cout << r << ": Min" << endl;

    h = RecipInt(x);
    if(h == 0) 
    {
        cout << " undefined reciprocal" << endl;
    }
    else
    {
        cout << h << ": Reciprocal of first number" << endl;
    }
    
    return 0;
}

int AddTwoInt(int x, int y) 
{
    int z;
    z = x + y;
    return z;
    
}

int SubTwoInt(int x, int y)
{
    int z;
    z = x - y;
    return z;
}

int MultTwoInt(int x, int y)
{   
    int z;
    z = x * y;
    return z;
}

int DivTwoInt(int x, int y)
{   
    int z;
    z = x / y;
    return z;
}

int MaxInt(int x, int y)
{
    if ( x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int MinInt(int x, int y)
{
    if ( x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
    
}

double RecipInt(int x)
{   
    double z;
    if(x == 0)
    {
        z = 0;
    }
    else
    {
      z = 1.0/double(x);
    }
    return z;
}