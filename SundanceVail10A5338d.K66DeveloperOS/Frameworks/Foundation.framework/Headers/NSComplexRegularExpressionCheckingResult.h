/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSRegularExpressionCheckingResult.h"
#import "Foundation-Structs.h"

@class NSArray, NSRegularExpression;

@interface NSComplexRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
	NSRegularExpression *_regularExpression;	// 4 = 0x4
	NSArray *_rangeArray;	// 8 = 0x8
}
@property(readonly, retain) NSArray *rangeArray;	// G=0x373f99e1; converted property
@property(readonly, retain) NSRegularExpression *regularExpression;	// G=0x373f97a1; converted property
- (id)initWithRangeArray:(id)rangeArray regularExpression:(id)expression;	// 0x373f9659
- (id)initWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x373f95c5
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x373f97f9
- (void)dealloc;	// 0x373f973d
- (unsigned)numberOfRanges;	// 0x373f9979
- (NSRange)range;	// 0x373f97b1
// converted property getter: - (id)rangeArray;	// 0x373f99e1
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x373f9999
// converted property getter: - (id)regularExpression;	// 0x373f97a1
@end

