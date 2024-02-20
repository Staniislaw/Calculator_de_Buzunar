#ifndef SCREENLISTTIMP_1PRESENTER_HPP
#define SCREENLISTTIMP_1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenListTimp_1View;

class ScreenListTimp_1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenListTimp_1Presenter(ScreenListTimp_1View& v);

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

    virtual ~ScreenListTimp_1Presenter() {}

private:
    ScreenListTimp_1Presenter();

    ScreenListTimp_1View& view;
};

#endif // SCREENLISTTIMP_1PRESENTER_HPP
