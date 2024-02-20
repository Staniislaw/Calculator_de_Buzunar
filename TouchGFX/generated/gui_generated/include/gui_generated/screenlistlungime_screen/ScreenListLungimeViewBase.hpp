/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENLISTLUNGIMEVIEWBASE_HPP
#define SCREENLISTLUNGIMEVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenlistlungime_screen/ScreenListLungimePresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/ListLayout.hpp>
#include <touchgfx/mixins/ClickListener.hpp>
#include <touchgfx/widgets/RadioButton.hpp>
#include <touchgfx/widgets/RadioButtonGroup.hpp>

class ScreenListLungimeViewBase : public touchgfx::View<ScreenListLungimePresenter>
{
public:
    ScreenListLungimeViewBase();
    virtual ~ScreenListLungimeViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void fncMm()
    {
        // Override and implement this function in ScreenListLungime
    }
    virtual void fncCm()
    {
        // Override and implement this function in ScreenListLungime
    }
    virtual void fncM()
    {
        // Override and implement this function in ScreenListLungime
    }
    virtual void fncKm()
    {
        // Override and implement this function in ScreenListLungime
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
    touchgfx::RadioButton radioButtonMilimetru;
    touchgfx::RadioButton radioButtonCM;
    touchgfx::RadioButton radioButtonM;
    touchgfx::RadioButton radioButtonKm;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenListLungimeViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<ScreenListLungimeViewBase, const touchgfx::AbstractButton&> radioButtonSelectedCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void radioButtonSelectedCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREENLISTLUNGIMEVIEWBASE_HPP