#ifndef SCREENTIMPPRESENTER_HPP
#define SCREENTIMPPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenTimpView;

class ScreenTimpPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenTimpPresenter(ScreenTimpView& v);

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

    virtual ~ScreenTimpPresenter() {}

private:
    ScreenTimpPresenter();

    ScreenTimpView& view;
};

#endif // SCREENTIMPPRESENTER_HPP
