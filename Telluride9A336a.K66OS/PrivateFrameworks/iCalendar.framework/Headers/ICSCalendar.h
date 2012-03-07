/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSMutableSet, ICSColor, NSMutableDictionary, NSString, ICSDuration;

@interface ICSCalendar : ICSComponent {
	NSMutableSet *_keys;	// 12 = 0xc
	NSMutableDictionary *_masters;	// 16 = 0x10
	NSMutableDictionary *_occurrences;	// 20 = 0x14
	NSMutableDictionary *_timezones;	// 24 = 0x18
}
@property(retain) NSString *calscale;	// G=0x34625ab1; S=0x34625af9; 
@property(assign) int method;	// G=0x34625b19; S=0x34625b71; 
@property(retain) NSString *prodid;	// G=0x34625bc1; S=0x34625c09; 
@property(retain) NSString *version;	// G=0x34625c29; S=0x34625c71; 
@property(retain) ICSDuration *x_apple_auto_refresh;	// G=0x34625c91; S=0x34625cf5; 
@property(retain) ICSColor *x_apple_calendar_color;	// G=0x34625d25; S=0x34625ea1; 
@property(assign) BOOL x_apple_ignore_on_restore;	// @dynamic
@property(assign) int x_calendarserver_access;	// @dynamic
@property(retain) NSString *x_wr_caldesc;	// G=0x34625f6d; S=0x34625f4d; 
@property(retain) NSString *x_wr_calname;	// G=0x34625fb5; S=0x34625ffd; 
@property(retain) NSString *x_wr_relcalid;	// G=0x3462601d; S=0x34626065; 
@property(retain) NSString *x_wr_timezone;	// G=0x34626085; S=0x346260cd; 
+ (id)ICSStringFromCalendarServerAccess:(int)calendarServerAccess;	// 0x3462595d
+ (id)ICSStringFromMethod:(int)method;	// 0x34625861
+ (int)calendarServerAccessFromICSString:(id)icsstring;	// 0x346258d5
+ (id)calendarWithKnownTimeZones;	// 0x346253a1
+ (id)defaultProdid;	// 0x346256a1
+ (int)methodFromICSString:(id)icsstring;	// 0x34625769
+ (id)name;	// 0x346255bd
+ (void)setDefaultProdid:(id)prodid;	// 0x346255c9
- (id)init;	// 0x3462599d
- (void)_addComponent:(id)component;	// 0x34626e05
- (void)_addTimeZonesInComponent:(id)component toDictionary:(id)dictionary;	// 0x34626691
- (void)_addTimeZonesInComponent:(id)component toSet:(id)set;	// 0x3462641d
- (id)_init;	// 0x346254ed
- (id)_timeZonesForComponents:(id)components options:(int)options;	// 0x34626959
- (void)addComponent:(id)component;	// 0x34627315
// declared property getter: - (id)calscale;	// 0x34625ab1
- (id)componentForKey:(id)key;	// 0x34627125
- (id)componentKeys;	// 0x34627105
- (id)componentOccurrencesForKey:(id)key;	// 0x34627145
- (void)dealloc;	// 0x34625a29
- (void)fixComponent;	// 0x346274d5
- (void)fixEntities;	// 0x34627579
- (void)fixPropertiesInheritance;	// 0x3462737d
// declared property getter: - (int)method;	// 0x34625b19
// declared property getter: - (id)prodid;	// 0x34625bc1
// declared property setter: - (void)setCalscale:(id)calscale;	// 0x34625af9
- (void)setComponents:(id)components;	// 0x34627301
- (void)setComponents:(id)components options:(int)options;	// 0x34627185
- (void)setComponents:(id)components timeZones:(BOOL)zones;	// 0x34627165
// declared property setter: - (void)setMethod:(int)method;	// 0x34625b71
// declared property setter: - (void)setProdid:(id)prodid;	// 0x34625c09
// declared property setter: - (void)setVersion:(id)version;	// 0x34625c71
// declared property setter: - (void)setX_apple_auto_refresh:(id)refresh;	// 0x34625cf5
// declared property setter: - (void)setX_apple_calendar_color:(id)color;	// 0x34625ea1
// declared property setter: - (void)setX_wr_caldesc:(id)caldesc;	// 0x34625f4d
// declared property setter: - (void)setX_wr_calname:(id)calname;	// 0x34625ffd
// declared property setter: - (void)setX_wr_relcalid:(id)relcalid;	// 0x34626065
// declared property setter: - (void)setX_wr_timezone:(id)timezone;	// 0x346260cd
- (id)systemCalendarForDate:(id)date options:(int)options;	// 0x346261ed
- (id)systemDateForDate:(id)date options:(int)options;	// 0x346262b5
- (id)systemTimeZoneForDate:(id)date;	// 0x346260ed
- (id)timeZoneForKey:(id)key;	// 0x3462735d
// declared property getter: - (id)version;	// 0x34625c29
// declared property getter: - (id)x_apple_auto_refresh;	// 0x34625c91
// declared property getter: - (id)x_apple_calendar_color;	// 0x34625d25
// declared property getter: - (id)x_wr_caldesc;	// 0x34625f6d
// declared property getter: - (id)x_wr_calname;	// 0x34625fb5
// declared property getter: - (id)x_wr_relcalid;	// 0x3462601d
// declared property getter: - (id)x_wr_timezone;	// 0x34626085
@end

