/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSRegularExpressionCheckingResult.h"
#import "Foundation-Structs.h"

@class NSRegularExpression;

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
	NSRegularExpression *_regularExpression;	// 4 = 0x4
	NSRange _ranges[3];	// 8 = 0x8
}
@property(readonly, retain) NSRegularExpression *regularExpression;	// G=0x325f988d; converted property
- (id)initWithRangeArray:(id)rangeArray regularExpression:(id)expression;	// 0x325f97b9
- (id)initWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x3254c93d
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x325f98b5
- (void)dealloc;	// 0x3254caf1
- (unsigned)numberOfRanges;	// 0x325f9981
- (NSRange)range;	// 0x325f989d
- (id)rangeArray;	// 0x325f99b5
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x3254ca65
// converted property getter: - (id)regularExpression;	// 0x325f988d
@end

