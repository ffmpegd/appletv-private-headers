/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSArray, ICSTrigger, NSString, ICSStructuredLocation;

@interface ICSAlarm : ICSComponent {
}
@property(assign) int action;	// G=0x3464eea5; S=0x3464eefd; 
@property(retain) NSArray *attach;	// @dynamic
@property(retain) NSArray *attendee;	// @dynamic
@property(retain) NSString *description;	// @dynamic
@property(retain) NSString *summary;	// @dynamic
@property(retain) ICSTrigger *trigger;	// @dynamic
@property(retain) NSString *x_apple_proximity;	// G=0x3464efb5; S=0x3464effd; 
@property(retain) ICSStructuredLocation *x_apple_structured_location;	// @dynamic
@property(retain) NSString *x_wr_alarmuid;	// G=0x3464ef4d; S=0x3464ef95; 
+ (id)ICSStringFromAction:(int)action;	// 0x3464ee65
+ (int)actionFromICSString:(id)icsstring;	// 0x3464eddd
+ (id)name;	// 0x3464edd1
// declared property getter: - (int)action;	// 0x3464eea5
- (void)fixAlarm;	// 0x346276a9
// declared property setter: - (void)setAction:(int)action;	// 0x3464eefd
// declared property setter: - (void)setX_apple_proximity:(id)proximity;	// 0x3464effd
// declared property setter: - (void)setX_wr_alarmuid:(id)alarmuid;	// 0x3464ef95
// declared property getter: - (id)x_apple_proximity;	// 0x3464efb5
// declared property getter: - (id)x_wr_alarmuid;	// 0x3464ef4d
@end

