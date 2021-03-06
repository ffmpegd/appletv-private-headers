/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EKTimeZone : NSObject <NSCopying> {
@private
	NSString *_name;	// 4 = 0x4
	void *_internal;	// 8 = 0x8
	long _lastStart;	// 12 = 0xc
	long _lastEnd;	// 16 = 0x10
	unsigned _lastIndex;	// 20 = 0x14
	double _offset;	// 24 = 0x18
}
@property(readonly, retain) NSString *name;	// G=0x327a7b35; converted property
+ (id)timeZoneWithNSTimeZone:(id)nstimeZone;	// 0x3274e711
+ (id)timeZoneWithName:(id)name;	// 0x3274caa1
- (id)initWithName:(id)name;	// 0x3274cbfd
- (id)initWithOffset:(double)offset name:(id)name;	// 0x327a7885
- (id)NSTimeZone;	// 0x32759fb9
- (id)_abbreviationForIndex:(unsigned)index;	// 0x327a7b6d
- (unsigned)_indexForAbsoluteTime:(double)absoluteTime;	// 0x3274d5ad
- (id)abbreviation;	// 0x327a7ca5
- (id)abbreviationForAbsoluteTime:(double)absoluteTime;	// 0x327a7c41
- (id)abbreviationForDate:(id)date;	// 0x327a7c0d
- (id)copyWithZone:(NSZone *)zone;	// 0x3274dfc1
- (void)dealloc;	// 0x327a79d9
- (id)description;	// 0x327a7ad5
- (unsigned)hash;	// 0x327a7ab5
- (BOOL)isEqual:(id)equal;	// 0x327a7a3d
// converted property getter: - (id)name;	// 0x327a7b35
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)time;	// 0x3274decd
- (double)secondsFromGMT;	// 0x327a7cc9
- (double)secondsFromGMTForAbsoluteTime:(double)absoluteTime;	// 0x3274d545
- (double)secondsFromGMTForDate:(id)date;	// 0x327a7bd9
@end

