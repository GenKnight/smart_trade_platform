//============================================================================
// Name        : lockfreeringbuf.h
// Author      : TheRockLiuHY
// Date        : May 20, 2015
// Copyright   : liuhongyang's copyright
// Description : smart_utils
//============================================================================

#ifndef UTILS_LOCKFREERINGBUF_H_
#define UTILS_LOCKFREERINGBUF_H_

#include <memory>
#include <vector>
#include "../base/base.h"

namespace smart_utils
{
	template <typename T>
	class lock_free_ringbuf
	{
		DISABLE_COPY(lock_free_ringbuf)
		DISABLE_MOVE(lock_free_ringbuf)
	public:
		typedef typename std::shared_ptr<lock_free_ringbuf<T> > pointer_t;

	public:
		explicit lock_free_ringbuf();
		virtual ~lock_free_ringbuf();
	};

} /* namespace smart_utils */

#endif /* UTILS_LOCKFREERINGBUF_H_ */
