/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITargetedProxy.h"

@class Protocol;

__attribute__((visibility("hidden")))
@interface _UIRemoteProtocolSettingViewServiceXPCProxy : _UITargetedProxy {
	Protocol *_remoteProtocol;	// 8 = 0x8
}
+ (id)proxyWithTarget:(id)target remoteProtocol:(id)protocol;	// 0x2f905b5d
- (void)dealloc;	// 0x2f905b99
- (void)forwardInvocation:(id)invocation;	// 0x2f905c25
- (id)methodSignatureForSelector:(SEL)selector;	// 0x2f905be5
@end

