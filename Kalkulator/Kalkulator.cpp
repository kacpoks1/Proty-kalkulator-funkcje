#include <iostream>
using namespace std;

float odejmowanie(float k, float o) 
{
    return k - o;
}

float dodawanie(float k, float o) 
{
    return k + o;
}

float mnozenie(float k, float o) 
{
    return k * o;
}
float dzielenie(float k, float o) 
{
    return k / o;
}
    

float main()
{
    float a, b, x;
    char op;
    cout << "Podaj liczby: " <<endl ;
    cin >> a >> b;
    cout << "Podaj czynnosc: ";
    cin >> op;
     
        if (op == '-') {

            float x=odejmowanie(a, b);
            cout << x;
             
            return 0;
        }
        else if (op == '+') {
            float x = dodawanie(a, b);
            cout << x;

            return 0;
        }
               
            else if (op == '*'){
            
                float x = mnozenie(a, b);
                 cout << x;

                return 0;
        }
        
            else if (op == '/') {
                
                float x = dzielenie(a, b);
                cout << x;

                return 0;
            }
         
            else 
            cout << "podaj prawidlowy operator";
             
    
   
 
}


