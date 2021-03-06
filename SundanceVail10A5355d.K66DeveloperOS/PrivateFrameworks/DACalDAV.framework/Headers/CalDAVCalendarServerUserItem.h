/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <CalDAVCalendarServerUserItem.h> // Unknown library
#import "DACalDAV-Structs.h"


@interface CalDAVCalendarServerUserItem (ShareeConversion)
- (id)initWithCalSharee:(void *)calSharee;	// 0x340467c1
- (void *)createCalShareeInDatabase:(CalDatabase *)database andCalendar:(void *)calendar;	// 0x34046855
- (BOOL)updateCalSharee:(void *)sharee;	// 0x34046b09
@end

