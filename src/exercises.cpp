
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
	string espacio1;
    switch(n){
        case 1:
            espacio1 =  " "s;
            break;
        case 2:
            espacio1 =  "  "s;
            break;
        case 3:
            espacio1 =  "     "s;
            break;
        case 4:
            espacio1 =  "        "s;
            break;
        case 5:
            espacio1 =  "           "s;
            break;
        case 6:
            espacio1 =  "              "s;
            break;
        case 7:
            espacio1 =  "                 "s;
            break;
    }
    
    string _i;
    for(int i = 1; i<=k; ++i){
        int s = 20;
        int r = 0;
        while(r<=14){
            if(espacio1.size()== s+(s*r) + r){
                espacio1= espacio1 + '\n';
                break;
            }
            ++r;
        }
        if(n==1 && espacio1.size()==1){
            espacio1 = espacio1 + to_string(i);
        }
        else if(to_string(i).size()==1 && espacio1[espacio1.size()-1]!='\n'){
            _i = "  " + to_string(i);
            espacio1 = espacio1 + _i;
        }else if(to_string(i).size()==1 && espacio1[espacio1.size()-1]=='\n'){
            _i = " " + to_string(i);
            espacio1 = espacio1 + _i;
        
        }else if(to_string(i).size()==2 && espacio1[espacio1.size()-1]!='\n'){
            _i = " " + to_string(i);
            espacio1 = espacio1 + _i;
        }else if(to_string(i).size()==2 && espacio1[espacio1.size()-1]=='\n'){
            espacio1 = espacio1 + to_string(i);
        }
        
    }
    cout << espacio1 << " " << endl;
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
  int mcm=1,nm;
	cin>>a>>b;
  nm=a;
  if(b<a)
  {
    nm=b;
  }
	for(int n=1;n<=nm;n++)
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
  float U=1;
	int V=0;
	for(int n=1;n<=10;n++)
	{
		V=V+U;
		cout<<"U"<<n<<" = "<<U<<" V"<<n<<" = "<<V<<endl;
		U=U/(n+1);
	}
}

long exercise_13(int n, int k) {
	long suma,aux=0;
	cin>>n>>k;
	for(int numero=1;numero<=n;numero++)
	{
		suma=pow(numero,k);
		aux=aux+suma;
	}
	return aux;
}
	


string exercise_14(int n) {
  string s = to_string(n);
  string reversed;
  for(int i = s.size() - 1; i >= 0; --i){
    reversed +=s[i];
  }
  if(reversed == s){
    return "Es palindrome";
  } else {
    return "No es palindrome";   
  }
}
  

void exercise_15(int decimal) {	
	cin>>decimal;
	int res,mult=1,aux=0;
	while(decimal!=0)
	{
		res=decimal%2;
		res=res*mult;
		mult=mult*10;
		decimal=decimal/2;
		aux=aux+res;	
	}	
	cout<<aux<<"\n";
}
	

void exercise_16(int divident, int divider) {
                    
}           

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}