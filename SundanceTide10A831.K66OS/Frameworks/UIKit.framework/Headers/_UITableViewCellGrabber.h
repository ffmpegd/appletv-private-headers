/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewCellGrabber : UIControl {
	UITableViewCell *_cell;	// 108 = 0x6c
	CGPoint _downPoint;	// 112 = 0x70
}
+ (id)grabberImage;	// 0x31e474ad
- (id)initWithFrame:(CGRect)frame tableViewCell:(id)cell;	// 0x31e474e5
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31e475f1
- (void)cancelTrackingWithEvent:(id)event;	// 0x31e47729
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31e47671
- (void)drawRect:(CGRect)rect;	// 0x31e47559
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31e476ed
- (BOOL)shouldTrack;	// 0x31e475ed
@end

