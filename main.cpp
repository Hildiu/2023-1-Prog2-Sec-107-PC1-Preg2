/*-----------------------------------
 * Dato de Entrada:  n (int) numero de angulos
 *                   los angulos uno a uno
 * Dato de Salida:
 */

#include <iostream>
#include <iomanip>
using namespace std;

void sumar(int g1, int m1, int s1, int g2, int m2, int s2, int &g3, int &m3, int &s3);

int main()
{
  int n;

  do{
    cout << "Numero de angulos [mayor a 3] : ";
    cin >> n;
  }while(n<=3);
  //-------------------------
  int grados=0, minutos=0, segundos=0;
  int g, m, s;

  cout <<"\n\n";
  cout <<"Suma: " << setw(5) << grados << setw(5) << minutos << setw(5) << segundos << "\n";
  for(int i=0; i<n; i++)
  {
    cout << "\n";
    cout << "Ingrese angulo " << i + 1 << "   gg mm ss : ";
    cin >> g; cin >> m; cin>>s;
    cout << "\n\n";
    cout <<"Suma: " << setw(5) << grados << setw(5) << minutos << setw(5) << segundos << "\n";
    cout <<"Suma: " << setw(5) << g << setw(5) << m << setw(5) << s << "\n";
    sumar(grados, minutos, segundos,g,m,s, grados, minutos, segundos);
    cout << "_______________________________\n";
    cout <<"Suma: " << setw(5) << grados << setw(5) << minutos << setw(5) << segundos << "\n";
  }
  return 0;
}

void sumar(int g1, int m1, int s1, int g2, int m2, int s2, int &g3, int &m3, int &s3)
{ int lleva;
  s3 = (s1 + s2) % 60;
  lleva = (s1 + s2) / 60;
  m3 = (lleva + m1 + m2) % 60;
  lleva = (lleva + m1 + m2) / 60;
  g3 = g1 + g2+ lleva;
}