/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class CADisplayLink, UIView;

__attribute__((visibility("hidden")))
@interface UIViewHeartbeat : NSObject {
@private
	UIView *_view;	// 4 = 0x4
	SEL _selector;	// 8 = 0x8
	CADisplayLink *_heartbeat;	// 12 = 0xc
}
+ (void)startHeartbeatWithView:(id)view selector:(SEL)selector inRunLoopMode:(id)runLoopMode;	// 0x33ae9a0d
+ (void)stopHeartbeatWithView:(id)view selector:(SEL)selector;	// 0x33af0771
- (void)_updateDisplayLink:(id)link;	// 0x33aedb15
- (void)dealloc;	// 0x33af081d
@end

