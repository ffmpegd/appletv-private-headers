/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>
#import "UIAlertViewDelegate.h"


__attribute__((visibility("hidden")))
@interface _UIDSMAlertViewDelegate : NSObject <UIAlertViewDelegate> {
	id _completionHandler;	// 4 = 0x4
}
@property(copy) id completionHandler;	// G=0x2f94a085; S=0x2f94a099; @synthesize=_completionHandler
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x2f94a03d
// declared property getter: - (id)completionHandler;	// 0x2f94a085
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x2f94a099
- (void)willPresentAlertView:(id)view;	// 0x2f94a02d
@end
