#ifndef SCREENLISTMASA_1VIEW_HPP
#define SCREENLISTMASA_1VIEW_HPP

#include <gui_generated/screenlistmasa_1_screen/ScreenListMasa_1ViewBase.hpp>
#include <gui/screenlistmasa_1_screen/ScreenListMasa_1Presenter.hpp>

class ScreenListMasa_1View : public ScreenListMasa_1ViewBase
{
public:
    ScreenListMasa_1View();
    virtual ~ScreenListMasa_1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void fncMG();
   	virtual void fncG();
   	virtual void fncKG();
   	virtual void fncT();
protected:
};

#endif // SCREENLISTMASA_1VIEW_HPP
