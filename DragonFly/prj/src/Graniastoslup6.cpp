#include "Graniastoslup6.hh"

/*!
 * \file 
 * \brief Definicje metod i funkcji pomocniczych klasy Graniastoslup6
 *
 *  Plik zawiera definicje metod i funkcji pomocniczych klasy Graniastoslup6.
 */

/*!
*  Konstruktor Domyślny klasy Graniastoslup6
*/
/*Graniastoslup6::Graniastoslup6() : Polozenie(), BrylaGeometryczna()
{
}*/
/*!
*  Konstruktor parametryczny z wartościami domyślnymi klasy Graniastoslup6
*/
Graniastoslup6::Graniastoslup6(const std::string & s1 , const std::string & s2 ,
                const Wektor3D & SkalaBrylaTym , const Wektor3D & PolozenieGrTym , double KatPocz ) : BrylaGeometryczna(s1,s2,SkalaBrylaTym),
                 Polozenie(PolozenieGrTym), KatOrientacji_stopnie(KatPocz)
{} 

/*!
* Dla przypadku, gdy graniastoslup modeluje rotor drona, to ta transformacja realizuje przejście 
* od współrzędnych z układu lokalnego bryły do układu lokalnego drona
* 
* \param[in] Wierz - stała referencja do obiektu klasy Wektor3D, który zawiera informacje 
* o 3 współrzędnych: x, y i z - Wierzchołka transformowanego..
* 
* \return Zwraca przetransformowany Wierzchołek z układu lokalnego bryły do układu lokalnego drona.
*/
Wektor3D Graniastoslup6::TransfDoUklWspRodzica(const Wektor3D& Wierz) const
{
    Wektor3D Wktr3DTransakcji = Wierz + Polozenie;
    return Wktr3DTransakcji;
}