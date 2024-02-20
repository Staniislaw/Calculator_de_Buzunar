#ifndef SCREENLISTLAYOT_1PRESENTER_HPP
#define SCREENLISTLAYOT_1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenListLayot_1View;

class ScreenListLayot_1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenListLayot_1Presenter(ScreenListLayot_1View& v);

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

    virtual ~ScreenListLayot_1Presenter() {}

private:
    ScreenListLayot_1Presenter();

    ScreenListLayot_1View& view;
};

#endif // SCREENLISTLAYOT_1PRESENTER_HPP
