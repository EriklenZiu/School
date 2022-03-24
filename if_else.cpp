/*
Il programma stampa le coppie di valori interi ugali tra loro.
*/
#include <iostream>
using namespace std;

int a,b,c,d;

int main() {
  cout << " inserisci valore intero: ";
  cin >> a;
  
  cout << " inserisci valore intero: ";
  cin >> b;
  
  cout << " inserisci valore intero: ";
  cin >> c;
  
  cout << " inserisci valore intero: ";
  cin >> d;

  if ( a==b ){
    cout << a << " - " << b;
  }
  if ( a==c ){
    cout << a << " - " << c;
  }
  if ( a==d ){
    cout << a << " - " << d;
  }
  if ( b==c ){
    cout << b << " - " << c;
  }
  if ( b==d ){
    cout << b << " - " << d;
  }
  if ( c==d ){
    cout << c << " - " << d;
  }
}
