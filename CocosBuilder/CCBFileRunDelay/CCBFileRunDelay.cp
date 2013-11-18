/*
 *  CCBFileRunDelay.cp
 *  CCBFileRunDelay
 *
 *  Created by Qidea on 11/13/13.
 *
 *
 */

#include "CCBFileRunDelay.h"
#include "CCBFileRunDelayPriv.h"

CFStringRef CCBFileRunDelayUUID(void)
{
	CCCBFileRunDelay* theObj = new CCCBFileRunDelay;
	return theObj->UUID();
}

CFStringRef CCCBFileRunDelay::UUID()
{
	return CFSTR("0001020304050607");
}
