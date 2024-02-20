#include <gui/screenviteza_screen/ScreenVitezaView.hpp>
#include "C:\Users\Stan11s\Desktop\Calculator\STM32CubeIDE\Application\User\gui\ScreenData.h"
#include <cstdlib>  // Include this for std::atoi
#include <cstdio>   // Include this for sprintf
#include <cstring>
#include <cmath>
ScreenVitezaView::ScreenVitezaView()
{

}

void ScreenVitezaView::setupScreen()
{
		memset(Buffer, 0, 10 * sizeof(Buffer[0]));
	    memset(Buffer1, 0, 10 * sizeof(Buffer1[0]));
		ScreenVitezaViewBase::setupScreen();
		touchgfx::Unicode::strncpy(textAreaMarimeBuffer, ScreenData::getInstance().buffer1, 32);
        touchgfx::Unicode::strncpy(textAreaMarime_2Buffer, ScreenData::getInstance().buffer2, 32);
        // Alte operații cu buffer-ul dacă este necesar
        textAreaMarime.invalidate();
        textAreaMarime_2.invalidate();
}

void ScreenVitezaView::tearDownScreen()
{
    ScreenVitezaViewBase::tearDownScreen();

}
void ScreenVitezaView::fncClearBuffer()
{
	touchgfx::Unicode::strncpy(ScreenData::getInstance().buffer1, "Alege", 32);
	touchgfx::Unicode::strncpy(ScreenData::getInstance().buffer2, "Alege", 32);
}
void ScreenVitezaView::fncNumber1()
{
addToBuffer("1");
fncResult();
}
void ScreenVitezaView::fncNumber2(){
	{addToBuffer("2");
	fncResult();}
}
void ScreenVitezaView::fncNumber3(){
	{addToBuffer("3");
	fncResult();}
}
void ScreenVitezaView::fncNumber4(){
	{addToBuffer("4");
	fncResult();}
}
void ScreenVitezaView::fncNumber5(){
	{addToBuffer("5");
	fncResult();}
}
void ScreenVitezaView::fncNumber6(){
	{addToBuffer("6");
	fncResult();}
}
void ScreenVitezaView::fncNumber7(){
	{addToBuffer("7");
	fncResult();}
}
void ScreenVitezaView::fncNumber8(){
	{addToBuffer("8");
	fncResult();}
}
void ScreenVitezaView::fncNumber9(){
	{addToBuffer("9");
	fncResult();}
}
void ScreenVitezaView::fncNumber0(){
	{addToBuffer("0");
	fncResult();}
}
void ScreenVitezaView::addToBuffer(const char* num)
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
void ScreenVitezaView::fncResult()
{
    // Presupunem că Buffer conține viteza în cm/s
    float velocityCms = std::atof(Buffer);

    // Factor de conversie pentru selectedRadioIndex1
    float conversionFactor1 = 1.0f;

    // Setăm factorul de conversie pentru selectedRadioIndex1
    switch (ScreenData::getInstance().selectedRadioIndex1) {
        case 1:
            // cm/s la m/s
            conversionFactor1 = 1.0f / 100.0f;
            break;
        case 3:
            // km/h la m/s
            conversionFactor1 = 1.0f / 3.6f;
            break;
        case 2:
            // m/s nu necesită transformare, rămâne 1.0f
            break;
        default:
            // Opțiune neașteptată, alege un factor implicit
            break;
    }

    // Aplicăm factorul de conversie pentru selectedRadioIndex1
    float result1 = velocityCms * conversionFactor1;

    // Factor de conversie pentru selectedRadioIndex2
    float conversionFactor2 = 1.0f;

    // Setăm factorul de conversie pentru selectedRadioIndex2
    switch (ScreenData::getInstance().selectedRadioIndex2) {
        case 1:
            // m/s la cm/s
            conversionFactor2 = 100.0f;
            break;
        case 3:
            // m/s la km/h
            conversionFactor2 = 3.6f;
            break;
        case 2:
            // Nu este nevoie să transformăm, pentru că deja avem m/s
            break;
        default:
            // Opțiune neașteptată, alege un factor implicit
            break;
    }

    // Aplicăm factorul de conversie pentru selectedRadioIndex2
    float result2 = result1 * conversionFactor2;

    // Actualizăm variabila globală în ScreenData
    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d.%02d", static_cast<int>(result2), static_cast<int>((result2 - static_cast<int>(result2)) * 100));

    // Invalidăm zona de afișare corespunzătoare
    textArea2.invalidate();
}

void ScreenVitezaView::fncDelete()
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

void ScreenVitezaView::fncClear()
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
void ScreenVitezaView::fncPoint()
   {
	 if (!decimalAdded) {
	        addToBuffer(".");
	        decimalAdded = true;
	    }
   }
