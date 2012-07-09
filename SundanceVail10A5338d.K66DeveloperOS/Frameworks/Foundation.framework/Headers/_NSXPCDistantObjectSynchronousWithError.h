/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "_NSXPCDistantObjectWithError.h"


__attribute__((visibility("hidden")))
@interface _NSXPCDistantObjectSynchronousWithError : _NSXPCDistantObjectWithError {
	double _timeout;	// 36 = 0x24
}
@property(assign) double timeout;	// G=0x374681a1; S=0x374681d5; @synthesize=_timeout
- (id)_initWithConnection:(id)connection proxyNumber:(unsigned long long)number interface:(id)interface error:(id)error timeout:(double)timeout;	// 0x374680b1
- (void)forwardInvocation:(id)invocation;	// 0x37468111
// declared property setter: - (void)setTimeout:(double)timeout;	// 0x374681d5
// declared property getter: - (double)timeout;	// 0x374681a1
@end
