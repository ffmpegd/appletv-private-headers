/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSArray.h> // Unknown library


@interface NSArray (UIStringDrawingPrivate)
- (CGSize)_drawComponentsJoinedByString:(id)string atPoint:(CGPoint *)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;	// 0x301d4769
- (CGSize)drawComponentsJoinedByString:(id)string atPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;	// 0x301d4bed
- (CGSize)sizeOfComponentsJoinedByString:(id)componentsJoinedByString withFont:(id)font forWidth:(float)width lineBreakMode:(int)mode;	// 0x301d4bb1
@end

@interface NSArray (UICollectionAdditions)
- (id)_nextToLastObject;	// 0x300590d1
@end

@interface NSArray (UICollectionAdditions_Performance)
- (id)_initWithObjectsFromArray:(id)array range:(NSRange)range;	// 0x301dd48d
- (void)_makeObjectsPerformSelector:(SEL)selector object:(id)object range:(NSRange)range;	// 0x301dd515
@end

@interface NSArray (UIKBExtras)
- (id)_intersectionWithArray:(id)array;	// 0x30241589
- (id)_kb_firstObject;	// 0x302414bd
- (BOOL)_kb_firstObjectsEqual:(unsigned)equal;	// 0x3024150d
- (BOOL)_kb_firstTwoObjectsEqual;	// 0x302414f5
- (NSRange)_rangeWithStartIndex:(int)startIndex endIndex:(int)index;	// 0x3024165d
- (id)intersectionWithArray:(id)array;	// 0x302416bd
- (NSRange)rangeWithStartIndex:(int)startIndex endIndex:(int)index;	// 0x302416cd
@end

@interface NSArray (UIPageViewControllerArrayAdditions)
- (id)uiFirstObject;	// 0x303aa79d
- (id)uiOnlyObject;	// 0x303aa7d5
@end
