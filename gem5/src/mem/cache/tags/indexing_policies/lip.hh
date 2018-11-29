#ifndef _MEM_CACHE_TAGS_INDEXING_POLICIES_LIP_HH_
#define _MEM_CACHE_TAGS_INDEXING_POLICIES_LIP_HH_

#include "mem/cache/tags/indexing_policies/set_associative.hh"
#include "params/LIP.hh"


class LIP : public SetAssociative
{
public:
	typedef LIPParams Params;
	LIP(const Params* p);
	~LIP() {}
	void moveToHead(CacheBlk *blk) override;
    void moveToTail(CacheBlk *blk) override;
};

#endif