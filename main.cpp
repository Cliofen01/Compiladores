#include <cstdlib>
#include <iostream>
#include <string.h>
#include <studio>
using namespace std;

int main()
{
    string cadena;
    char n[]={'0','1','2','3','4','5','6','7','8','9'};
    char c[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char esp = ' ';
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    int total = 0;
    int orden[25];
    for (int cont = 0; cont<26;cont++)
    {
        orden[cont] = 0;    
    }
    cout<<"Introduzca algo: ";
    cin>>cadena;
    cout<<cadena<<"\n";

    for(int i = 0;i<=cadena.length();i++)
    {
		var1 = 0;
    	while (var1<26)
    	{
    		if(cadena[i] == c[var1])
    		{
	    		cout<<cadena[i]<<" es una letra\n";
	    		orden[var1]++;
				break;
			}
			else
			{
				var1++;
			}
			
		}
		
		var2 = 0;
		
		while (var2<10&&var1!=27)
    	{
            
    		if(cadena[i] == n[var2])
    		{
	    		cout<<cadena[i]<<" es un numero\n";
	    		total = total + cadena[i]-'0'; 
				break;
			}
			else
			{
				var2++;	
			}
			
		}
		
	}
    cout<<"El total de la suma de los numeros es = "<<total<<"\n\n";
    
    for(int cont1 = 0;cont1<26;cont1++)
    {
        while(orden[cont1]>0)
        {
             cout<<c[cont1]<<"\n";    
             orden[cont1] = orden[cont1] - 1;  
         }
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
