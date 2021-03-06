/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSTimeZone, NSDate;

@interface NSDateCheckingResult : NSTextCheckingResult {
	NSRange _range;	// 4 = 0x4
	NSDate *_date;	// 12 = 0xc
	NSTimeZone *_timeZone;	// 16 = 0x10
	double _duration;	// 20 = 0x14
	NSDate *_referenceDate;	// 28 = 0x1c
	id _underlyingResult;	// 32 = 0x20
	BOOL _timeIsSignificant;	// 36 = 0x24
	BOOL _timeIsApproximate;	// 37 = 0x25
}
@property(readonly, retain) NSDate *date;	// G=0x373f79c9; converted property
@property(readonly, assign) double duration;	// G=0x373f79e9; 
@property(readonly, assign) NSRange range;	// G=0x373f77b1; converted property
@property(readonly, assign) NSDate *referenceDate;	// G=0x373f7a01; 
@property(readonly, assign) BOOL timeIsApproximate;	// G=0x373f7a31; 
@property(readonly, assign) BOOL timeIsSignificant;	// G=0x373f7a21; 
@property(readonly, assign) NSTimeZone *timeZone;	// G=0x373f79d9; 
@property(readonly, assign) void *underlyingResult;	// G=0x373f7a11; 
- (id)initWithCoder:(id)coder;	// 0x373f75dd
- (id)initWithRange:(NSRange)range date:(id)date;	// 0x373f72c1
- (id)initWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration;	// 0x373f727d
- (id)initWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration referenceDate:(id)date5;	// 0x373f7239
- (id)initWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration referenceDate:(id)date5 underlyingResult:(void *)result;	// 0x373f71f5
- (id)initWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration referenceDate:(id)date5 underlyingResult:(void *)result timeIsSignificant:(BOOL)significant timeIsApproximate:(BOOL)approximate;	// 0x373f70e9
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x373f792d
// converted property getter: - (id)date;	// 0x373f79c9
- (void)dealloc;	// 0x373f7309
- (id)description;	// 0x373f7395
// declared property getter: - (double)duration;	// 0x373f79e9
- (void)encodeWithCoder:(id)coder;	// 0x373f7481
// converted property getter: - (NSRange)range;	// 0x373f77b1
// declared property getter: - (id)referenceDate;	// 0x373f7a01
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x373f77c9
- (unsigned long long)resultType;	// 0x373f77a9
// declared property getter: - (BOOL)timeIsApproximate;	// 0x373f7a31
// declared property getter: - (BOOL)timeIsSignificant;	// 0x373f7a21
// declared property getter: - (id)timeZone;	// 0x373f79d9
// declared property getter: - (void *)underlyingResult;	// 0x373f7a11
@end

