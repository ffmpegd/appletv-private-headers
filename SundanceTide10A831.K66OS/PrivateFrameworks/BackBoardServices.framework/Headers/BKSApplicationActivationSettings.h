/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"
#import "BackBoardServices-Structs.h"

@class NSData, BKSApplicationLaunchSettings, NSURL;

@interface BKSApplicationActivationSettings : NSObject <NSCopying, BKSXPCCoding> {
	BKSApplicationLaunchSettings *_launchSettings;	// 4 = 0x4
	BOOL _animated;	// 8 = 0x8
	BOOL _suspended;	// 9 = 0x9
	BOOL _suspendedEventsOnly;	// 10 = 0xa
	NSURL *_openURL;	// 12 = 0xc
	NSData *_payload;	// 16 = 0x10
	BOOL _safe;	// 20 = 0x14
	BOOL _firstLaunchAfterBoot;	// 21 = 0x15
	BOOL _enableTests;	// 22 = 0x16
	double _userLaunchEventTime;	// 24 = 0x18
	double _watchdogExtension;	// 32 = 0x20
	BOOL _forRemoteNotification;	// 40 = 0x28
	BOOL _forLocalNotification;	// 41 = 0x29
	BOOL _flip;	// 42 = 0x2a
	int _interfaceOrientation;	// 44 = 0x2c
	int _statusBarStyle;	// 48 = 0x30
	BOOL _statusBarHidden;	// 52 = 0x34
	BOOL _classic;	// 53 = 0x35
	BOOL _zoomInClassic;	// 54 = 0x36
}
@property(assign, nonatomic) BOOL animated;	// G=0x3307212d; S=0x3307213d; @synthesize=_animated
@property(assign, nonatomic) BOOL classic;	// G=0x33072345; S=0x33072355; @synthesize=_classic
@property(assign, nonatomic) BOOL enableTests;	// G=0x3307220d; S=0x3307221d; @synthesize=_enableTests
@property(assign, nonatomic) BOOL firstLaunchAfterBoot;	// G=0x330721ed; S=0x330721fd; @synthesize=_firstLaunchAfterBoot
@property(assign, nonatomic) BOOL flip;	// G=0x330722c5; S=0x330722d5; @synthesize=_flip
@property(assign, nonatomic) BOOL forLocalNotification;	// G=0x330722a5; S=0x330722b5; @synthesize=_forLocalNotification
@property(assign, nonatomic) BOOL forRemoteNotification;	// G=0x33072285; S=0x33072295; @synthesize=_forRemoteNotification
@property(assign, nonatomic) int interfaceOrientation;	// G=0x330722e5; S=0x330722f5; @synthesize=_interfaceOrientation
@property(retain, nonatomic) BKSApplicationLaunchSettings *launchSettings;	// G=0x3307210d; S=0x3307211d; @synthesize=_launchSettings
@property(retain, nonatomic) NSURL *openURL;	// G=0x3307218d; S=0x3307219d; @synthesize=_openURL
@property(retain, nonatomic) NSData *payload;	// G=0x330721ad; S=0x330721bd; @synthesize=_payload
@property(assign, nonatomic) BOOL safe;	// G=0x330721cd; S=0x330721dd; @synthesize=_safe
@property(assign, nonatomic) BOOL statusBarHidden;	// G=0x33072325; S=0x33072335; @synthesize=_statusBarHidden
@property(assign, nonatomic) int statusBarStyle;	// G=0x33072305; S=0x33072315; @synthesize=_statusBarStyle
@property(assign, nonatomic) BOOL suspended;	// G=0x3307214d; S=0x3307215d; @synthesize=_suspended
@property(assign, nonatomic) BOOL suspendedEventsOnly;	// G=0x3307216d; S=0x3307217d; @synthesize=_suspendedEventsOnly
@property(assign, nonatomic) double userLaunchEventTime;	// G=0x3307222d; S=0x33072245; @synthesize=_userLaunchEventTime
@property(assign, nonatomic) double watchdogExtension;	// G=0x33072259; S=0x33072271; @synthesize=_watchdogExtension
@property(assign, nonatomic) BOOL zoomInClassic;	// G=0x33072365; S=0x33072375; @synthesize=_zoomInClassic
- (id)initWithSettings:(id)settings zone:(NSZone *)zone;	// 0x33071515
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x33071be9
// declared property getter: - (BOOL)animated;	// 0x3307212d
// declared property getter: - (BOOL)classic;	// 0x33072345
- (id)copyWithZone:(NSZone *)zone;	// 0x33071bad
- (void)dealloc;	// 0x330717dd
- (id)description;	// 0x33071855
// declared property getter: - (BOOL)enableTests;	// 0x3307220d
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x33071e69
// declared property getter: - (BOOL)firstLaunchAfterBoot;	// 0x330721ed
// declared property getter: - (BOOL)flip;	// 0x330722c5
// declared property getter: - (BOOL)forLocalNotification;	// 0x330722a5
// declared property getter: - (BOOL)forRemoteNotification;	// 0x33072285
// declared property getter: - (int)interfaceOrientation;	// 0x330722e5
// declared property getter: - (id)launchSettings;	// 0x3307210d
// declared property getter: - (id)openURL;	// 0x3307218d
// declared property getter: - (id)payload;	// 0x330721ad
// declared property getter: - (BOOL)safe;	// 0x330721cd
// declared property setter: - (void)setAnimated:(BOOL)animated;	// 0x3307213d
// declared property setter: - (void)setClassic:(BOOL)classic;	// 0x33072355
// declared property setter: - (void)setEnableTests:(BOOL)tests;	// 0x3307221d
// declared property setter: - (void)setFirstLaunchAfterBoot:(BOOL)boot;	// 0x330721fd
// declared property setter: - (void)setFlip:(BOOL)flip;	// 0x330722d5
// declared property setter: - (void)setForLocalNotification:(BOOL)localNotification;	// 0x330722b5
// declared property setter: - (void)setForRemoteNotification:(BOOL)remoteNotification;	// 0x33072295
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x330722f5
// declared property setter: - (void)setLaunchSettings:(id)settings;	// 0x3307211d
// declared property setter: - (void)setOpenURL:(id)url;	// 0x3307219d
// declared property setter: - (void)setPayload:(id)payload;	// 0x330721bd
// declared property setter: - (void)setSafe:(BOOL)safe;	// 0x330721dd
// declared property setter: - (void)setStatusBarHidden:(BOOL)hidden;	// 0x33072335
// declared property setter: - (void)setStatusBarStyle:(int)style;	// 0x33072315
// declared property setter: - (void)setSuspended:(BOOL)suspended;	// 0x3307215d
// declared property setter: - (void)setSuspendedEventsOnly:(BOOL)only;	// 0x3307217d
// declared property setter: - (void)setUserLaunchEventTime:(double)time;	// 0x33072245
// declared property setter: - (void)setWatchdogExtension:(double)extension;	// 0x33072271
// declared property setter: - (void)setZoomInClassic:(BOOL)classic;	// 0x33072375
// declared property getter: - (BOOL)statusBarHidden;	// 0x33072325
// declared property getter: - (int)statusBarStyle;	// 0x33072305
// declared property getter: - (BOOL)suspended;	// 0x3307214d
// declared property getter: - (BOOL)suspendedEventsOnly;	// 0x3307216d
// declared property getter: - (double)userLaunchEventTime;	// 0x3307222d
// declared property getter: - (double)watchdogExtension;	// 0x33072259
// declared property getter: - (BOOL)zoomInClassic;	// 0x33072365
@end
