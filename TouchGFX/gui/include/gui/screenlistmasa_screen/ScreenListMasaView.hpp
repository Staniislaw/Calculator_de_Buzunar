#ifndef SCREENLISTMASAVIEW_HPP
#define SCREENLISTMASAVIEW_HPP

#include <gui_generated/screenlistmasa_screen/ScreenListMasaViewBase.hpp>
#include <gui/screenlistmasa_screen/ScreenListMasaPresenter.hpp>

class ScreenListMasaView : public ScreenListMasaViewBase
{
public:
    ScreenListMasaView();
    virtual ~ScreenListMasaView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void fncMG();
	virtual void fncG();
	virtual void fncKG();
	virtual void fncT();
protected:
};

#endif // SCREENLISTMASAVIEW_HPP
