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
@interface ATVMusicStoreUserReviewsControl : BRControl {
	NSDictionary *_itemDictionary;	// 84 = 0x54
}
+ (id)userReviewsControlWithDictionary:(id)dictionary;	// 0x1f45fd
- (id)initWithDictionary:(id)dictionary;	// 0x1f4639
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x1f51d9
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x1f50d9
- (id)_largeImageForRating:(float)rating;	// 0x1f53e5
- (id)_smallImageForRating:(float)rating;	// 0x1f52c9
- (id)accessibilityLabel;	// 0x1f50bd
- (void)dealloc;	// 0x1f4691
- (void)layoutSubcontrols;	// 0x1f46dd
@end
