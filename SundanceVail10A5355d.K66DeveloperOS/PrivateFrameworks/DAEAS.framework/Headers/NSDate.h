/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSDate.h> // Unknown library


@interface NSDate (WBXMLAdditions)
+ (BOOL)acceptsTopLevelLeaves;	// 0x34b4d82d
+ (id)dateWithActiveSyncString:(id)activeSyncString;	// 0x34b4d9d1
+ (id)dateWithActiveSyncStringFromYearMonthDay:(id)yearMonthDay;	// 0x34b4dab1
+ (id)dateWithActiveSyncStringWithoutSeparators:(id)activeSyncStringWithoutSeparators;	// 0x34b4da21
+ (BOOL)frontingBasicTypes;	// 0x34b4d929
+ (BOOL)notifyOfUnknownTokens;	// 0x34b4d97d
+ (BOOL)parsingLeafNode;	// 0x34b4d881
+ (BOOL)parsingWithSubItems;	// 0x34b4d8d5
- (id)activeSyncString;	// 0x34b4db01
- (id)activeSyncStringForYearMonthDay;	// 0x34b4db99
- (id)activeSyncStringWithoutSeparators;	// 0x34b4db4d
@end

@interface NSDate (DataAccessUtils)
- (id)gmtDateToDateInTimeZone:(id)timeZone;	// 0x34bae201
- (id)nearestMidnight;	// 0x34bae231
- (id)tzDateToDateInGMT:(id)gmt;	// 0x34bae1d1
@end
