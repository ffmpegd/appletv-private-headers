/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiCategoriesControl.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoriesControl_iPhone : UIKeyboardEmojiCategoriesControl {
@private
	NSArray *_selectedImages;	// 100 = 0x64
	NSArray *_unselectedImages;	// 104 = 0x68
}
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32f0be29
- (void)layoutSubviews;	// 0x32f0bcb5
- (void)releaseImagesAndViews;	// 0x32f0bbc5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32f0be5d
- (void)updateSegmentAndDividers:(int)dividers;	// 0x32f0ba4d
- (void)updateSegmentImages;	// 0x32f0b291
@end

