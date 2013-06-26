/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreRottenTomatoesControl : BRControl {
	NSDictionary *_itemDictionary;	// 84 = 0x54
}
+ (id)rottenTomatesControlWithDictionary:(id)dictionary;	// 0x2079e5
- (id)initWithDictionary:(id)dictionary;	// 0x207a21
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x208b7d
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x208c3d
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x208af1
- (id)_imageForFreshnessRating:(int)freshnessRating;	// 0x208d2d
- (id)_labelForFreshnessRating:(int)freshnessRating locInfo:(id)info;	// 0x208d55
- (id)accessibilityLabel;	// 0x208ad5
- (void)dealloc;	// 0x207a79
- (void)layoutSubcontrols;	// 0x207ac5
@end
