/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSArray, NSString, NSURL, ICSDate, ICSUserAddress, ICSDuration;

@interface ICSEvent : ICSComponent {
}
@property(retain) NSArray *attach;	// @dynamic
@property(retain) NSArray *attendee;	// @dynamic
@property(assign) int classification;	// @dynamic
@property(retain) ICSDate *created;	// @dynamic
@property(retain) NSString *description;	// @dynamic
@property(retain) ICSDate *dtend;	// @dynamic
@property(retain) ICSDate *dtstamp;	// @dynamic
@property(retain) ICSDate *dtstart;	// @dynamic
@property(retain) ICSDuration *duration;	// @dynamic
@property(retain) NSArray *exdate;	// @dynamic
@property(retain) NSArray *exrule;	// @dynamic
@property(retain) ICSDate *last_modified;	// @dynamic
@property(retain) NSString *location;	// @dynamic
@property(retain) ICSUserAddress *organizer;	// @dynamic
@property(retain) NSArray *rdate;	// @dynamic
@property(retain) ICSDate *recurrence_id;	// @dynamic
@property(retain) NSArray *rrule;	// @dynamic
@property(assign) unsigned sequence;	// @dynamic
@property(assign) int status;	// @dynamic
@property(retain) NSString *summary;	// @dynamic
@property(assign) int transp;	// G=0x3264c25d; S=0x3264c211; 
@property(retain) NSString *uid;	// @dynamic
@property(retain) NSURL *url;	// @dynamic
@property(assign) BOOL x_apple_dontschedule;	// G=0x3264c0b9; S=0x3264c105; 
@property(retain) NSString *x_apple_dropbox;	// @dynamic
@property(assign) int x_apple_ews_busystatus;	// G=0x3264bdb1; S=0x3264bd65; 
@property(retain) NSString *x_apple_ews_changekey;	// @dynamic
@property(retain) NSString *x_apple_ews_itemid;	// @dynamic
@property(assign) BOOL x_apple_ews_needsserverconfirmation;	// @dynamic
@property(retain) NSString *x_apple_ews_permission;	// @dynamic
@property(assign) BOOL x_apple_ignore_on_restore;	// @dynamic
@property(assign) BOOL x_apple_needs_reply;	// G=0x3264c06d; S=0x3264c01d; @dynamic
@property(retain) NSArray *x_calendarserver_attendee_comment;	// G=0x3264c1f1; S=0x3264c1d1; 
@property(retain) NSString *x_calendarserver_private_comment;	// G=0x3264c195; S=0x3264c175; 
@property(assign) BOOL x_wr_itipalreadysent;	// G=0x3264bfc9; S=0x3264bff1; @dynamic
@property(assign) BOOL x_wr_itipstatusattendeeml;	// G=0x3264bf35; S=0x3264bf9d; @dynamic
@property(assign) BOOL x_wr_itipstatusml;	// G=0x3264be61; S=0x3264bec9; @dynamic
@property(assign) BOOL x_wr_rsvpneeded;	// G=0x3264be0d; S=0x3264be35; @dynamic
+ (id)name;	// 0x3264bd59
- (void)fixComponent;	// 0x3264aa7d
- (BOOL)isAllDay;	// 0x3264c2b9
// declared property setter: - (void)setTransp:(int)transp;	// 0x3264c211
// declared property setter: - (void)setX_apple_dontschedule:(BOOL)dontschedule;	// 0x3264c105
// declared property setter: - (void)setX_apple_ews_busystatus:(int)busystatus;	// 0x3264bd65
// declared property setter: - (void)setX_apple_needs_reply:(BOOL)reply;	// 0x3264c01d
// declared property setter: - (void)setX_calendarserver_attendee_comment:(id)comment;	// 0x3264c1d1
// declared property setter: - (void)setX_calendarserver_private_comment:(id)comment;	// 0x3264c175
// declared property setter: - (void)setX_wr_itipalreadysent:(BOOL)itipalreadysent;	// 0x3264bff1
// declared property setter: - (void)setX_wr_itipstatusattendeeml:(BOOL)itipstatusattendeeml;	// 0x3264bf9d
// declared property setter: - (void)setX_wr_itipstatusml:(BOOL)itipstatusml;	// 0x3264bec9
// declared property setter: - (void)setX_wr_rsvpneeded:(BOOL)rsvpneeded;	// 0x3264be35
// declared property getter: - (int)transp;	// 0x3264c25d
- (BOOL)validate:(id *)validate;	// 0x3264c2e5
// declared property getter: - (BOOL)x_apple_dontschedule;	// 0x3264c0b9
// declared property getter: - (int)x_apple_ews_busystatus;	// 0x3264bdb1
// declared property getter: - (BOOL)x_apple_needs_reply;	// 0x3264c06d
// declared property getter: - (id)x_calendarserver_attendee_comment;	// 0x3264c1f1
// declared property getter: - (id)x_calendarserver_private_comment;	// 0x3264c195
// declared property getter: - (BOOL)x_wr_itipalreadysent;	// 0x3264bfc9
// declared property getter: - (BOOL)x_wr_itipstatusattendeeml;	// 0x3264bf35
// declared property getter: - (BOOL)x_wr_itipstatusml;	// 0x3264be61
// declared property getter: - (BOOL)x_wr_rsvpneeded;	// 0x3264be0d
@end

