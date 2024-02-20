#ifndef CALCULATORVIEW_HPP
#define CALCULATORVIEW_HPP

#include <gui_generated/calculator_screen/CalculatorViewBase.hpp>
#include <gui/calculator_screen/CalculatorPresenter.hpp>

class CalculatorView : public CalculatorViewBase
{
public:
    CalculatorView();
    virtual ~CalculatorView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void Unul();
        virtual void Doi();
        virtual void Trei();
        virtual void Patru();
        virtual void Cinci();
        virtual void Sase();
        virtual void Sapte();
        virtual void Opt();
        virtual void Noua();
        virtual void Zero();
        virtual void fncPlus();
        virtual void fncMinus();
        virtual void fncEquals();
        virtual void fncDelete();
        virtual void fncClear();
        virtual void fncMultiply();
        virtual void fncDiv();
        virtual void fncSQRT();

        virtual void fncSquare();
        virtual void fnc1DivX();
        virtual void fncPoint();
protected:
          bool Condition=true;
          bool decimalAdded = false;
          static const int BUFFER_SIZE = 50;
          char Buffer[BUFFER_SIZE];
          char Buffer1[BUFFER_SIZE];
          void addBuffers();
          void minusBuffers();
          char BufferPLUSMINUS[1];
          void divideBuffers();
          void multiplyBuffers();
          void addToBuffer(const char* num);
          bool isNegative = false;

};

#endif // CALCULATORVIEW_HPP
