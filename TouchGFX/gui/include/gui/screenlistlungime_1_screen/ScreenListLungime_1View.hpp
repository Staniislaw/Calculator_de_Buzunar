#ifndef SCREENLISTLUNGIME_1VIEW_HPP
#define SCREENLISTLUNGIME_1VIEW_HPP

#include <gui_generated/screenlistlungime_1_screen/ScreenListLungime_1ViewBase.hpp>
#include <gui/screenlistlungime_1_screen/ScreenListLungime_1Presenter.hpp>

class ScreenListLungime_1View : public ScreenListLungime_1ViewBase
{
public:
    ScreenListLungime_1View();
    virtual ~ScreenListLungime_1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void fncMm();
   virtual void fncCm();
   virtual void fncM();
   virtual void fncKm();
protected:
};

#endif // SCREENLISTLUNGIME_1VIEW_HPP
