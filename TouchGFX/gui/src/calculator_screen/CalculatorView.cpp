#include <gui/calculator_screen/CalculatorView.hpp>
#include <cstdlib>  // Include this for std::atoi
#include <cstdio>   // Include this for sprintf
#include <cstring>
#include <cmath>

CalculatorView::CalculatorView()
{

}

void CalculatorView::setupScreen()
{
    CalculatorViewBase::setupScreen();
}

void CalculatorView::tearDownScreen()
{
    CalculatorViewBase::tearDownScreen();
}
void CalculatorView::addToBuffer(const char* num)
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


void CalculatorView::Unul()
{addToBuffer("1");}
void CalculatorView::Doi()
{addToBuffer("2");}
void CalculatorView::Trei()
{addToBuffer("3");}
void CalculatorView::Patru()
{addToBuffer("4");}
void CalculatorView::Cinci()
{addToBuffer("5");}
void CalculatorView::Sase()
{ addToBuffer("6");}
void CalculatorView::Sapte()
{ addToBuffer("7");}
void CalculatorView::Opt()
{ addToBuffer("8");}
void CalculatorView::Noua()
{ addToBuffer("9");}
void CalculatorView::Zero()
{ addToBuffer("0");}
void CalculatorView::fncPlus()
{
    Condition = false;
    Unicode::strncpy(textArea1Buffer, "+", TEXTAREA1_SIZE);
    textArea1.invalidate();
    strcpy(BufferPLUSMINUS,"+");
}
void CalculatorView::fncMinus()
{
	 Condition = false;
	 Unicode::strncpy(textArea1Buffer, "-", TEXTAREA1_SIZE);
	 textArea1.invalidate();
	 strcpy(BufferPLUSMINUS,"-");
}
void CalculatorView::fncEquals()
{
    Condition = true;
    Unicode::strncpy(textArea1Buffer, "=", TEXTAREA1_SIZE);

    if (strstr(BufferPLUSMINUS, "+"))
    {
        addBuffers();
    }
    else if (strstr(BufferPLUSMINUS, "-"))
    {
        minusBuffers();
    }
    else if (strstr(BufferPLUSMINUS, "/"))
    {
        divideBuffers();
    }
    else if (strstr(BufferPLUSMINUS, "*"))
    {
        multiplyBuffers();
    }

    // Reset the decimalAdded flag
    decimalAdded = false;

    memset(Buffer, 0, 10 * sizeof(Buffer[0]));
    memset(Buffer1, 0, 10 * sizeof(Buffer1[0]));

    // Actualizarea interfeței grafice
    textArea1.invalidate();
}

void CalculatorView::addBuffers()
{
    // Convertirea textelor în valori numerice cu zecimale
    double valueBuffer = atof(Buffer);
    double valueBuffer1 = atof(Buffer1);

    // Efectuarea adunării
    double result = valueBuffer + valueBuffer1;

    // Convertirea rezultatului înapoi în text cu două zecimale
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d.%02d", static_cast<int>(result), static_cast<int>((result - static_cast<int>(result)) * 100));

    // Reset the decimalAdded flag
    decimalAdded = false;

    // Actualizarea interfeței grafice
    textArea1.invalidate();
}
void CalculatorView::minusBuffers()
{
    // Convertirea textelor în valori numerice cu zecimale
    double valueBuffer = atof(Buffer);
    double valueBuffer1 = atof(Buffer1);

    // Efectuarea scăderii
    double result = valueBuffer - valueBuffer1;

    // Convertirea rezultatului înapoi în text cu două zecimale
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d.%02d", static_cast<int>(result), static_cast<int>((result - static_cast<int>(result)) * 100));

    // Reset the decimalAdded flag
    decimalAdded = false;

    // Actualizarea interfeței grafice
    textArea1.invalidate();
}

void CalculatorView::fncDiv()
{
    Condition = false;
    Unicode::strncpy(textArea1Buffer, "/", TEXTAREA1_SIZE);
    textArea1.invalidate();
    strcpy(BufferPLUSMINUS, "/");
}
void CalculatorView::divideBuffers()
{
    // Convertirea textelor în valori numerice cu zecimale
    double valueBuffer = atof(Buffer);
    double valueBuffer1 = atof(Buffer1);

    // Verificare pentru împărțirea la zero
    if (valueBuffer1 != 0)
    {
        // Efectuarea împărțirii
        double result = valueBuffer / valueBuffer1;

        // Convertirea rezultatului înapoi în text cu două zecimale
        Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d.%02d", static_cast<int>(result), static_cast<int>((result - static_cast<int>(result)) * 100));

        // Reset the decimalAdded flag
        decimalAdded = false;

        // Actualizarea interfeței grafice
        textArea1.invalidate();
    }
    else
    {
        // Handle division by zero error
        Unicode::strncpy(textArea1Buffer, "Error", TEXTAREA1_SIZE);
        textArea1.invalidate();
    }
}
void CalculatorView::fncMultiply()
{
    Condition = false;
    Unicode::strncpy(textArea1Buffer, "*", TEXTAREA1_SIZE);
    textArea1.invalidate();
    strcpy(BufferPLUSMINUS, "*");
}

void CalculatorView::multiplyBuffers()
{
    // Convertirea textelor în valori numerice cu zecimale
    double valueBuffer = atof(Buffer);
    double valueBuffer1 = atof(Buffer1);

    // Efectuarea înmulțirii
    double result = valueBuffer * valueBuffer1;

    // Convertirea rezultatului înapoi în text cu două zecimale
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d.%02d", static_cast<int>(result), static_cast<int>((result - static_cast<int>(result)) * 100));

    // Reset the decimalAdded flag
    decimalAdded = false;

    // Actualizarea interfeței grafice
    textArea1.invalidate();
}
void CalculatorView::fncClear()
{
    Condition = true;
    Unicode::strncpy(textArea1Buffer, "0", TEXTAREA1_SIZE);
    textArea1.invalidate();
    memset(Buffer, 0, 10 * sizeof(Buffer[0]));
    memset(Buffer1, 0, 10 * sizeof(Buffer1[0]));

    // Reset the decimalAdded flag
    decimalAdded = false;
}
void CalculatorView::fncDelete()
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

    Unicode::strncpy(textArea1Buffer, Condition ? Buffer : Buffer1, TEXTAREA1_SIZE);
    textArea1.invalidate();
}
void CalculatorView::fncSquare()
{
    // Convertirea textelor în valoare numerică cu zecimale
    double valueBuffer = atof(Buffer);

    // Calcularea pătratului
    double result = valueBuffer * valueBuffer;

    // Convertirea rezultatului înapoi în text cu două zecimale
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d.%02d", static_cast<int>(result), static_cast<int>((result - static_cast<int>(result)) * 100));

    // Reset the decimalAdded flag
    decimalAdded = false;

    // Actualizarea interfeței grafice
    textArea1.invalidate();

    // Ștergerea bufferelor
    memset(Buffer, 0, 10 * sizeof(Buffer[0]));
    memset(Buffer1, 0, 10 * sizeof(Buffer1[0]));
}

void CalculatorView::fncSQRT()
{
    // Convertirea textelor în valoare numerică cu zecimale
    double valueBuffer = atof(Buffer);

    // Verificare pentru rădăcina pătrată a unui număr negativ (imaginara)
    if (valueBuffer < 0)
    {
        Unicode::strncpy(textArea1Buffer, "Error", TEXTAREA1_SIZE);
        textArea1.invalidate();
    }
    else
    {
        // Calcularea rădăcinii pătrate
        double sqrtResult = sqrt(valueBuffer);

        // Convertirea rezultatului înapoi în text cu două zecimale
        Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d.%02d", static_cast<int>(sqrtResult), static_cast<int>((sqrtResult - static_cast<int>(sqrtResult)) * 100));

        // Reset the decimalAdded flag
        decimalAdded = false;

        // Ștergerea bufferelor
        memset(Buffer, 0, 10 * sizeof(Buffer[0]));
        memset(Buffer1, 0, 10 * sizeof(Buffer1[0]));

        // Actualizarea interfeței grafice
        textArea1.invalidate();
    }
}
void CalculatorView::fncPoint()
{
    // Check if a decimal point has already been added
    if (!decimalAdded) {
        addToBuffer(".");
        decimalAdded = true;
    }

}
void CalculatorView::fnc1DivX()
{
    // Convertirea textelor în valoare numerică cu zecimale
    double valueBuffer = atof(Buffer);

    // Verificare pentru împărțirea la zero
    if (valueBuffer != 0)
    {
        // Efectuarea împărțirii 1/x
        double result = 1 / valueBuffer;

        // Convertirea rezultatului înapoi în text cu două zecimale
        Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d.%02d", static_cast<int>(result), static_cast<int>((result - static_cast<int>(result)) * 100));

        // Reset the decimalAdded flag
        decimalAdded = false;

        // Ștergerea bufferelor
        memset(Buffer, 0, 10 * sizeof(Buffer[0]));
        memset(Buffer1, 0, 10 * sizeof(Buffer1[0]));

        // Actualizarea interfeței grafice
        textArea1.invalidate();
    }
    else
    {
        // Handle division by zero error
        Unicode::strncpy(textArea1Buffer, "Error", TEXTAREA1_SIZE);
        textArea1.invalidate();
    }
}
