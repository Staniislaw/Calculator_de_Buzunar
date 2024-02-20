/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENLISTMASAVIEWBASE_HPP
#define SCREENLISTMASAVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenlistmasa_screen/ScreenListMasaPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/ListLayout.hpp>
#include <touchgfx/mixins/ClickListener.hpp>
#include <touchgfx/widgets/RadioButton.hpp>
#include <touchgfx/widgets/RadioButtonGroup.hpp>

class ScreenListMasaViewBase : public touchgfx::View<ScreenListMasaPresenter>
{
public:
    ScreenListMasaViewBase();
    virtual ~ScreenListMasaViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void fncMG()
    {
        // Override and implement this function in ScreenListMasa
    }
    virtual void fncG()
    {
        // Override and implement this function in ScreenListMasa
    }
    virtual void fncKG()
    {
        // Override and implement this function in ScreenListMasa
    }
    virtual void fncT()
    {
        // Override and implement this function in ScreenListMasa
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::Button flexButtonBACK;
    touchgfx::TextArea textArea1_1;
    touchgfx::TextArea textArea1_2;
    touchgfx::TextArea textArea1_2_1;
    touchgfx::TextArea textArea1;
    touchgfx::ClickListener< touchgfx::ListLayout > listLayout1;
    touchgfx::RadioButtonGroup<4> radioButtonGroup1;
    touchgfx::RadioButton radioButtonMiliGram;
    touchgfx::RadioButton radioButtonGram;
    touchgfx::RadioButton radioButtonKG;
    touchgfx::RadioButton radioButtonTone;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenListMasaViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<ScreenListMasaViewBase, const touchgfx::AbstractButton&> radioButtonSelectedCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void radioButtonSelectedCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREENLISTMASAVIEWBASE_HPP