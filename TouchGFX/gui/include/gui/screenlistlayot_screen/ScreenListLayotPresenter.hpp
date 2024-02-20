#ifndef SCREENLISTLAYOTPRESENTER_HPP
#define SCREENLISTLAYOTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenListLayotView;

class ScreenListLayotPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenListLayotPresenter(ScreenListLayotView& v);

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

    virtual ~ScreenListLayotPresenter() {}

private:
    ScreenListLayotPresenter();

    ScreenListLayotView& view;
};

#endif // SCREENLISTLAYOTPRESENTER_HPP
