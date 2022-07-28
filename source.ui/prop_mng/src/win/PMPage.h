#pragma once
#include <pm_gui/IPMPage.h>


class PMPage
    : public IPMPage
{
public:
    PMPage();

    // IPMPage
    virtual std::string GetTitle() override;
};
