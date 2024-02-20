/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef CALCULATORVIEWBASE_HPP
#define CALCULATORVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/calculator_screen/CalculatorPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class CalculatorViewBase : public touchgfx::View<CalculatorPresenter>
{
public:
    CalculatorViewBase();
    virtual ~CalculatorViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void Unul()
    {
        // Override and implement this function in Calculator
    }
    virtual void Doi()
    {
        // Override and implement this function in Calculator
    }
    virtual void Trei()
    {
        // Override and implement this function in Calculator
    }
    virtual void Patru()
    {
        // Override and implement this function in Calculator
    }
    virtual void Cinci()
    {
        // Override and implement this function in Calculator
    }
    virtual void Sase()
    {
        // Override and implement this function in Calculator
    }
    virtual void Sapte()
    {
        // Override and implement this function in Calculator
    }
    virtual void Opt()
    {
        // Override and implement this function in Calculator
    }
    virtual void Noua()
    {
        // Override and implement this function in Calculator
    }
    virtual void Zero()
    {
        // Override and implement this function in Calculator
    }
    virtual void fncPlus()
    {
        // Override and implement this function in Calculator
    }
    virtual void fncMinus()
    {
        // Override and implement this function in Calculator
    }
    virtual void fncEquals()
    {
        // Override and implement this function in Calculator
    }
    virtual void fncDelete()
    {
        // Override and implement this function in Calculator
    }
    virtual void fncClear()
    {
        // Override and implement this function in Calculator
    }
    virtual void fncMultiply()
    {
        // Override and implement this function in Calculator
    }
    virtual void fncDiv()
    {
        // Override and implement this function in Calculator
    }
    virtual void fncSQRT()
    {
        // Override and implement this function in Calculator
    }
    virtual void fncSquare()
    {
        // Override and implement this function in Calculator
    }
    virtual void fnc1DivX()
    {
        // Override and implement this function in Calculator
    }
    virtual void fncPoint()
    {
        // Override and implement this function in Calculator
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ScalableImage scalableImage1;
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::TextAreaWithOneWildcard textArea1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton4;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonDelete;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonClear;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton5;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton6;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton9;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton8;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton7;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonMinus;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonMultiply;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonDiv;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonSQRT;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonSquare;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton1divX;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonMENU;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton0;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonPoint;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonEquals;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton3;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonPLUS;
    touchgfx::TextArea textArea2;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA1_SIZE = 20;
    touchgfx::Unicode::UnicodeChar textArea1Buffer[TEXTAREA1_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<CalculatorViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // CALCULATORVIEWBASE_HPP
