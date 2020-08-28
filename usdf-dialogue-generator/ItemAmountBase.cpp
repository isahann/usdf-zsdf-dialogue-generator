#include "ItemAmountBase.h"

#include "Conversation.h"
#include "Functions.cpp"
#include "Generics.cpp"

#define GET_VARIABLE_NAME(v) (#v)

using namespace utils_functions;

ItemAmountBase::ItemAmountBase(int item, int amount)
{
	this->item = item;
	this->amount = amount;
}
