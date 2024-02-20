#include <gui/screengreutate_screen/ScreenGreutateView.hpp>
#include "C:\Users\Stan11s\Desktop\Calculator\STM32CubeIDE\Application\User\gui\ScreenData.h"
#include <cstdlib>  // Include this for std::atoi
#include <cstdio>   // Include this for sprintf
#include <cstring>
#include <cmath>
ScreenGreutateView::ScreenGreutateView()
{

}

void ScreenGreutateView::setupScreen()
{
	memset(Buffer, 0, 10 * sizeof(Buffer[0]));
	memset(Buffer1, 0, 10 * sizeof(Buffer1[0]));
    ScreenGreutateViewBase::setupScreen();
    touchgfx::Unicode::strncpy(textAreaMarimeBuffer, ScreenData::getInstance().buffer1, 32);
   	touchgfx::Unicode::strncpy(textAreaMarime_2Buffer, ScreenData::getInstance().buffer2, 32);
   	// Alte operații cu buffer-ul dacă este necesar
   	textAreaMarime.invalidate();
   	textAreaMarime_2.invalidate();
}

void ScreenGreutateView::tearDownScreen()
{
    ScreenGreutateViewBase::tearDownScreen();
}
void ScreenGreutateView::fncCearBuffer()
{
	touchgfx::Unicode::strncpy(ScreenData::getInstance().buffer1, "Alege", 32);
	touchgfx::Unicode::strncpy(ScreenData::getInstance().buffer2, "Alege", 32);
}
void ScreenGreutateView::fncNumber1()
{
addToBuffer("1");
fncResult();
}
void ScreenGreutateView::fncNumber2(){
	{addToBuffer("2");
	fncResult();}
}
void ScreenGreutateView::fncNumber3(){
	{addToBuffer("3");
	fncResult();}
}
void ScreenGreutateView::fncNumber4(){
	{addToBuffer("4");
	fncResult();}
}
void ScreenGreutateView::fncNumber5(){
	{addToBuffer("5");
	fncResult();}
}
void ScreenGreutateView::fncNumber6(){
	{addToBuffer("6");
	fncResult();}
}
void ScreenGreutateView::fncNumber7(){
	{addToBuffer("7");
	fncResult();}
}
void ScreenGreutateView::fncNumber8(){
	{addToBuffer("8");
	fncResult();}
}
void ScreenGreutateView::fncNumber9(){
	{addToBuffer("9");
	fncResult();}
}
void ScreenGreutateView::fncNumber0(){
	{addToBuffer("0");
	fncResult();}
}
void ScreenGreutateView::addToBuffer(const char* num)
{
    if (Condition)
    {
        if (!decimalAdded) {
            // Check if the current operand contains a decimal point
            const char* decimalPointPos = strchr(Buffer, '.');
            if (decimalPointPos == nullptr) {
                strcat(Buffer, num);
            }
        } else {
            strcat(Buffer, num);
        }
    }
    else
    {
        if (!decimalAdded) {
            // Check if the current operand contains a decimal point
            const char* decimalPointPos = strchr(Buffer1, '.');
            if (decimalPointPos == nullptr) {
                strcat(Buffer1, num);
            }
        } else {
            strcat(Buffer1, num);
        }
    }

    Unicode::strncpy(textArea1Buffer, Condition ? Buffer : Buffer1, TEXTAREA1_SIZE);
    textArea1.invalidate();
}

void ScreenGreutateView::fncDelete()
{
    if (Condition)
    {
        size_t len = strlen(Buffer);
        if (len > 0)
        {
            if (Buffer[len - 1] == '.') {
                // Reset the decimalAdded flag when deleting the decimal point
                decimalAdded = false;
            }
            Buffer[len - 1] = '\0'; // Elimină ultimul caracter
        }
    }
    else
    {
        size_t len = strlen(Buffer1);
        if (len > 0)
        {
            if (Buffer1[len - 1] == '.') {
                // Reset the decimalAdded flag when deleting the decimal point
                decimalAdded = false;
            }
            Buffer1[len - 1] = '\0'; // Elimină ultimul caracter
        }
    }
    fncResult();
    Unicode::strncpy(textArea1Buffer, Condition ? Buffer : Buffer1, TEXTAREA1_SIZE);
    textArea1.invalidate();
}

void ScreenGreutateView::fncClear()
{
	Condition = true;
	Unicode::strncpy(textArea1Buffer, "0", TEXTAREA1_SIZE);
	Unicode::strncpy(textArea2Buffer, "0", TEXTAREA2_SIZE);
	textArea2.invalidate();
	textArea1.invalidate();
	memset(Buffer, 0, 10 * sizeof(Buffer[0]));
	memset(Buffer1, 0, 10 * sizeof(Buffer1[0]));

	// Reset the decimalAdded flag
	decimalAdded = false;
}
void ScreenGreutateView::fncResult()
{
    // Presupunem că Buffer conține greutatea în miligrame
    double weightMilligrams = std::atof(Buffer);

    // Factor de conversie pentru selectedRadioIndex1
    double conversionFactor1 = 1.0;

    // Setăm factorul de conversie pentru selectedRadioIndex1
    switch (ScreenData::getInstance().selectedRadioIndex1) {
        case 1:
            // miligrame nu necesită transformare, rămâne 1.0
            break;
        case 2:
            // grame la miligrame
            conversionFactor1 = 1000.0;
            break;
        case 3:
            // kilograme la miligrame
            conversionFactor1 = 1000000.0;
            break;
        case 4:
            // tone la miligrame
            conversionFactor1 = 1000000000.0;
            break;
        default:
            // Opțiune neașteptată, alege un factor implicit
            break;
    }

    // Aplicăm factorul de conversie pentru selectedRadioIndex1
    double result1 = weightMilligrams * conversionFactor1;

    // Factor de conversie pentru selectedRadioIndex2
    double conversionFactor2 = 1.0;

    // Setăm factorul de conversie pentru selectedRadioIndex2
    switch (ScreenData::getInstance().selectedRadioIndex2) {
        case 1:
            // miligrame nu necesită transformare, rămâne 1.0
            break;
        case 2:
            // grame la miligrame
            conversionFactor2 = 0.001;
            break;
        case 3:
            // kilograme la miligrame
            conversionFactor2 = 0.000001;
            break;
        case 4:
            // tone la miligrame
            conversionFactor2 = 0.000000001;
            break;
        default:
            // Opțiune neașteptată, alege un factor implicit
            break;
    }

    // Aplicăm factorul de conversie pentru selectedRadioIndex2
    double result2 = result1 * conversionFactor2;

    int decimals = 9;  // Numărul de zecimale dorite

    int intPart = static_cast<int>(result2);
    double fractionPart = result2 - intPart;

    if (fractionPart == 0.0 || decimals <= 0) {
        // Dacă nu există parte fracționară sau nu sunt necesare zecimale, afișăm doar partea întreagă
        Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", intPart);
    } else {
        // Afișăm numărul cu zecimalele dorite
        Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d.%0*d", intPart, decimals, static_cast<int>(fractionPart * pow(10, decimals)));
    }


    // Invalidăm zona de afișare corespunzătoare
    textArea2.invalidate();
}
void ScreenGreutateView::fncPoint()
   {
	 if (!decimalAdded) {
	        addToBuffer(".");
	        decimalAdded = true;
	    }
   }
