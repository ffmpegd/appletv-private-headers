/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString, NSDate, NSTimeZone;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying> {
@private
	NSString *_title;	// 4 = 0x4
	NSString *_location;	// 8 = 0x8
	NSDate *_date;	// 12 = 0xc
	NSDate *_endDate;	// 16 = 0x10
	NSTimeZone *_timeZone;	// 20 = 0x14
	NSURL *_action;	// 24 = 0x18
	BOOL _allDay;	// 28 = 0x1c
	BOOL _tentative;	// 29 = 0x1d
	NSURL *_entityID;	// 32 = 0x20
	int _proximity;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSURL *action;	// G=0x33235b41; @synthesize=_action
@property(readonly, assign, nonatomic) BOOL allDay;	// G=0x33235b51; @synthesize=_allDay
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x33235b21; @synthesize=_endDate
@property(readonly, assign, nonatomic) NSURL *entityID;	// G=0x33235b71; @synthesize=_entityID
@property(readonly, assign, nonatomic) NSDate *eventDate;	// G=0x33235b11; @synthesize=_date
@property(readonly, assign, nonatomic) NSTimeZone *eventTimeZone;	// G=0x33235b31; @synthesize=_timeZone
@property(readonly, assign, nonatomic) NSString *location;	// G=0x33235b01; @synthesize=_location
@property(readonly, assign, nonatomic) int proximity;	// G=0x33235b81; @synthesize=_proximity
@property(readonly, assign, nonatomic) BOOL tentative;	// G=0x33235b61; @synthesize=_tentative
@property(readonly, assign, nonatomic) NSString *title;	// G=0x33235af1; @synthesize=_title
+ (id)alertInfoWithTitle:(id)title location:(id)location date:(id)date endDate:(id)date4 timeZone:(id)zone allDay:(BOOL)day tentative:(BOOL)tentative entityID:(id)anId action:(id)action proximity:(int)proximity;	// 0x33235715
- (id)initWithTitle:(id)title location:(id)location date:(id)date endDate:(id)date4 timeZone:(id)zone allDay:(BOOL)day tentative:(BOOL)tentative entityID:(id)anId action:(id)action proximity:(int)proximity;	// 0x33235779
// declared property getter: - (id)action;	// 0x33235b41
// declared property getter: - (BOOL)allDay;	// 0x33235b51
- (id)copyWithZone:(NSZone *)zone;	// 0x332359e5
- (void)dealloc;	// 0x332358a1
- (id)description;	// 0x33235951
// declared property getter: - (id)endDate;	// 0x33235b21
// declared property getter: - (id)entityID;	// 0x33235b71
// declared property getter: - (id)eventDate;	// 0x33235b11
// declared property getter: - (id)eventTimeZone;	// 0x33235b31
- (unsigned)hash;	// 0x332359f5
- (BOOL)isEqual:(id)equal;	// 0x33235a35
// declared property getter: - (id)location;	// 0x33235b01
// declared property getter: - (int)proximity;	// 0x33235b81
// declared property getter: - (BOOL)tentative;	// 0x33235b61
// declared property getter: - (id)title;	// 0x33235af1
@end

