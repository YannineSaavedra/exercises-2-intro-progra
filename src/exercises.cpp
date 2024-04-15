
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
    int s_size=s.size();
    string s_2;
    for(int i=0;s_size-1>=i ; ++i){

        char s_letter = s[i];
        if(s_letter!=' '){
            s_2 = s_2 + s_letter;
        }
    }
    bool esPalindromo = true;
    int n = s_2.size();

    for (int i = 0; i < n / 2; ++i) {
        if (s_2[i] != s_2[n - 1 - i]) {
            esPalindromo = false;
            break;
        }
    }

    if(esPalindromo) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }

}


void exercise_9(string s) {
  int f=0;
int contador=0;
  for (int i=1; i<s.size();i++){
    switch (s[i]) {
        case'f': f++;
    }
   }
   if(f <= 0){
      cout << "-2" <<endl;
   }
   else if (f == 1){
      cout << "-1"<<endl; 
   }
   else if (f == 2){
      for (int i=0; i<s.size();++i){
        if(s[i] == 'f'){
          contador=i;
          }
        }
    cout << contador<<endl; 
   }
}

int exercise_10(int a, int b) {
if (a>0 && b> 0 && a!=b){
  if(a>b){
    int aux = a;
    a=b;
    b=aux;
    }
    int i=a;
    while (i>=1){
      if (a % i == 0 && b % i == 0){
        return i;
        break;
        }
        else{
          i -= 1;
    } 
  }
 }
 else{   
     if (a>b){
        return a; 
     }
     else if (a<b){
        return b; 
     }
 }
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
 if (divider == 0){
    cout << "";
    } 
  else{
    int res = 0;
    int cosi = 0;
    cosi = divident/divider;
    res = divident%divider;
    cout << cosi << " ";
    cout << res << endl;
    }                   
}           

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  if(fin>=debut){
    if(debut>0 && fin>0){

        for(debut; debut<=fin; ++debut){
            int i = 0;
            int debut1= debut;
            while(debut1!=0){
                if(debut1%3 == 0){
                    debut1 += 4;
                    ++i;
                    
                }else if(debut1%4==0){
                    debut1 /=2;
                    ++i;
                    
                }else{
                    --debut1;
                    ++i;
                    
                }
            }
            cout << debut << "->" << i << endl;
        }
    }else{
            cout << "El numero debe de ser positivo y mayor a zero" << endl;
        }
    }else{
        cout << "El numero de fin no debe de ser menor al inicial" << endl;
    
    }
}
