/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "_NSXPCDistantObject.h"


__attribute__((visibility("hidden")))
@interface _NSXPCDistantObjectWithError : _NSXPCDistantObject {
	id _errorBlock;	// 32 = 0x20
}
@property(copy) id errorBlock;	// G=0x31aac481; S=0x31aac495; @synthesize=_errorBlock
- (id)_initWithConnection:(id)connection proxyNumber:(unsigned long long)number interface:(id)interface error:(id)error;	// 0x31aac375
- (void)dealloc;	// 0x31aac3c5
// declared property getter: - (id)errorBlock;	// 0x31aac481
- (void)forwardInvocation:(id)invocation;	// 0x31aac409
// declared property setter: - (void)setErrorBlock:(id)block;	// 0x31aac495
@end

