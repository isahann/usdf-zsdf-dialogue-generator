#pragma once
#include "ItemAmountBase.h"
class Ifitem :
    public ItemAmountBase
{
public:
    using ItemAmountBase::ItemAmountBase;
    std::string tag(int nestedTags);
};

