/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITargetedProxy.h"
#import "UIAlertViewDelegate.h"


__attribute__((visibility("hidden")))
@interface _UIUserNotificationRestrictedAlertViewProxy : _UITargetedProxy <UIAlertViewDelegate> {
	id _delegate;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x330d5415; S=0x330d5425; converted property
+ (id)restrictedProxyForAlertView:(id)alertView;	// 0x330d53e9
// converted property getter: - (id)delegate;	// 0x330d5415
- (void)forwardInvocation:(id)invocation;	// 0x330d555d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x330d5481
- (BOOL)respondsToSelector:(SEL)selector;	// 0x330d5511
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x330d5425
@end

