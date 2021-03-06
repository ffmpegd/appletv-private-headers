/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSArray, NSRegularExpression;

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult {
}
@property(readonly, assign) NSArray *rangeArray;	// G=0x355f83b9; 
@property(readonly, assign) NSRegularExpression *regularExpression;	// G=0x355f83b5; 
- (id)initWithCoder:(id)coder;	// 0x355f84f1
- (id)initWithRangeArray:(id)rangeArray regularExpression:(id)expression;	// 0x355f8391
- (id)initWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x355f836d
- (id)description;	// 0x355f83bd
- (void)encodeWithCoder:(id)coder;	// 0x355f842d
// declared property getter: - (id)rangeArray;	// 0x355f83b9
// declared property getter: - (id)regularExpression;	// 0x355f83b5
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x355f85f5
- (unsigned long long)resultType;	// 0x355f85ed
@end

