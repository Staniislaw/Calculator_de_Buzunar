/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENVITEZAVIEWBASE_HPP
#define SCREENVITEZAVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenviteza_screen/ScreenVitezaPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class ScreenVitezaViewBase : public touchgfx::View<ScreenVitezaPresenter>
{
public:
    ScreenVitezaViewBase();
    virtual ~ScreenVitezaViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void fncNumber1()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncNumber2()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncNumber3()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncNumber4()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncNumber5()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncNumber6()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncNumber7()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncNumber8()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncNumber9()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncNumber0()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncDelete()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncClear()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncClearBuffer()
    {
        // Override and implement this function in ScreenViteza
    }
    virtual void fncPoint()
    {
        // Override and implement this function in ScreenViteza
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
    touchgfx::TextAreaWithOneWildcard textArea2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButton2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonBack;
    touchgfx::TextAreaWithOneWildcard textAreaMarime;
    touchgfx::TextAreaWithOneWildcard textAreaMarime_2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonN1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonN2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonN4;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonN7;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonN8;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonN9;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonN0;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonN5;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonN6;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonN3;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonDelete;
    touchgfx::TextArea textArea3;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonClear;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonPoint;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA1_SIZE = 20;
    touchgfx::Unicode::UnicodeChar textArea1Buffer[TEXTAREA1_SIZE];
    static const uint16_t TEXTAREA2_SIZE = 20;
    touchgfx::Unicode::UnicodeChar textArea2Buffer[TEXTAREA2_SIZE];
    static const uint16_t TEXTAREAMARIME_SIZE = 32;
    touchgfx::Unicode::UnicodeChar textAreaMarimeBuffer[TEXTAREAMARIME_SIZE];
    static const uint16_t TEXTAREAMARIME_2_SIZE = 32;
    touchgfx::Unicode::UnicodeChar textAreaMarime_2Buffer[TEXTAREAMARIME_2_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenVitezaViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREENVITEZAVIEWBASE_HPP
