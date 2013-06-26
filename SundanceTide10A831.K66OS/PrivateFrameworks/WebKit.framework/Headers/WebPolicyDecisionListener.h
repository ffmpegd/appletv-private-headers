/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "NSObject.h"
#import "WebPolicyDecisionListener.h"

@class WebPolicyDecisionListenerPrivate;

@protocol WebPolicyDecisionListener <NSObject>
- (void)download;
- (void)ignore;
- (void)use;
@end

@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {
	WebPolicyDecisionListenerPrivate *_private;	// 4 = 0x4
}
- (id)_initWithTarget:(id)target action:(SEL)action;	// 0x350a355d
- (void)_invalidate;	// 0x350a3655
- (void)_usePolicy:(int)policy;	// 0x350a3621
- (void)dealloc;	// 0x350a35d5
- (void)download;	// 0x350a36b1
- (void)ignore;	// 0x350a369d
- (void)use;	// 0x350a3689
@end
