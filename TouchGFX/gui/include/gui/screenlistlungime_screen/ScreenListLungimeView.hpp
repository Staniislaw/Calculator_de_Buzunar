#ifndef SCREENLISTLUNGIMEVIEW_HPP
#define SCREENLISTLUNGIMEVIEW_HPP

#include <gui_generated/screenlistlungime_screen/ScreenListLungimeViewBase.hpp>
#include <gui/screenlistlungime_screen/ScreenListLungimePresenter.hpp>

class ScreenListLungimeView : public ScreenListLungimeViewBase
{
public:
    ScreenListLungimeView();
    virtual ~ScreenListLungimeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void fncMm();
   virtual void fncCm();
   virtual void fncM();
   virtual void fncKm();
protected:
};

#endif // SCREENLISTLUNGIMEVIEW_HPP
