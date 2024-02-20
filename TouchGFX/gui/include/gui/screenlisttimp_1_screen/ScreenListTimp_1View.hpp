#ifndef SCREENLISTTIMP_1VIEW_HPP
#define SCREENLISTTIMP_1VIEW_HPP

#include <gui_generated/screenlisttimp_1_screen/ScreenListTimp_1ViewBase.hpp>
#include <gui/screenlisttimp_1_screen/ScreenListTimp_1Presenter.hpp>

class ScreenListTimp_1View : public ScreenListTimp_1ViewBase
{
public:
    ScreenListTimp_1View();
    virtual ~ScreenListTimp_1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void fncMs();
   	virtual void fncS();
   	virtual void fncMin();
   	virtual void fncOre();
   	virtual void fncZile();
   	virtual void fncSapt();
   	virtual void fncAni();
protected:
};

#endif // SCREENLISTTIMP_1VIEW_HPP
