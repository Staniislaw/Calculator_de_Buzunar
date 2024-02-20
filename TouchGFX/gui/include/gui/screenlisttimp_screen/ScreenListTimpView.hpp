#ifndef SCREENLISTTIMPVIEW_HPP
#define SCREENLISTTIMPVIEW_HPP

#include <gui_generated/screenlisttimp_screen/ScreenListTimpViewBase.hpp>
#include <gui/screenlisttimp_screen/ScreenListTimpPresenter.hpp>

class ScreenListTimpView : public ScreenListTimpViewBase
{
public:
    ScreenListTimpView();
    virtual ~ScreenListTimpView() {}
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

#endif // SCREENLISTTIMPVIEW_HPP
