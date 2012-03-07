/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSString *_phoneNumber;	// 12 = 0xc
	id _underlyingResult;	// 16 = 0x10
}
@property(readonly, retain) NSString *phoneNumber;	// G=0x33736295; converted property
@property(readonly, assign) NSRange range;	// G=0x337360d1; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x337362a5; 
- (id)initWithCoder:(id)coder;	// 0x33735fa1
- (id)initWithRange:(NSRange)range phoneNumber:(id)number;	// 0x33735e25
- (id)initWithRange:(NSRange)range phoneNumber:(id)number underlyingResult:(void *)result;	// 0x33735d91
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x337361f9
- (void)dealloc;	// 0x33735e49
- (id)description;	// 0x33735ea9
- (void)encodeWithCoder:(id)coder;	// 0x33735f19
// converted property getter: - (id)phoneNumber;	// 0x33736295
// converted property getter: - (NSRange)range;	// 0x337360d1
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x337360ed
- (unsigned long long)resultType;	// 0x337360c9
// declared property getter: - (void *)underlyingResult;	// 0x337362a5
@end

