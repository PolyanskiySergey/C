#include<iostream>
#include<math.h>

using namespace std;
struct vector
{
    double x, y, z;
    vector(double X, double Y, double Z)
    {
        x = X;
        y = Y;
        z = Z;
    };

    double length(void)
    {
        return sqrt(x * x + y * y + z * z);
    };
};
void addition (vector v1, vector v2, vector S)
{
    S.x = v1.x + v2.x;
    S.y = v1.y + v2.y;
    S.z = v1.z + v2.z;
    cout << "Сумма векторов A+B=" << S.x << " " << S.y << " " << S.z << "\n";
};

void difference (vector v1, vector v2, vector D)
{
    D.x = v1.x - v2.x;
    D.y = v1.y - v2.y;
    D.z = v1.z - v2.z;
    cout << "Разность векторов A-B=" << D.x << " " << D.y << " " << D.z << "\n";
};

void main(void)
{
    setlocale(LC_ALL, "Russian");
    double x1, x2, y1, y2, z1, z2;
    cout << "Введите координаты вектора A=";
    cin >> x1 >> y1 >> z1;
    cout << "Введите координато выектора B=";
    cin >> x2 >> y2 >> z2;
    vector v(x1, y1, z1);
    vector v1(x1, y1, z1);
    vector v2(x2, y2, z2);
    vector S(0, 0, 0);
    vector D(0, 0, 0);
    double l = v.length();
    cout << "Длина вектора A=" << l << endl;
    addition(v1, v2, S);
    difference(v1, v2, D);
}