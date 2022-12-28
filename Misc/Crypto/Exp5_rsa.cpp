#include <iostream>
#include <math.h>
using namespace std;
// find gcd
int gcd(int a, int b)
{
     if (b == 0)
          return a;
     return gcd(b, a % b);
}

int main()
{
     // 2 random prime numbers
     double p = 3;
     double q = 11;
     double n = p * q; // calculate n
     double phi = (p - 1) * (q - 1); // calculate phi
     double e = 3;
     double track;
     while (e < phi)
     {
          track = gcd(e, phi);
          if (track == 1)
               break;
          else
               e++;
     }
     // double d1 = 1 / e;
     double d = 7;
     double message = 9;

     double c = pow(message, e); // encrypt the message
     double m = pow(c, d);

     c = fmod(c, n);
     m = fmod(m, n);
      cout << "Original Message = " << message;cout << endl;
     cout << " "<< "p = " << p;cout << endl;
     cout << " "<< "q = " << q;cout << endl;
     cout << " "<< "n = pq = " << n;cout << endl;
     cout << " "<< "phi = " << phi;cout << endl;
     cout << " "<< "e = " << e;cout << endl;
     cout << " "<< "d = " << d;cout << endl;
     cout << " "<< "Encrypted message = " << c;
     cout << " "<< "\nDecrypted message = " << m;
     return 0;
}