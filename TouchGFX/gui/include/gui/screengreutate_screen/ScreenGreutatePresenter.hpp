#ifndef SCREENGREUTATEPRESENTER_HPP
#define SCREENGREUTATEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenGreutateView;

class ScreenGreutatePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ScreenGreutatePresenter(ScreenGreutateView& v);

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

    virtual ~ScreenGreutatePresenter() {}

private:
    ScreenGreutatePresenter();

    ScreenGreutateView& view;
};

#endif // SCREENGREUTATEPRESENTER_HPP
