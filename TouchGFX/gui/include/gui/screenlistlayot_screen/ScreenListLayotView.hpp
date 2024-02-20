#ifndef SCREENLISTLAYOTVIEW_HPP
#define SCREENLISTLAYOTVIEW_HPP

#include <gui_generated/screenlistlayot_screen/ScreenListLayotViewBase.hpp>
#include <gui/screenlistlayot_screen/ScreenListLayotPresenter.hpp>

class ScreenListLayotView : public ScreenListLayotViewBase
{
public:
    ScreenListLayotView();
    virtual ~ScreenListLayotView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void fncRadioMpS();
    virtual void fncRadioCMpS();
    virtual void fncKmpO();
protected:
};

#endif // SCREENLISTLAYOTVIEW_HPP
