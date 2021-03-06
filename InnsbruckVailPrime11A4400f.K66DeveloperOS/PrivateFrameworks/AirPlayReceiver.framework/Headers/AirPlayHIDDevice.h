/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import </libobjc.A.h>
#import "AirPlayReceiver-Structs.h"

@class AirPlayReceiverContext;

__attribute__((visibility("hidden")))
@interface AirPlayHIDDevice : NSObject {
	AirPlayReceiverContext *_apc;	// 4 = 0x4
	IOHIDDeviceRef _hidDevice;	// 8 = 0x8
	unsigned char _hidOpened;	// 12 = 0xc
	char *_hidReportBuf;	// 16 = 0x10
	long _hidReportMaxLen;	// 20 = 0x14
	CFStringRef _uuid;	// 24 = 0x18
}
- (void)dealloc;	// 0x2ff40345
- (void)invalidate;	// 0x2ff403bd
@end

