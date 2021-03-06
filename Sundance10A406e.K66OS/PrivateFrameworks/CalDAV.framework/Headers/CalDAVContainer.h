/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainer.h> // Unknown library

@class ICSDuration, NSString, NSURL, NSSet, NSTimeZone;

@interface CalDAVContainer : CoreDAVContainer {
	NSString *_calendarDescription;	// 64 = 0x40
	NSString *_ctag;	// 68 = 0x44
	NSString *_calendarColor;	// 72 = 0x48
	NSString *_calendarOrder;	// 76 = 0x4c
	NSString *_xmppURI;	// 80 = 0x50
	NSString *_xmppServer;	// 84 = 0x54
	NSSet *_supportedCalendarComponentSet;	// 88 = 0x58
	BOOL _subscribedStripAlarms;	// 92 = 0x5c
	BOOL _subscribedStripTodos;	// 93 = 0x5d
	BOOL _subscribedStripAttachments;	// 94 = 0x5e
	ICSDuration *_subscribedRefreshRate;	// 96 = 0x60
	NSURL *_publishURL;	// 100 = 0x64
	NSURL *_prePublishURL;	// 104 = 0x68
	BOOL _isScheduleTransparent;	// 108 = 0x6c
	NSTimeZone *_timeZone;	// 112 = 0x70
	BOOL _canBePublished;	// 116 = 0x74
	BOOL _canBeShared;	// 117 = 0x75
	NSURL *_source;	// 120 = 0x78
	NSSet *_freeBusySet;	// 124 = 0x7c
	NSURL *_scheduleDefaultCalendarURL;	// 128 = 0x80
	NSString *_defaultTimedAlarms;	// 132 = 0x84
	NSString *_defaultAllDayAlarms;	// 136 = 0x88
	NSSet *_sharees;	// 140 = 0x8c
	NSString *_supportedCalendarComponentSets;	// 144 = 0x90
}
@property(retain) NSString *calendarColor;	// G=0x32eb54cd; S=0x32eb54e1; @synthesize=_calendarColor
@property(retain) NSString *calendarDescription;	// G=0x32eb5485; S=0x32eb5499; @synthesize=_calendarDescription
@property(retain) NSString *calendarOrder;	// G=0x32eb54f1; S=0x32eb5505; @synthesize=_calendarOrder
@property(assign) BOOL canBePublished;	// G=0x32eb56d1; S=0x32eb56e9; @synthesize=_canBePublished
@property(assign) BOOL canBeShared;	// G=0x32eb5701; S=0x32eb5719; @synthesize=_canBeShared
@property(retain) NSString *ctag;	// G=0x32eb54a9; S=0x32eb54bd; @synthesize=_ctag
@property(retain) NSString *defaultAllDayAlarms;	// G=0x32eb57c1; S=0x32eb57d5; @synthesize=_defaultAllDayAlarms
@property(retain) NSString *defaultTimedAlarms;	// G=0x32eb579d; S=0x32eb57b1; @synthesize=_defaultTimedAlarms
@property(retain) NSSet *freeBusySet;	// G=0x32eb5755; S=0x32eb5769; @synthesize=_freeBusySet
@property(readonly, assign) BOOL isCalendar;	// G=0x32eb51f5; 
@property(readonly, assign) BOOL isEventContainer;	// G=0x32eb53d1; 
@property(readonly, assign) BOOL isJournalContainer;	// G=0x32eb5419; 
@property(readonly, assign) BOOL isNotification;	// G=0x32eb52c1; 
@property(readonly, assign) BOOL isPollContainer;	// G=0x32eb543d; 
@property(readonly, assign) BOOL isScheduleInbox;	// G=0x32eb5239; 
@property(readonly, assign) BOOL isScheduleOutbox;	// G=0x32eb527d; 
@property(assign) BOOL isScheduleTransparent;	// G=0x32eb567d; S=0x32eb5695; @synthesize=_isScheduleTransparent
@property(readonly, assign) BOOL isShared;	// G=0x32eb538d; 
@property(readonly, assign) BOOL isSharedOwner;	// G=0x32eb5349; 
@property(readonly, assign) BOOL isSubscribed;	// G=0x32eb5305; 
@property(readonly, assign) BOOL isTaskContainer;	// G=0x32eb53f5; 
@property(retain) NSURL *prePublishURL;	// G=0x32eb5659; S=0x32eb566d; @synthesize=_prePublishURL
@property(retain) NSURL *publishURL;	// G=0x32eb5635; S=0x32eb5649; @synthesize=_publishURL
@property(retain) NSURL *scheduleDefaultCalendarURL;	// G=0x32eb5779; S=0x32eb578d; @synthesize=_scheduleDefaultCalendarURL
@property(retain) NSSet *sharees;	// G=0x32eb57e5; S=0x32eb57f9; @synthesize=_sharees
@property(retain) NSURL *source;	// G=0x32eb5731; S=0x32eb5745; @synthesize=_source
@property(retain) ICSDuration *subscribedRefreshRate;	// G=0x32eb5611; S=0x32eb5625; @synthesize=_subscribedRefreshRate
@property(assign) BOOL subscribedStripAlarms;	// G=0x32eb5581; S=0x32eb5599; @synthesize=_subscribedStripAlarms
@property(assign) BOOL subscribedStripAttachments;	// G=0x32eb55e1; S=0x32eb55f9; @synthesize=_subscribedStripAttachments
@property(assign) BOOL subscribedStripTodos;	// G=0x32eb55b1; S=0x32eb55c9; @synthesize=_subscribedStripTodos
@property(retain) NSSet *supportedCalendarComponentSet;	// G=0x32eb555d; S=0x32eb5571; @synthesize=_supportedCalendarComponentSet
@property(retain) NSString *supportedCalendarComponentSets;	// G=0x32eb5809; S=0x32eb581d; @synthesize=_supportedCalendarComponentSets
@property(readonly, assign) BOOL supportsFreebusy;	// G=0x32eb5461; 
@property(retain) NSTimeZone *timeZone;	// G=0x32eb56ad; S=0x32eb56c1; @synthesize=_timeZone
@property(retain) NSString *xmppServer;	// G=0x32eb5539; S=0x32eb554d; @synthesize=_xmppServer
@property(retain) NSString *xmppURI;	// G=0x32eb5515; S=0x32eb5529; @synthesize=_xmppURI
+ (id)copyPropertyMappingsForParser;	// 0x32eb4569
- (BOOL)_isComponentSupportedForString:(id)string;	// 0x32eb51b1
- (void)_setTimeZoneFromProperties:(id)properties onCalendar:(id)calendar;	// 0x32eb4f5d
- (void)applyParsedProperties:(id)properties;	// 0x32eb4989
// declared property getter: - (id)calendarColor;	// 0x32eb54cd
// declared property getter: - (id)calendarDescription;	// 0x32eb5485
// declared property getter: - (id)calendarOrder;	// 0x32eb54f1
// declared property getter: - (BOOL)canBePublished;	// 0x32eb56d1
// declared property getter: - (BOOL)canBeShared;	// 0x32eb5701
// declared property getter: - (id)ctag;	// 0x32eb54a9
- (void)dealloc;	// 0x32eb3e4d
// declared property getter: - (id)defaultAllDayAlarms;	// 0x32eb57c1
// declared property getter: - (id)defaultTimedAlarms;	// 0x32eb579d
- (id)description;	// 0x32eb3ff9
// declared property getter: - (id)freeBusySet;	// 0x32eb5755
// declared property getter: - (BOOL)isCalendar;	// 0x32eb51f5
// declared property getter: - (BOOL)isEventContainer;	// 0x32eb53d1
// declared property getter: - (BOOL)isJournalContainer;	// 0x32eb5419
// declared property getter: - (BOOL)isNotification;	// 0x32eb52c1
// declared property getter: - (BOOL)isPollContainer;	// 0x32eb543d
// declared property getter: - (BOOL)isScheduleInbox;	// 0x32eb5239
// declared property getter: - (BOOL)isScheduleOutbox;	// 0x32eb527d
// declared property getter: - (BOOL)isScheduleTransparent;	// 0x32eb567d
// declared property getter: - (BOOL)isShared;	// 0x32eb538d
// declared property getter: - (BOOL)isSharedOwner;	// 0x32eb5349
// declared property getter: - (BOOL)isSubscribed;	// 0x32eb5305
// declared property getter: - (BOOL)isTaskContainer;	// 0x32eb53f5
// declared property getter: - (id)prePublishURL;	// 0x32eb5659
// declared property getter: - (id)publishURL;	// 0x32eb5635
// declared property getter: - (id)scheduleDefaultCalendarURL;	// 0x32eb5779
// declared property setter: - (void)setCalendarColor:(id)color;	// 0x32eb54e1
// declared property setter: - (void)setCalendarDescription:(id)description;	// 0x32eb5499
// declared property setter: - (void)setCalendarOrder:(id)order;	// 0x32eb5505
// declared property setter: - (void)setCanBePublished:(BOOL)published;	// 0x32eb56e9
// declared property setter: - (void)setCanBeShared:(BOOL)shared;	// 0x32eb5719
// declared property setter: - (void)setCtag:(id)ctag;	// 0x32eb54bd
// declared property setter: - (void)setDefaultAllDayAlarms:(id)alarms;	// 0x32eb57d5
// declared property setter: - (void)setDefaultTimedAlarms:(id)alarms;	// 0x32eb57b1
// declared property setter: - (void)setFreeBusySet:(id)set;	// 0x32eb5769
// declared property setter: - (void)setIsScheduleTransparent:(BOOL)transparent;	// 0x32eb5695
// declared property setter: - (void)setPrePublishURL:(id)url;	// 0x32eb566d
// declared property setter: - (void)setPublishURL:(id)url;	// 0x32eb5649
// declared property setter: - (void)setScheduleDefaultCalendarURL:(id)url;	// 0x32eb578d
// declared property setter: - (void)setSharees:(id)sharees;	// 0x32eb57f9
// declared property setter: - (void)setSource:(id)source;	// 0x32eb5745
// declared property setter: - (void)setSubscribedRefreshRate:(id)rate;	// 0x32eb5625
// declared property setter: - (void)setSubscribedStripAlarms:(BOOL)alarms;	// 0x32eb5599
// declared property setter: - (void)setSubscribedStripAttachments:(BOOL)attachments;	// 0x32eb55f9
// declared property setter: - (void)setSubscribedStripTodos:(BOOL)todos;	// 0x32eb55c9
// declared property setter: - (void)setSupportedCalendarComponentSet:(id)set;	// 0x32eb5571
// declared property setter: - (void)setSupportedCalendarComponentSets:(id)sets;	// 0x32eb581d
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x32eb56c1
// declared property setter: - (void)setXmppServer:(id)server;	// 0x32eb554d
// declared property setter: - (void)setXmppURI:(id)uri;	// 0x32eb5529
// declared property getter: - (id)sharees;	// 0x32eb57e5
// declared property getter: - (id)source;	// 0x32eb5731
// declared property getter: - (id)subscribedRefreshRate;	// 0x32eb5611
// declared property getter: - (BOOL)subscribedStripAlarms;	// 0x32eb5581
// declared property getter: - (BOOL)subscribedStripAttachments;	// 0x32eb55e1
// declared property getter: - (BOOL)subscribedStripTodos;	// 0x32eb55b1
// declared property getter: - (id)supportedCalendarComponentSet;	// 0x32eb555d
// declared property getter: - (id)supportedCalendarComponentSets;	// 0x32eb5809
// declared property getter: - (BOOL)supportsFreebusy;	// 0x32eb5461
// declared property getter: - (id)timeZone;	// 0x32eb56ad
// declared property getter: - (id)xmppServer;	// 0x32eb5539
// declared property getter: - (id)xmppURI;	// 0x32eb5515
@end

