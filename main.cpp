#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define new_calc 1
#define old_calc 0
using namespace std;
class Scientific_Calc {
public:
    static double addition(double, double);

    static double substract(double, double);

    static double multiplication(double, double);

    static double division(double, double *);

    static double modulus(double *, double *);

    static double square(double);

    static double cube(double);

    static double power(double, double);

    static double sq_root(double);

    static double sin_fun(double);

    static double cos_fun(double);

    static double tan_fun(double);

    static long int fact(double);

    static double log_fun(double);

    static double log10_fun(double);

    static double exp_fun(double);

    static double sqrt_fun(double);
};
double Scientific_Calc::addition(double a,double b) {
    return (a + b);
}
double Scientific_Calc::substract(double a,double b) {
    return (a - b);
}
double Scientific_Calc::multiplication(double a,double b) {
    return (a * b);
}
double Scientific_Calc::division(double a,double *b) {
    while (*b == 0) {
        cout << "\n cannot divide by zero";
        cout << "\n enter the second number again ";
        cin >> *b;
    }
    return (a / (*b));
}
double Scientific_Calc::modulus(double *a,double *b) {
    while (*b == 0) {
        cout << "\ncannot divid by zero.";
        cout << "\nenter the second number again";
        cout << *b;
    }
    int x = (int) *a;
    int y = (int) *b;
    if (*a - x > 0 || *b - y > 0)
        cout << "\nconverting decimal number into an integer to perform modulus";
    *a = x;
    *b = y;
    return (x % y);
}
double Scientific_Calc::square(double x) {
    return (pow(x, 2));
}
double Scientific_Calc::cube(double x) {
    return (pow(x, 3));
}
double Scientific_Calc::power(double x,double y) {
    return (pow(x, y));
}
long int Scientific_Calc::fact(double x) {
    int n = (int) x;
    long int f = 1;
    while (n > 1) {
        f *= n;
        n--;
    }
    return f;
}
double Scientific_Calc::sin_fun(double x) {
    return (sin(x));
}
double Scientific_Calc::cos_fun(double x) {
    return (cos(x));
}
double Scientific_Calc::tan_fun(double x) {
    return (tan(x));
}
double Scientific_Calc::log_fun(double x) {
    return (log(x));
}
double Scientific_Calc::log10_fun(double x) {
    return (log10(x));
}
double Scientific_Calc::exp_fun(double x) {
    return (exp(x));
}
double Scientific_Calc::sqrt_fun(double x) {
    return (sqrt(x));
}
int main() {
    double num1, num2, num3, temp;
    int choice2, flag;
    flag = new_calc;
    do {
        cout << "\n====================standard calculator=====================";
        cout << "\n1- Addition(+) \t\t 10- Factorial(!x) "
             << "\n2- Subtraction(-) \t 11- Sin(x) "
             << "\n3- Multiplication(*) \t 12- Cos(x)"
             << "\n4- Division(/) \t\t 13- Tan(x) "
             << "\n5- Modulus(%) \t\t 14- Log(x)"
             << "\n6- Square(n^2) \t\t 15- log10(x) "
             << "\n7- Square root(n^.5) \t 16- e^(x) "
             << "\n8- Cube(n^3) \t\t 17- Quit"
             << "\n9- Power(n^x)  ";
        //here if we already used Operations then clear Memory option'll appear
        if (flag == old_calc)
            cout << "\t\t 18- Clear Memory";
        cout << "\nchoose type of the calculation: ";
        cin >> choice2;
        switch (choice2) {
            case 1:
                if (flag == new_calc) {// لو دى اول مره اليوزر يستخدم فيها الاله هيظهرله انه يدخل اول رقم
                    cout << "enter the first number: ";
                    cin >> num1;
                } else { // غير كدا لو استخدمها وعمل عمليه قبل كدا هيظهرلك هيساوى الرقم الاول بناتج العمليه الاخيره وهيطلب الرقم الثانى بس
                    num1 = temp;
                    cout << "\nfirst number is: " << num1 << '\n';
                }
                cout << "enter the second number: ";
                cin >> num2;
                num3 = Scientific_Calc::addition(num1, num2);
                cout << '\n' << num1 << " + " << num2 << " = " << num3;

                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 2:
                if (flag == new_calc) {
                    cout << "enter the first number: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\nfirst number is: " << num1 << '\n';
                }
                cout << "enter second number: ";
                cin >> num2;
                num3 = Scientific_Calc::substract(num1, num2);
                cout << '\n' << num2 << " - " << num1 << " = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 3:
                if (flag == new_calc) {
                    cout << "enter first number: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\nfirst number is: " << num1 << '\n';
                }
                cout << "\nenter the second number: ";
                cin >> num2;
                num3 = Scientific_Calc::multiplication(num1, num2);
                cout << '\n' << num1 << " * " << num2 << " = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 4:
                if (flag == new_calc) {
                    cout << "enter first number: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\nfirst number is: " << num1 << '\n';
                }
                cout << "enter second number: ";
                cin >> num2;
                num3 = Scientific_Calc::division(num1, &num2);
                cout << '\n' << num1 << " / " << num2 << " = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 5:
                if (flag == new_calc) {
                    cout << "enter the first number: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\nfirst number is: " << num1 << '\n';
                }
                cout << "enter the second number: ";
                cin >> num2;
                num3 = Scientific_Calc::modulus(&num1, &num2);
                cout << '\n' << num1 << " % " << num2 << " = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 6:
                if (flag == new_calc) {
                    cout << "enter number to find square: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\n number is: " << num1 << '\n';
                }
                num3 = Scientific_Calc::square(num1);
                cout << "\nsquare of " << num1 << " = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 7:
                if (flag == new_calc) {
                    cout << "enter number to find square root:";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\n number : " << num1 << '\n';
                }
                num3 = Scientific_Calc::sqrt_fun(num1);
                cout << "\nsquare of " << num1 << " = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 8:
                if (flag == new_calc) {
                    cout << "enter to find cube: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\nnumber : " << num1 << '\n';
                }
                num3 = Scientific_Calc::cube(num1);
                cout << "\ncube of " << num1 << " = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 9:
                if (flag == new_calc) {
                    cout << "enter the first number (base) to find power: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\nfirst number is: " << num1 << '\n';
                }
                cout << "enter the second number (power) to find power: ";
                cin >> num2;
                num3 = Scientific_Calc::power(num1, num2);
                cout << "\n" << num1 << " ^ " << num2 << " = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 10: {
                if (flag == new_calc) {
                    cout << "enter number to find factorial: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\n number to find factorial is: " << num1 << '\n';
                }
                long int num4 = Scientific_Calc::fact(num1);
                cout << "\nfactorial of " << num1 << " = " << num4;
                temp = num4;
                flag = old_calc;
            }
                break;
            case 11:
                if (flag == new_calc) {
                    cout << "enter SIN: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\nnumber for sin value is: " << num1 << '\n';
                }
                num3 = Scientific_Calc::sin_fun(num1);
                cout << "\nSIN (" << num1 << ") = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 12:
                if (flag == new_calc) {
                    cout << "\nenter COS: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\nnumber for cos value is: " << num1 << '\n';
                }
                num3 = Scientific_Calc::cos_fun(num1);
                cout << "\nCOS (" << num1 << ") = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 13:
                if (flag == new_calc) {
                    cout << "enter TAN: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\nnumber for tan value is: " << num1 << '\n';
                }
                num3 = Scientific_Calc::tan_fun(num1);
                cout << "\nTAN (" << num1 << ") = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 14:
                if (flag == new_calc) {
                    cout << "enter LOG: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\nnumber for log value is: " << num1 << '\n';
                }
                num3 = Scientific_Calc::log_fun(num1);
                cout << "\nLOG (" << num1 << ") = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 15:
                if (flag == new_calc) {
                    cout << "enter LOG10: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\nnumber for natural log value is: " << num1 << '\n';
                }
                num3 = Scientific_Calc::log10_fun(num1);
                cout << "\nLOG10 (" << num1 << ") = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 16:
                if (flag == new_calc) {
                    cout << "enter e^: ";
                    cin >> num1;
                } else {
                    num1 = temp;
                    cout << "\nnumber for exponential value is :" << num1 << '\n';
                }
                num3 = Scientific_Calc::exp_fun(num1);
                cout << "\ne^ (" << num1 << ") = " << num3;
                temp = num3;
                cout
                        << "\na result of this operation saved for next operation \n if you want wipe it choose Clear Memory";
                flag = old_calc;
                break;
            case 17:
                cout << "\nQuitting..............";
                cout << "\npress any key to continue...............";
                exit(0);
            case 18:
                if (flag == new_calc) {
                    cout << "\ninvalid choice";
                } else {
                    temp = 0;
                    flag = new_calc;
                    system("CLS");//علشان تمسح الشاشه وترجع زى الاول
                }
                break;
            default:
                cout << "invalid choice";
                break;
        }
    } while (choice2 != 17);
}
