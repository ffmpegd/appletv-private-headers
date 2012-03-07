/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSString, NSURL;

@interface _EKInvitationItem : NSObject {
@private
	NSString *_title;	// 4 = 0x4
	NSString *_location;	// 8 = 0x8
	NSString *_organizerName;	// 12 = 0xc
	NSDate *_startDate;	// 16 = 0x10
	NSDate *_endDate;	// 20 = 0x14
	BOOL _floating;	// 24 = 0x18
	BOOL _allDay;	// 25 = 0x19
	int _eventID;	// 28 = 0x1c
	NSURL *_eventURI;	// 32 = 0x20
	int _status;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x327bc6b5; @synthesize=_endDate
@property(readonly, assign, nonatomic) int eventID;	// G=0x327bc6e5; @synthesize=_eventID
@property(readonly, assign, nonatomic) NSURL *eventURI;	// G=0x327bc6f5; @synthesize=_eventURI
@property(readonly, assign, nonatomic) BOOL isAllDay;	// G=0x327bc6d5; @synthesize=_allDay
@property(readonly, assign, nonatomic) BOOL isFloating;	// G=0x327bc6c5; @synthesize=_floating
@property(readonly, assign, nonatomic) NSString *location;	// G=0x327bc695; @synthesize=_location
@property(readonly, assign, nonatomic) NSString *organizerName;	// G=0x327bc685; @synthesize=_organizerName
@property(readonly, assign, nonatomic) NSDate *startDate;	// G=0x327bc6a5; @synthesize=_startDate
@property(readonly, assign, nonatomic) int status;	// G=0x327bc705; @synthesize=_status
@property(readonly, assign, nonatomic) NSString *title;	// G=0x327bc675; @synthesize=_title
- (id)initWithEvent:(id)event;	// 0x327bc441
- (id)initWithTitle:(id)title location:(id)location organizerName:(id)name startDate:(id)date endDate:(id)date5 floating:(BOOL)floating allDay:(BOOL)day eventID:(int)anId eventURI:(id)uri status:(int)status;	// 0x327bc31d
- (void)dealloc;	// 0x327bc5d9
// declared property getter: - (id)endDate;	// 0x327bc6b5
// declared property getter: - (int)eventID;	// 0x327bc6e5
// declared property getter: - (id)eventURI;	// 0x327bc6f5
// declared property getter: - (BOOL)isAllDay;	// 0x327bc6d5
// declared property getter: - (BOOL)isFloating;	// 0x327bc6c5
// declared property getter: - (id)location;	// 0x327bc695
// declared property getter: - (id)organizerName;	// 0x327bc685
// declared property getter: - (id)startDate;	// 0x327bc6a5
// declared property getter: - (int)status;	// 0x327bc705
// declared property getter: - (id)title;	// 0x327bc675
@end
