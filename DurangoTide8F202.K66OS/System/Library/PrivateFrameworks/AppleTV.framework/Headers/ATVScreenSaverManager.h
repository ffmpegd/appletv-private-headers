/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library

@class NSTimer, BRWindow, ATVScreenSaverPrefetchTask;

@interface ATVScreenSaverManager : BRSingleton {
@private
	NSTimer *_timer;	// 4 = 0x4
	double _interval;	// 8 = 0x8
	BRWindow *_window;	// 16 = 0x10
	long _state;	// 20 = 0x14
	BOOL _enabled;	// 24 = 0x18
	BOOL _screenSaverPosted;	// 25 = 0x19
	BOOL _handlingTimeoutChangeNotification;	// 26 = 0x1a
	ATVScreenSaverPrefetchTask *_prefetchTask;	// 28 = 0x1c
	BOOL _screenSaverAutoFired;	// 32 = 0x20
}
+ (id)screenSaverFaces;	// 0x336d56f1
+ (id)screenSaverFacesCachePath;	// 0x336d5725
+ (void)setSingleton:(id)singleton;	// 0x336d4a05
+ (id)singleton;	// 0x336d49f9
- (id)init;	// 0x336d5839
- (BOOL)_allowedToLoadPrincipalClassNamed:(id)loadPrincipalClassNamed;	// 0x336d4a11
- (id)_control;	// 0x336d512d
- (void)_createTimer;	// 0x336d541d
- (void)_dismissScreenSaver:(id)saver;	// 0x336d505d
- (void)_fadeFinished;	// 0x336d5cf1
- (void)_prefetchComplete:(id)complete;	// 0x336d4b29
- (void)_screenSaverArchiveChanged:(id)changed;	// 0x336d4d39
- (void)_screenSaverControllerActivate:(id)activate;	// 0x336d5021
- (void)_screenSaverControllerDeactivate:(id)deactivate;	// 0x336d4fd9
- (void)_screenSaverFired:(id)fired;	// 0x336d5379
- (void)_screenSaverIntervalChanged:(id)changed;	// 0x336d4e85
- (void)_serverStatusChanged:(id)changed;	// 0x336d5f15
- (void)_startOneTimePrefetchTask:(id)task;	// 0x336d4c41
- (void)_startRepeatingPrefetchTask;	// 0x336d4b59
- (void)_stopPrefetchTask;	// 0x336d4a9d
- (void)_updateActivity:(id)activity;	// 0x336d50cd
- (BOOL)_validateBundleAtPath:(id)path;	// 0x336d6039
- (void)dealloc;	// 0x336d5789
- (void)enable;	// 0x336d56c9
- (id)screenSaverPathsFromDirectory:(id)directory;	// 0x336d5581
- (BOOL)screenSaverPrefetchActive;	// 0x336d54f9
- (BOOL)screenSaverRequiresPrefetch;	// 0x336d551d
- (void)showScreenSaver;	// 0x336d5a25
@end
