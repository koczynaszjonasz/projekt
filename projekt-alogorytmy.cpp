#include <iostream>
#include<fstream>

using namespace std;
int *A,dane,g,i,w=0;


void podciag()
{
	fstream plik;
    plik.open("podciagi.txt", ios::out);
	
	cout<<"Prosze podac  ilosc danych "; //podanie dlugosci ciagu liczb
	cin>>dane;

    A=new int[dane];        //stworzenie tablicy dynamicznej

    for(i=0; i<dane;i++)    //wpisanie danych do tablicy dynamicznej
    {
        A[i-1]=g;
        cout<<"Prosze podac kolejna liczbe ciagu ";
        cin>>g;
    }
    A[i-1]=g;               //bez tego program wpisywal zamiast ostatniej liczby -1


    for(i=0; i<dane;i++)
    {
    while(A[i]>A[i+1] and i+1<dane)
        {w++;
        i++;}
    }
    cout<<"Liczba wszystkich podciagow malejacych to "<<w<<endl; //policzenie liczby podci¹gów
    plik<<"Liczba wszystkich podciagow malejacych to = "<<w<<endl;


    for(i=0; i<dane;i++)
    {
    	while(A[i]>A[i+1] and i+1<dane) // drugi warunek po to zeby nie porownywalo ostatniej liczby z zerem
 		{
    	cout<<"["<<A[i]<<" "<<A[i+1]<<"]"<<"  ";  //wypisanie podciagow
    	plik<<"["<<A[i]<<" "<<A[i+1]<<"]"<<"  ";
    	i++;
 		}
    }
    plik.close();
}

int main()
{  
	podciag();
	return 0;
	delete [] A;

}

