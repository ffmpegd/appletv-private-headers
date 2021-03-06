/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"


@interface NSSpellCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
}
@property(readonly, assign) NSRange range;	// G=0x3280842d; converted property
- (id)initWithCoder:(id)coder;	// 0x3280c0ad
- (id)initWithRange:(NSRange)range;	// 0x32809df1
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x3280b4d1
- (void)encodeWithCoder:(id)coder;	// 0x32808ea9
// converted property getter: - (NSRange)range;	// 0x3280842d
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x3280b575
- (unsigned long long)resultType;	// 0x32808425
@end

