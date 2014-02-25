/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FastCdr is licensed to you under the terms described in the
 * EPROSIMARTPS_LIBRARY_LICENSE file included in this distribution.
 *
 *************************************************************************/

/*
 * StatelessWriter.h
 *
 *  Created on: Feb 25, 2014
 *      Author: Gonzalo Rodriguez Canosa
 *      email:  gonzalorodriguez@eprosima.com
 */

#include "rtps_all.h"

#ifndef STATELESSWRITER_H_
#define STATELESSWRITER_H_

namespace eprosima {
namespace rtps {

class StatelessWriter : public RTPSWriter
{
public:
	StatelessWriter();
	StatelessWriter(WriterParams);
	virtual ~StatelessWriter();
	Duration_t resendDataPeriod;
	std::vector<ReaderLocator> reader_locator;
	void reader_locator_add(ReaderLocator locator);
	void reader_locator_remove(Locator_t locator);
	void unsent_changes_reset();
};

} /* namespace rtps */
} /* namespace eprosima */

#endif /* STATELESSWRITER_H_ */