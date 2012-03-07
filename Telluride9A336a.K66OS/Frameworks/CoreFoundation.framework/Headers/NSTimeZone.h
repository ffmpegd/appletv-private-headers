/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSTimeZone : NSObject <NSCopying, NSCoding> {
}
+ (id)abbreviationDictionary;	// 0x30725c81
+ (id)allocWithZone:(NSZone *)zone;	// 0x306fb459
+ (id)defaultTimeZone;	// 0x306fb175
+ (id)knownTimeZoneNames;	// 0x3079be41
+ (id)localTimeZone;	// 0x3079bdfd
+ (void)resetSystemTimeZone;	// 0x3079bd8d
+ (void)setAbbreviationDictionary:(id)dictionary;	// 0x3079f7a9
+ (void)setDefaultTimeZone:(id)zone;	// 0x3079bda5
+ (id)systemTimeZone;	// 0x306fb1f1
+ (id)timeZoneDataVersion;	// 0x3079f7f5
+ (id)timeZoneForSecondsFromGMT:(int)gmt;	// 0x3072b741
+ (id)timeZoneWithAbbreviation:(id)abbreviation;	// 0x3079fb0d
+ (id)timeZoneWithName:(id)name;	// 0x306fb41d
+ (id)timeZoneWithName:(id)name data:(id)data;	// 0x3079fa85
- (id)initWithCoder:(id)coder;	// 0x3079fc19
- (id)initWithName:(id)name;	// 0x3079fae9
- (id)initWithName:(id)name data:(id)data;	// 0x3079fac5
- (unsigned long)_cfTypeID;	// 0x3079bcf5
- (id)abbreviation;	// 0x3079f87d
- (id)abbreviationForDate:(id)date;	// 0x3079bc91
- (id)copyWithZone:(NSZone *)zone;	// 0x307243dd
- (id)data;	// 0x3079bc49
- (double)daylightSavingTimeOffset;	// 0x3079f8f1
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x3079bcd9
- (id)description;	// 0x3079f9d1
- (void)encodeWithCoder:(id)coder;	// 0x3079fc1d
- (unsigned)hash;	// 0x3079f96d
- (BOOL)isDaylightSavingTime;	// 0x3079f8b9
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x3079bcb5
- (BOOL)isEqual:(id)equal;	// 0x3079f989
- (BOOL)isEqualToTimeZone:(id)timeZone;	// 0x307255c5
- (BOOL)isNSTimeZone__;	// 0x3079bcf1
- (id)localizedName:(int)name locale:(id)locale;	// 0x3079f969
- (id)name;	// 0x3079bc25
- (id)nextDaylightSavingTimeTransition;	// 0x3079f92d
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x3079bced
- (int)secondsFromGMT;	// 0x3079f841
- (int)secondsFromGMTForDate:(id)date;	// 0x3079bc6d
@end

