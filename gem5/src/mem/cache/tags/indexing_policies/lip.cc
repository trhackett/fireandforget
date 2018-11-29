#include "lip.hh"

LIP::LIP(const Params* p)
	: SetAssociative(p)
{
}

LIP*
LIPParams::create()
{
    return new LIP(this);
}

void LIP::moveToHead(CacheBlk *blk)
{

}

void LIP::moveToTail(CacheBlk *blk)
{

}