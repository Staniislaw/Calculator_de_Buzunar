#ifndef SCREENLUNGIMEPRESENTER_HPP
#define SCREENLUNGIMEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenLungimeView;

class ScreenLungimePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenLungimePresenter(ScreenLungimeView& v);

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

    virtual ~ScreenLungimePresenter() {}

private:
    ScreenLungimePresenter();

    ScreenLungimeView& view;
};

#endif // SCREENLUNGIMEPRESENTER_HPP
