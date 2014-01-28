#include <iostream>
#include <cmath>
#include "BigInt.h"

using namespace std;

BigInt randomPrime(int size); //Generates a prime number with 'size' digits
BigInt* euclideanAlgorithm(BigInt a, BigInt b); //Outputs a 2 element array with elements (x,y) such that gcd(a,b) = ax+by and y>0
BigInt* modInverse(BigInt e, BigInt p, BigInt q); //Outputs a 2 element array with elements (d,n) such that ed=1%(p-1)(q-1), n=pq
string rsaEncrypt(BigInt e, BigInt n, string message); //Outputs the RSA Encrypted message
string rsaDecrypt(BigInt d, BigInt n, string eMessage); //Decrypts and outputs the encrypted message

int main(int argc, char *argv[])
{
    if(argc == 1 || argc > 5)
    {
        cout << "Wrong input format!" << 0;
    }
    else if(argc == 2)
    {
        int size = atoi(argv[1]);
        cout << "Size of your prime number: " << size << endl;
        cout << "Your prime number is: " << randomPrime(size) << endl;
    }
    else if(argc == 3)
    {
        BigInt a = atoi(argv[1]);
        BigInt b = atoi(argv[2]);
        cout << "a = " << a << ", b = " << b << endl;
        BigInt* euclidean = euclideanAlgorithm(a,b);
        cout << "x = " << euclidean[0] << ", y = " << euclidean[1] << endl;
        delete [] euclidean;
    }
    else if(argc == 4)
    {
        BigInt e = atoi(argv[1]);
        BigInt p = atoi(argv[2]);
        BigInt q = atoi(argv[3]);
        cout << "e = " << e << ", p = " << p <<", q = "<< q << endl;
        BigInt* mods = modInverse(e, p, q);
        cout << "d = " << mods[0] << ", n = " << mods[1] << endl;
    }
    else if(argc == 5)
    {
        if(argv[1][0] == 'e')
        {
            BigInt e = atoi(argv[2]);
            BigInt n = atoi(argv[3]);
            string message = argv[4];
            cout << "e = " << e << ", n = " << n <<", message = \""<< message << "\"" << endl;
            string encrypted = rsaEncrypt(e, n, message);
            cout << "The encrypted message is: " << encrypted << endl;
        }
        else if(argv[1][0]=='d')
        {
            BigInt d = atoi(argv[2]);
            BigInt n = atoi(argv[3]);
            string message = argv[4];
            cout << "d = " << d << ", n = " << n <<", message = \""<< message << "\"" << endl;
            string decrypted = rsaDecrypt(d, n, message);
            cout << "The decrypted message is: " << decrypted << endl;
        }
    }
    
    return 0;
}

BigInt randomPrime(int size)
{
	return 42;
}

BigInt* euclideanAlgorithm(BigInt a, BigInt b)
{
	BigInt* test = new BigInt[2];
	test[0] = 42;
	test[1] = 42;
	return test;
}

BigInt* modInverse(BigInt e, BigInt p, BigInt q)
{
    BigInt* test = new BigInt[2];
	test[0] = 42;
	test[1] = 42;
	return test;
}

string rsaEncrypt(BigInt e, BigInt n, string message)
{
    return "321gnitset";
}

string rsaDecrypt(BigInt d, BigInt n, string eMessage)
{
    return "testing123";
}