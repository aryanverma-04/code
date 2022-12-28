#include <bits/stdc++.h>
using namespace std;
int main()
{
	// Two random prime numbers
	double p = 3;
	double q = 11;

	// First part of public key:
	double n = p * q;

	// Finding other part of public key.
	// e stands for encrypt
	double e = 3;

	int k = 2; // A constant value
	double d = 7;

	// Message to be encrypted
	double msg = 19;
    printf("\nName: Aryan verma, Uid: 20bcs3651\n");
	printf("Message data = %lf", msg);

	// Encryption c = (msg ^ e) % n
	double c = pow(msg, e);
	c = fmod(c, n);
	printf("\nEncrypted data = %lf", c);

	// Decryption m = (c ^ d) % n

	double m = pow(c, d);
	m = fmod(m, n);
	printf("\nOriginal Message Sent = %lf", m);

	return 0;
}
// This code is contributed by Akash Sharan.
