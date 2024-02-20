#include <gui/screentimp_screen/ScreenTimpView.hpp>
#include "C:\Users\Stan11s\Desktop\Calculator\STM32CubeIDE\Application\User\gui\ScreenData.h"


#include <cstdlib>  // Include this for std::atoi
#include <cstdio>   // Include this for sprintf
#include <cstring>
#include <cmath>
#include <stdio.h>
ScreenTimpView::ScreenTimpView()
{

}

void ScreenTimpView::setupScreen()
{
	memset(Buffer, 0, 10 * sizeof(Buffer[0]));
	memset(Buffer1, 0, 10 * sizeof(Buffer1[0]));
    ScreenTimpViewBase::setupScreen();
    touchgfx::Unicode::strncpy(textAreaMarimeBuffer, ScreenData::getInstance().buffer1, 32);
	touchgfx::Unicode::strncpy(textAreaMarime_2Buffer, ScreenData::getInstance().buffer2, 32);
	// Alte operații cu buffer-ul dacă este necesar
	textAreaMarime.invalidate();
	textAreaMarime_2.invalidate();
}
void ScreenTimpView::fncCearBuffer()
{
	touchgfx::Unicode::strncpy(ScreenData::getInstance().buffer1, "Alege", 32);
    touchgfx::Unicode::strncpy(ScreenData::getInstance().buffer2, "Alege", 32);
}
void ScreenTimpView::tearDownScreen()
{
    ScreenTimpViewBase::tearDownScreen();
}
void ScreenTimpView::fncNumber1()
{
addToBuffer("1");
fncResult();
}
void ScreenTimpView::fncNumber2(){
	{addToBuffer("2");fncResult();
	}
}
void ScreenTimpView::fncNumber3(){
	{addToBuffer("3");fncResult();
	}
}
void ScreenTimpView::fncNumber4(){
	{addToBuffer("4");fncResult();
	}
}
void ScreenTimpView::fncNumber5(){
	{addToBuffer("5");fncResult();
	}
}
void ScreenTimpView::fncNumber6(){
	{addToBuffer("6");fncResult();
	}
}
void ScreenTimpView::fncNumber7(){
	{addToBuffer("7");fncResult();
	}
}
void ScreenTimpView::fncNumber8(){
	{addToBuffer("8");fncResult();
	}
}
void ScreenTimpView::fncNumber9(){
	{addToBuffer("9");fncResult();
	}
}
void ScreenTimpView::fncNumber0(){
	{addToBuffer("0");fncResult();
	}
}
void ScreenTimpView::addToBuffer(const char* num)
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
void ScreenTimpView::fncDelete()
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

void ScreenTimpView::fncClear()
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
void ScreenTimpView::fncResult()
{
	// Presupunem că Buffer conține timpul în milisecunde
	    double timeMillis = std::atof(Buffer);

	    // Factor de conversie pentru selectedRadioIndex1
	    double conversionFactor1 = 1.0;

    // Setăm factorul de conversie pentru selectedRadioIndex1
    switch (ScreenData::getInstance().selectedRadioIndex1) {
        case 1:
            // milisecunde la secunde
            conversionFactor1 = 1.0f / 1000.0f;
            break;
        case 2:
            // secunde nu necesită transformare, rămâne 1.0f
            break;
        case 3:
            // minute la secunde
            conversionFactor1 = 60.0f;
            break;
        case 4:
            // ore la secunde
            conversionFactor1 = 3600.0f;
            break;
        case 5:
            // zile la secunde
            conversionFactor1 = 86400.0f;
            break;
        case 6:
            // săptămâni la secunde
            conversionFactor1 = 604800.0f;
            break;
        case 7:
            // ani la secunde (aproximare simplificată)
            conversionFactor1 = 31536000.0f;
            break;
        default:
            // Opțiune neașteptată, alege un factor implicit
            break;
    }

    // Aplicăm factorul de conversie pentru selectedRadioIndex1
        double result1 = timeMillis * conversionFactor1;

        // Factor de conversie pentru selectedRadioIndex2
        double conversionFactor2 = 1.0;

    // Setăm factorul de conversie pentru selectedRadioIndex2
    switch (ScreenData::getInstance().selectedRadioIndex2) {
        case 1:
            // secunde la milisecunde
            conversionFactor2 = 1000.0f;
            break;
        case 2:
            // secunde nu necesită transformare, rămâne 1.0f
            break;
        case 3:
            // secunde la minute
            conversionFactor2 = 1.0f / 60.0f;
            break;
        case 4:
            // secunde la ore
            conversionFactor2 = 1.0f / 3600.0f;
            break;
        case 5:
            // secunde la zile
            conversionFactor2 = 1.0f / 86400.0f;
            break;
        case 6:
            // secunde la săptămâni
            conversionFactor2 = 1.0f / 604800.0f;
            break;
        case 7:
            // secunde la ani (aproximare simplificată)
            conversionFactor2 = 1.0f / 31536000.0f;
            break;
        default:
            // Opțiune neașteptată, alege un factor implicit
            break;
    }

    // Aplicăm factorul de conversie pentru selectedRadioIndex2
      double result2 = result1 * conversionFactor2;

      // Verificăm dacă avem parte fracționară
      int decimals = 9;  // Numărul de zecimale dorite


      if (result2 == static_cast<int>(result2)) {
             // Dacă nu există parte fracționară, afișăm doar partea întreagă
             Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", static_cast<int>(result2));
         } else {
           // Dacă avem parte fracționară, determinăm numărul de zerouri consecutive
           int countZeros = 0;
           float fraction = result2 - static_cast<int>(result2);

           while (countZeros < decimals && fraction > 0.0f && fraction < 1.0f) {
               fraction *= 10.0f;
               if (static_cast<int>(fraction) == 0) {
                   countZeros++;
               } else {
                   break;
               }
           }

           // Afișăm doar partea întreagă dacă avem 4 sau mai multe zerouri consecutive
           if (countZeros >= 4 && ScreenData::getInstance().selectedRadioIndex2!=7 && ScreenData::getInstance().selectedRadioIndex2!=6) {
               Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", static_cast<int>(result2));
           } else {
               // Altfel, afișăm numărul cu zecimalele dorite
               Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d.%0*d", static_cast<int>(result2), decimals, static_cast<int>((result2 - static_cast<int>(result2)) * pow(10, decimals)));
           }
       }

       // Invalidăm zona de afișare corespunzătoare
       textArea2.invalidate();
}
void ScreenTimpView::fncPoint()
   {
	 if (!decimalAdded) {
	        addToBuffer(".");
	        decimalAdded = true;
	    }
   }

