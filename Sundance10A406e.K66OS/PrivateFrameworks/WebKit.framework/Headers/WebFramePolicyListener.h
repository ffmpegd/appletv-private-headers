/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebPolicyDecisionListener.h"
#import "WebFormSubmissionListener.h"
#import <NSObject.h> // Unknown library


@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {
	Frame *m_frame;	// 4 = 0x4
}
+ (void)initialize;	// 0x307e70bd
- (id)initWithWebCoreFrame:(Frame *)webCoreFrame;	// 0x307e70c1
- (void)continue;	// 0x30823ae1
- (void)dealloc;	// 0x307e8175
- (void)download;	// 0x30823acd
- (void)finalize;	// 0x308239cd
- (void)ignore;	// 0x307ed211
- (void)invalidate;	// 0x308238ed
- (void)receivedPolicyDecision:(int)decision;	// 0x307e7285
- (void)use;	// 0x307e7271
@end

