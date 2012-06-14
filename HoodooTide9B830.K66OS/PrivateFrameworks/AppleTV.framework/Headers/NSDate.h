/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSDate.h> // Unknown library


@interface NSDate (BRDateHelpers)
+ (id)dateFromYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;	// 0x32a9e715
- (id)dateCeiledToNearestMinutes:(int)nearestMinutes;	// 0x32a9eaa9
- (id)dateFlooredToNearestMinutes:(int)nearestMinutes;	// 0x32a9e9a9
- (BOOL)isToday;	// 0x32a9e84d
- (BOOL)isTomorrow;	// 0x32a9e935
- (BOOL)isYesterday;	// 0x32a9e8c1
@end

@interface NSDate (BRDateDisplay)
- (id)expiryDescription;	// 0x32a9f09d
- (id)stringForDisplayingMonthDayYear;	// 0x32a9ee1d
- (id)stringForGeneralDisplay;	// 0x32a9ec65
- (id)stringForMonthDayFormat;	// 0x32a9eec9
- (id)stringForReleaseDateDisplay;	// 0x32a9ed79
- (id)stringFromDateForTVShows;	// 0x32a9ebc9
@end

@interface NSDate (ISO8601)
- (id)stringForISO8601CombinedDateAndTime;	// 0x32a9f2b9
@end

@interface NSDate (BRDisplayString)
- (id)displayString;	// 0x32aa05f1
@end
