#ifndef SCREENLISTTIMPPRESENTER_HPP
#define SCREENLISTTIMPPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenListTimpView;

class ScreenListTimpPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenListTimpPresenter(ScreenListTimpView& v);

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

    virtual ~ScreenListTimpPresenter() {}

private:
    ScreenListTimpPresenter();

    ScreenListTimpView& view;
};

#endif // SCREENLISTTIMPPRESENTER_HPP
