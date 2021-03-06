/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiCategoryBar.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryBar_iPhone : UIKeyboardEmojiCategoryBar {
	NSArray *_selectedImages;	// 148 = 0x94
	NSArray *_unselectedImages;	// 152 = 0x98
}
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x33c6a5c5
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33c6b225
- (void)layoutSubviews;	// 0x33c6b0b1
- (void)releaseImagesAndViews;	// 0x33c6afd5
- (void)updateSegmentAndDividers:(int)dividers;	// 0x33c6ae85
- (void)updateSegmentImages;	// 0x33c6a629
@end

