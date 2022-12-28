// RSA is an asymmetric cryptography algorithm which works on two keys-public key and private key.


// Begin
//    1. Choose two prime numbers p and q.
//    2. Compute n = p*q.
//    3. Calculate phi = (p-1) * (q-1).
//    4. Choose an integer e such that 1 < e < phi(n) and gcd(e, phi(n)) = 1; i.e., e and phi(n) are coprime.
//    5. Calculate d as d ≡ e−1 (mod phi(n)); here, d is the modular multiplicative inverse of e modulo phi(n).
//    6. For encryption, c = me mod n, where m = original message.
//    7. For decryption, m = c d mod n.
// End

// The RSA algorithm (Rivest-Shamir-Adleman) is the basis of a cryptosystem -- a suite of cryptographic algorithms that are used for specific security services or purposes -- which enables public key encryption and is widely used to secure sensitive data, particularly when it is being sent over an insecure network 

// How works RSA?
// An RSA user creates and publishes a public key based on two large prime numbers, along with an auxiliary value. The prime numbers are kept secret. Messages can be encrypted by anyone, via the public key, but can only be decoded by someone who knows the prime numbers.
// RSA is the standard cryptographic algorithm on the Internet. The method is publicly known but extremely hard to crack. It uses two keys for encryption. The public key is open and the client uses it to encrypt a random session key.
// 

// RSA algorithm is an asymmetric cryptography algorithm. Asymmetric actually means that it works on two different keys i.e. Public Key and Private Key. As the name describes that the Public Key is given to everyone and the Private key is kept private.

// An example of asymmetric cryptography : 

// A client (for example browser) sends its public key to the server and requests some data.
// The server encrypts the data using the client’s public key and sends the encrypted data.
// The client receives this data and decrypts it.
// Since this is asymmetric, nobody else except the browser can decrypt the data even if a third party has the public key of the browser.

// The idea! The idea of RSA is based on the fact that it is difficult to factorize a large integer. The public key consists of two numbers where one number is a multiplication of two large prime numbers. And private key is also derived from the same two prime numbers. So if somebody can factorize the large number, the private key is compromised. Therefore encryption strength totally lies on the key size and if we double or triple the key size, the strength of encryption increases exponentially. RSA keys can be typically 1024 or 2048 bits long, but experts believe that 1024-bit keys could be broken in the near future. But till now it seems to be an infeasible task.


#include<iostream>
#include<math.h>
using namespace std;

int main() {
   //2 random prime numbers
   double p = 13;
   double q = 11;
   double n=p*q;//calculate n
   double track;
   double phi= (p-1)*(q-1);//calculate phi
   //public key
   //e stands for encrypt
   double e=7;
   //for checking that 1 < e < phi(n) and gcd(e, phi(n)) = 1; i.e., e and phi(n) are coprime.
   while(e<phi) {
      track = gcd(e,phi);
      if(track==1)
         break;
      else
         e++;
   }
   //private key
   //d stands for decrypt
   //choosing d such that it satisfies d*e = 1 mod phi
   double d1=1/e;
   double d=fmod(d1,phi);
   double message = 9;
   double c = pow(message,e); //encrypt the message
   double m = pow(c,d);
   c=fmod(c,n);
   m=fmod(m,n);
   cout<<"Original Message = "<<message;
   cout<<"
"<<"p = "<<p;
   cout<<"
"<<"q = "<<q;
   cout<<"
"<<"n = pq = "<<n;
   cout<<"
"<<"phi = "<<phi;
   cout<<"
"<<"e = "<<e;
   cout<<"
"<<"d = "<<d;
   cout<<"
"<<"Encrypted message = "<<c;
   cout<<"
"<<"Decrypted message = "<<m;
   return 0;
}