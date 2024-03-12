#include "Cordinates.cpp"

int main()
{
    //Abstract a;
    Direct d;
    Parabola p;
    Circle c;


    int x;
    int a1;
    int b;
    int c1;
    int r;


    cout << "Enetr x: ";
    cin >> x;

    cout << "Enetr a: ";
    cin >> a1;

    cout << "Enetr b: "; 
    cin >> b;

    d.GetX(x);
    d.GetA(a1);
    d.GetB(b);

    cout << "y: " << d.FindY() << endl;

    
    cout << "Enetr x: ";
    cin >> x;

    cout << "Enetr a: ";
    cin >> a1;

    cout << "Enetr b: ";
    cin >> b;

    cout << "Enetr c: ";
    cin >> c1;

    p.GetX(x);
    p.GetA(a1);
    p.GetB(b);
    p.GetC(c1);
    cout << "y: " << p.FindY() << endl;

    cout << "Enetr x: ";
    cin >> x;

    cout << "Enetr a: ";
    cin >> a1;

    cout << "Enetr b: ";
    cin >> b;

    cout << "Enetr r: ";
    cin >> r;

    c.GetX(x);
    c.GetA(a1);
    c.GetB(b);
    c.GetR(r);
    cout << "y: " << c.FindY() << endl;
    
}