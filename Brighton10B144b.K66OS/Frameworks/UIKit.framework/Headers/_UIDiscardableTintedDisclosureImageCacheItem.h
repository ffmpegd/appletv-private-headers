/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSDiscardableContent.h"

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIDiscardableTintedDisclosureImageCacheItem : NSObject <NSDiscardableContent> {
	UIImage *_tintedImage;	// 4 = 0x4
	UIColor *_tintColor;	// 8 = 0x8
	struct {
		unsigned isDiscarded : 1;
		unsigned isPressed : 1;
		unsigned useCount;
	} _flags;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) UIColor *tintColor;	// G=0x32d5783d; @synthesize=_tintColor
@property(readonly, assign, nonatomic) UIImage *tintedImage;	// G=0x32d5782d; @synthesize=_tintedImage
- (id)initWithPressed:(BOOL)pressed tintColor:(id)color;	// 0x32d57381
- (id)_tintedDisclosureImage:(BOOL)image;	// 0x32d57549
- (BOOL)beginContentAccess;	// 0x32d57639
- (void)dealloc;	// 0x32d573f9
- (void)discardContentIfPossible;	// 0x32d577d1
- (void)endContentAccess;	// 0x32d57731
- (unsigned)hash;	// 0x32d57479
- (BOOL)isContentDiscarded;	// 0x32d57819
- (BOOL)isEqual:(id)equal;	// 0x32d574b5
// declared property getter: - (id)tintColor;	// 0x32d5783d
// declared property getter: - (id)tintedImage;	// 0x32d5782d
@end

