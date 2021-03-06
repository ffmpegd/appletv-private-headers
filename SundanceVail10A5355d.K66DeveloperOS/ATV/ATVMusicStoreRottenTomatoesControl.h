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
	NSDictionary *_itemDictionary;	// 80 = 0x50
}
+ (id)rottenTomatesControlWithDictionary:(id)dictionary;	// 0x1e7421
- (id)initWithDictionary:(id)dictionary;	// 0x1e745d
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x1e85b9
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x1e8679
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x1e852d
- (id)_imageForFreshnessRating:(int)freshnessRating;	// 0x1e8769
- (id)_labelForFreshnessRating:(int)freshnessRating locInfo:(id)info;	// 0x1e8791
- (id)accessibilityLabel;	// 0x1e8511
- (void)dealloc;	// 0x1e74b5
- (void)layoutSubcontrols;	// 0x1e7501
@end

