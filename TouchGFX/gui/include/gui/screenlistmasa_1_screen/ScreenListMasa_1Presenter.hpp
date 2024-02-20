#ifndef SCREENLISTMASA_1PRESENTER_HPP
#define SCREENLISTMASA_1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenListMasa_1View;

class ScreenListMasa_1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenListMasa_1Presenter(ScreenListMasa_1View& v);

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

    virtual ~ScreenListMasa_1Presenter() {}

private:
    ScreenListMasa_1Presenter();

    ScreenListMasa_1View& view;
};

#endif // SCREENLISTMASA_1PRESENTER_HPP
