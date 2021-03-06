/*************************************************************************
 * Copyright (c) 2014 eProsima. All rights reserved.
 *
 * This copy of eProsima Fast RTPS is licensed to you under the terms described in the
 * FASTRTPS_LIBRARY_LICENSE file included in this distribution.
 *
 *************************************************************************/

/**
 * @file WriterProxyLiveliness.h
 *
 */

#ifndef WRITERPROXYLIVELINESS_H_
#define WRITERPROXYLIVELINESS_H_
#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC
#include "../../resources/TimedEvent.h"

namespace eprosima {
namespace fastrtps{
namespace rtps {

class WriterProxy;
/**
 * Class WriterProxyLiveliness, timed event to check the liveliness of a writer each leaseDuration.
 *  @ingroup READER_MODULE
 */
class WriterProxyLiveliness: public TimedEvent {
public:
	/**
	* @param wp
	* @param interval
	*/
	WriterProxyLiveliness(WriterProxy* wp,double interval);
	virtual ~WriterProxyLiveliness();
	/**
	* Method invoked when the event occurs
	*
	* @param code Code representing the status of the event
	* @param msg Message associated to the event
	*/
	void event(EventCode code, const char* msg= nullptr);
	//!Pointer to the WriterProxy associated with this specific event.
	WriterProxy* mp_WP;
};
}
} /* namespace rtps */
} /* namespace eprosima */
#endif
#endif /* WRITERPROXYLIVELINESS_H_ */
