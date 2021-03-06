/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILocalNotification.h"
#import "UIKit-Structs.h"

@class NSData, NSString, NSTimeZone, NSCalendar, NSDate;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification {
@private
	NSDate *fireDate;	// 4 = 0x4
	NSTimeZone *timeZone;	// 8 = 0x8
	unsigned repeatInterval;	// 12 = 0xc
	NSCalendar *repeatCalendar;	// 16 = 0x10
	int totalRepeatCount;	// 20 = 0x14
	int remainingRepeatCount;	// 24 = 0x18
	NSString *alertBody;	// 28 = 0x1c
	BOOL hasAction;	// 32 = 0x20
	NSString *alertAction;	// 36 = 0x24
	NSString *alertLaunchImage;	// 40 = 0x28
	NSString *soundName;	// 44 = 0x2c
	int applicationIconBadgeNumber;	// 48 = 0x30
	NSData *userInfoData;	// 52 = 0x34
	BOOL hideAlertTitle;	// 56 = 0x38
	BOOL allowSnooze;	// 57 = 0x39
	BOOL soundNameIsARingtone;	// 58 = 0x3a
	BOOL interruptAudioAndLockDevice;	// 59 = 0x3b
	BOOL resumeApplicationInBackground;	// 60 = 0x3c
	BOOL fireNotificationsWhenAppRunning;	// 61 = 0x3d
	BOOL showAlarmStatusBarItem;	// 62 = 0x3e
	NSString *customLockSliderLabel;	// 64 = 0x40
	BOOL isSystemAlert;	// 68 = 0x44
}
@property(retain) NSString *alertAction;	// G=0x3035abd1; S=0x3035abe1; converted property
@property(retain) NSString *alertBody;	// G=0x3035ab7d; S=0x3035ab8d; converted property
@property(retain) NSString *alertLaunchImage;	// G=0x3035ac05; S=0x3035ac15; converted property
@property(assign) BOOL allowSnooze;	// G=0x3035acdd; S=0x3035aced; converted property
@property(assign) int applicationIconBadgeNumber;	// G=0x3035ac6d; S=0x3035ac7d; converted property
@property(retain) NSString *customLockSliderLabel;	// G=0x3035ad9d; S=0x3035adad; converted property
@property(retain) NSDate *fireDate;	// G=0x3035aac1; S=0x3035aad1; converted property
@property(assign) BOOL fireNotificationsWhenAppRunning;	// G=0x3035ad5d; S=0x3035ad6d; converted property
@property(assign) BOOL hasAction;	// G=0x3035abb1; S=0x3035abc1; converted property
@property(assign) BOOL hideAlertTitle;	// G=0x3035acbd; S=0x3035accd; converted property
@property(assign) BOOL interruptAudioAndLockDevice;	// G=0x3035ad1d; S=0x3035ad2d; converted property
@property(assign) BOOL isSystemAlert;	// G=0x3035add1; S=0x3035ade1; converted property
@property(assign) int remainingRepeatCount;	// G=0x3035ac9d; S=0x3035acad; converted property
@property(retain) NSCalendar *repeatCalendar;	// G=0x3035ab49; S=0x3035ab59; converted property
@property(assign) unsigned repeatInterval;	// G=0x3035ab29; S=0x3035ab39; converted property
@property(assign) BOOL resumeApplicationInBackground;	// G=0x3035ad3d; S=0x3035ad4d; converted property
@property(assign) BOOL showAlarmStatusBarItem;	// G=0x3035ad7d; S=0x3035ad8d; converted property
@property(retain) NSString *soundName;	// G=0x3035ac39; S=0x3035ac49; converted property
@property(assign) BOOL soundNameIsARingtone;	// G=0x3035acfd; S=0x3035ad0d; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x3035aaf5; S=0x3035ab05; converted property
@property(assign) int totalRepeatCount;	// G=0x3035ac8d; S=0x30358b85; converted property
@property(retain) id userInfo;	// G=0x30359ea5; S=0x30359d61; converted property
- (id)init;	// 0x30358ba5
- (id)initWithCoder:(id)coder;	// 0x30358ce9
- (void)_setUserInfoData:(id)data;	// 0x30359d21
// converted property getter: - (id)alertAction;	// 0x3035abd1
// converted property getter: - (id)alertBody;	// 0x3035ab7d
// converted property getter: - (id)alertLaunchImage;	// 0x3035ac05
// converted property getter: - (BOOL)allowSnooze;	// 0x3035acdd
// converted property getter: - (int)applicationIconBadgeNumber;	// 0x3035ac6d
- (void)clearNonSystemProperties;	// 0x3035aa29
- (int)compareFireDates:(id)dates;	// 0x30359c81
- (id)copyWithZone:(NSZone *)zone;	// 0x30359495
// converted property getter: - (id)customLockSliderLabel;	// 0x3035ad9d
- (void)dealloc;	// 0x30358bfd
- (id)description;	// 0x30359f21
- (void)encodeWithCoder:(id)coder;	// 0x30359189
// converted property getter: - (id)fireDate;	// 0x3035aac1
// converted property getter: - (BOOL)fireNotificationsWhenAppRunning;	// 0x3035ad5d
// converted property getter: - (BOOL)hasAction;	// 0x3035abb1
- (unsigned)hash;	// 0x30359c31
// converted property getter: - (BOOL)hideAlertTitle;	// 0x3035acbd
// converted property getter: - (BOOL)interruptAudioAndLockDevice;	// 0x3035ad1d
- (BOOL)isEqual:(id)equal;	// 0x30359795
// converted property getter: - (BOOL)isSystemAlert;	// 0x3035add1
- (BOOL)isValid;	// 0x3035a9b9
- (id)nextFireDateAfterDate:(id)date localTimeZone:(id)zone;	// 0x3035a329
- (id)nextFireDateForLastFireDate:(id)lastFireDate;	// 0x3035a269
// converted property getter: - (int)remainingRepeatCount;	// 0x3035ac9d
// converted property getter: - (id)repeatCalendar;	// 0x3035ab49
// converted property getter: - (unsigned)repeatInterval;	// 0x3035ab29
// converted property getter: - (BOOL)resumeApplicationInBackground;	// 0x3035ad3d
// converted property setter: - (void)setAlertAction:(id)action;	// 0x3035abe1
// converted property setter: - (void)setAlertBody:(id)body;	// 0x3035ab8d
// converted property setter: - (void)setAlertLaunchImage:(id)image;	// 0x3035ac15
// converted property setter: - (void)setAllowSnooze:(BOOL)snooze;	// 0x3035aced
// converted property setter: - (void)setApplicationIconBadgeNumber:(int)number;	// 0x3035ac7d
// converted property setter: - (void)setCustomLockSliderLabel:(id)label;	// 0x3035adad
// converted property setter: - (void)setFireDate:(id)date;	// 0x3035aad1
// converted property setter: - (void)setFireNotificationsWhenAppRunning:(BOOL)running;	// 0x3035ad6d
// converted property setter: - (void)setHasAction:(BOOL)action;	// 0x3035abc1
// converted property setter: - (void)setHideAlertTitle:(BOOL)title;	// 0x3035accd
// converted property setter: - (void)setInterruptAudioAndLockDevice:(BOOL)device;	// 0x3035ad2d
// converted property setter: - (void)setIsSystemAlert:(BOOL)alert;	// 0x3035ade1
// converted property setter: - (void)setRemainingRepeatCount:(int)count;	// 0x3035acad
// converted property setter: - (void)setRepeatCalendar:(id)calendar;	// 0x3035ab59
// converted property setter: - (void)setRepeatInterval:(unsigned)interval;	// 0x3035ab39
// converted property setter: - (void)setResumeApplicationInBackground:(BOOL)background;	// 0x3035ad4d
// converted property setter: - (void)setShowAlarmStatusBarItem:(BOOL)item;	// 0x3035ad8d
// converted property setter: - (void)setSoundName:(id)name;	// 0x3035ac49
// converted property setter: - (void)setSoundNameIsARingtone:(BOOL)ringtone;	// 0x3035ad0d
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x3035ab05
// converted property setter: - (void)setTotalRepeatCount:(int)count;	// 0x30358b85
// converted property setter: - (void)setUserInfo:(id)info;	// 0x30359d61
// converted property getter: - (BOOL)showAlarmStatusBarItem;	// 0x3035ad7d
// converted property getter: - (id)soundName;	// 0x3035ac39
// converted property getter: - (BOOL)soundNameIsARingtone;	// 0x3035acfd
// converted property getter: - (id)timeZone;	// 0x3035aaf5
// converted property getter: - (int)totalRepeatCount;	// 0x3035ac8d
// converted property getter: - (id)userInfo;	// 0x30359ea5
@end

