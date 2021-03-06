/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSDate.h> // Unknown library


@interface NSDate (WBXMLAdditions)
+ (BOOL)acceptsTopLevelLeaves;	// 0x33bb4785
+ (id)dateWithActiveSyncString:(id)activeSyncString;	// 0x33bb4929
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)yearMonthDay;	// 0x33bb4a09
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)activeSyncStringWithoutSeparators;	// 0x33bb4979
+ (BOOL)frontingBasicTypes;	// 0x33bb4881
+ (BOOL)notifyOfUnknownTokens;	// 0x33bb48d5
+ (BOOL)parsingLeafNode;	// 0x33bb47d9
+ (BOOL)parsingWithSubItems;	// 0x33bb482d
- (id)activeSyncString;	// 0x33bb4a59
- (id)activeSyncStringForYearMonthDay;	// 0x33bb4af1
- (id)activeSyncStringWithoutSeparators;	// 0x33bb4aa5
@end

@interface NSDate (DataAccessUtils)
- (id)gmtDateToDateInTimeZone:(id)timeZone;	// 0x33c15579
- (id)nearestMidnight;	// 0x33c155a9
- (id)tzDateToDateInGMT:(id)gmt;	// 0x33c15549
@end

