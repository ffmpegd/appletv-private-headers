/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import "IMConnectionMonitor.h"


@interface IMMobileConnectionMonitor : IMConnectionMonitor {
	BOOL _isHostReachable;	// 12 = 0xc
	Class _CPNetworkObserverClass;	// 16 = 0x10
}
- (id)init;	// 0x31ae5181
- (void)_handleNetworkObserverDidChange:(id)_handleNetworkObserver;	// 0x31ae5409
- (void)_setup;	// 0x31ae5225
- (void)dealloc;	// 0x31ae5309
- (BOOL)isImmediatelyReachable;	// 0x31ae51d1
@end

