#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Rossz valtozo nev a tomb elemszamaiban
    std::cout << '1-100 ertekek duplazasa' //Nincsen sortores
    for (int i = 0;) //Befejezetlen itaracio
    {
        b[i] = i * 2; //Ez esetben 0-99-ig duplazza az ertekeket
    }
    for (int i = 0; i; i++) //Nincsen feltetel az iteracio kileptetesere
    {
        std::cout << "Ertek:" //Nem iratunk ki ertekeket
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //Nincsen kezdo ertek
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //Pontosvesszo hianya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
