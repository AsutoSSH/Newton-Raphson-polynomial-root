#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

string gen_form(int degree);
string polynomial(int degree, vector<int> coeffs);
double p_of_x(double x, int degree, vector<int> coeffs);
double derivative(double x, int degree, vector<int> coeffs);
double* root(double x, int degree, vector<int> coeffs);
double Verify(double x, int degree, vector<int> coeffs);

int main()
{
    int degree = 0;
    cout << "Enter degree of polynomial:";
    cin >> degree;
    string gen = gen_form(degree);
    cout << "General Form: " << gen << endl;

    int deg1 = degree+1;
    vector<int> coeff;

    cout << "Enter coefficients(space separated): ";
    
    while(deg1--)
    {
        int temp;
        cin >> temp;
        coeff.push_back(temp);
    }
    cout << "Your polynomial is: " << polynomial(degree, coeff) << endl; 
    double x;

    while(1)
    {
        cout << "Initial value: ";
        cin >> x;
        double* rt = root(x, degree, coeff);
        if (rt[1] == 1)
        {
            cout << "One of the roots(if multiple present): " << rt[0] << endl;
        }
        else{
            cout << "No real roots found. The Loop stopped on value: " << rt[0] << endl;
        }
        cout << "Verififcation: P(found root or value loop stopped on) = " << Verify(rt[0],degree,coeff) << endl;
    }
    
}


string gen_form(int degree)
{
    string letters = "abcdefghijklmnopqrstuvwxyz";
    string poly = "";
    int i = 0;

    while (degree > 1)
    {
        poly = poly + letters[i] + "x^" + to_string(degree) + "+";
        i++;
        degree--;
    }
    poly = poly + letters[i] + "x+";
    i++;
    poly = poly + letters[i];

    return poly;
}


string polynomial(int degree, vector<int> coeffs)
{
    int i = 0;
    string poly = "";
    while (degree > 1)
    {
        if (coeffs[i] < 0 && i > 0)
        {
            poly.erase(poly.length()-1,1);
        }
        poly += to_string(coeffs[i]) + "x^" + to_string(degree) + "+";
        i++;
        degree--;
    }
    if (coeffs[i] < 0 && i > 0)
    {
        poly.erase(poly.length()-1,1);
    }
    poly += to_string(coeffs[i]) + "x" + "+";
    i++;
    if (coeffs[i] < 0 && i > 0)
    {
        poly.erase(poly.length()-1,1);
    }
    poly += to_string(coeffs[i]);
    return poly;
}


double p_of_x(double x, int degree, vector<int> coeffs)
{
    double value = 0;
    int i = 0;
    degree = degree+1;
    while(degree--)
    {
        value = value + coeffs[i]*pow(x,degree);
        i++;
    }

    return value;
}


double derivative(double x, int degree, vector<int> coeffs)
{
    double value = 0;
    int i = 0;

    while (degree > 1)
    {
        value += degree*coeffs[i]*pow(x,degree-1);
        i++;
        degree--;
    }
    value += coeffs[i];

    return value;
}


double* root(double x, int degree, vector<int> coeffs)
{
    double* y = new double[2]; 
    for (int i = 0; i < 200; i++)
    {
        double z = p_of_x(x,degree,coeffs);

        if (z > 0.000001 || z < -0.000001)
        {
            x = x - (p_of_x(x,degree,coeffs)/derivative(x,degree,coeffs));
        }
        else{
            y[0] = x;
            y[1] = 1;
            return y;
        }
    }
    y[0] = x;
    y[1] = 0;
    return y;
}

double Verify(double x, int degree, vector<int> coeffs)
{
    double value = p_of_x(x,degree,coeffs);
    value = (value*1000000)/100000;

    return value;
}

