#ifndef SCREENLISTLAYOT_1VIEW_HPP
#define SCREENLISTLAYOT_1VIEW_HPP

#include <gui_generated/screenlistlayot_1_screen/ScreenListLayot_1ViewBase.hpp>
#include <gui/screenlistlayot_1_screen/ScreenListLayot_1Presenter.hpp>

class ScreenListLayot_1View : public ScreenListLayot_1ViewBase
{
public:
    ScreenListLayot_1View();
    virtual ~ScreenListLayot_1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void fncRadioMpS();
    virtual void fncRadioCMpS();
    virtual void fncKmpO();
protected:
};

#endif // SCREENLISTLAYOT_1VIEW_HPP
