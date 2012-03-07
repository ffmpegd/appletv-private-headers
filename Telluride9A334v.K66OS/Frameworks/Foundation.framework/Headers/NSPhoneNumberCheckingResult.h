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
@property(readonly, retain) NSString *phoneNumber;	// G=0x306e6295; converted property
@property(readonly, assign) NSRange range;	// G=0x306e60d1; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x306e62a5; 
- (id)initWithCoder:(id)coder;	// 0x306e5fa1
- (id)initWithRange:(NSRange)range phoneNumber:(id)number;	// 0x306e5e25
- (id)initWithRange:(NSRange)range phoneNumber:(id)number underlyingResult:(void *)result;	// 0x306e5d91
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x306e61f9
- (void)dealloc;	// 0x306e5e49
- (id)description;	// 0x306e5ea9
- (void)encodeWithCoder:(id)coder;	// 0x306e5f19
// converted property getter: - (id)phoneNumber;	// 0x306e6295
// converted property getter: - (NSRange)range;	// 0x306e60d1
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x306e60ed
- (unsigned long long)resultType;	// 0x306e60c9
// declared property getter: - (void *)underlyingResult;	// 0x306e62a5
@end

