
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_4(int n) {
  int x=1;
	cin>>n;
	if(n<0)
	{
		cout<<"El numero es negativo. Intentelo de nuevo\n";
	}
	else if(n>14)
	{
		cout<<"El numero es muy grande. Intentelo de nuevo\n";
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
		x=x*(i);
		}
	cout<<x<<"\n";
	}
} 
void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  int res, sum = 0;
  while (n != 0){
    res = n % 10;
    sum = res + sum;
    n = n / 10;
  }
  return sum;
}

void exercise_7(int n) {
	double acum=0,op;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		op=(pow(-1,i+1))/i;
		acum=acum+op;
	}
	cout<<acum<<"\n";
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  int mcm=1;
	cin>>a>>b;
	for(int n=1;n<=a;n++)
	{
		if((a%n==0)and(b%n==0))
		{
			mcm=n;
		}
	}
	return mcm;
}

void exercise_11() {
  float U=1;
	for(int n=0;n<=10;n++)
	{
		cout<<"U"<<n<<" = "<<U<<endl;
		U=U/(n+1);
	}
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  {
	int N,k,suma,aux=0;
	cin>>N>>k;
	for(int numero=1;numero<=N;numero++)
	{
		suma=pow(numero,k);
		aux=aux+suma;
	}
	cout<<aux;

	return 0;
}
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE                     
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}