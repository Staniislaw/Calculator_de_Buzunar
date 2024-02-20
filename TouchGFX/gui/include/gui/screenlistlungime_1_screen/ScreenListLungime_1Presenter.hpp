#ifndef SCREENLISTLUNGIME_1PRESENTER_HPP
#define SCREENLISTLUNGIME_1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenListLungime_1View;

class ScreenListLungime_1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenListLungime_1Presenter(ScreenListLungime_1View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~ScreenListLungime_1Presenter() {}

private:
    ScreenListLungime_1Presenter();

    ScreenListLungime_1View& view;
};

#endif // SCREENLISTLUNGIME_1PRESENTER_HPP
