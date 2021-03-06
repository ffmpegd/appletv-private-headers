/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PCLoggingDelegate.h"
#import <NSObject.h> // Unknown library

@class PCDarwinNotificationRunLoopSource, NSRunLoop, PCPersistentTimer, NSString;
@protocol PCConnectionManagerDelegate, PCGrowthAlgorithm;

@interface PCConnectionManager : NSObject <PCLoggingDelegate> {
	int _connectionClass;	// 4 = 0x4
	id<PCConnectionManagerDelegate> _delegate;	// 8 = 0x8
	NSString *_serviceIdentifier;	// 12 = 0xc
	int _prefsStyle;	// 16 = 0x10
	int _onlyAllowedStyle;	// 20 = 0x14
	BOOL _onlyAllowedStyleSet;	// 24 = 0x18
	NSRunLoop *_runLoop;	// 28 = 0x1c
	id<PCGrowthAlgorithm> _wwanGrowthAlgorithm;	// 32 = 0x20
	id<PCGrowthAlgorithm> _wifiGrowthAlgorithm;	// 36 = 0x24
	PCDarwinNotificationRunLoopSource *_prefsChangedSource;	// 40 = 0x28
	PCPersistentTimer *_intervalTimer;	// 44 = 0x2c
	PCPersistentTimer *_reconnectWakeTimer;	// 48 = 0x30
	PCPersistentTimer *_delayTimer;	// 52 = 0x34
	unsigned _powerAssertionID;	// 56 = 0x38
	double _onTimeKeepAliveTime;	// 60 = 0x3c
	double _lastResumeTime;	// 68 = 0x44
	double _lastStopTime;	// 76 = 0x4c
	double _lastReachableTime;	// 84 = 0x54
	double _lastReconnectTime;	// 92 = 0x5c
	double _keepAliveGracePeriod;	// 100 = 0x64
	unsigned _reconnectIteration;	// 108 = 0x6c
	double _defaultPollingInterval;	// 112 = 0x70
	double _pollingIntervalOverride;	// 120 = 0x78
	BOOL _pollingIntervalOverrideSet;	// 128 = 0x80
	BOOL _hasStarted;	// 129 = 0x81
	BOOL _isRunning;	// 130 = 0x82
	BOOL _inCallback;	// 131 = 0x83
	BOOL _isInReconnectMode;	// 132 = 0x84
	BOOL _reconnectWithKeepAliveDelay;	// 133 = 0x85
	BOOL _forceManualWhenRoaming;	// 134 = 0x86
	BOOL _fallBackToAlternateInterface;	// 135 = 0x87
	BOOL _isReachable;	// 136 = 0x88
}
@property(readonly, assign, nonatomic) double currentKeepAliveInterval;	// G=0x316a60fd; 
@property(assign, nonatomic) BOOL fallBackToAlternateInterface;	// G=0x316a530d; S=0x316a5d51; @synthesize=_fallBackToAlternateInterface
@property(assign, nonatomic) double keepAliveGracePeriod;	// G=0x316a531d; S=0x316a5ee9; @synthesize=_keepAliveGracePeriod
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x316a52fd; @synthesize=_serviceIdentifier
@property(assign) double maximumKeepAliveInterval;	// G=0x316a6025; S=0x316a5f8d; 
@property(assign, nonatomic) double minimumKeepAliveInterval;	// G=0x316a60dd; S=0x316a6045; 
@property(readonly, assign, nonatomic) double pollingInterval;	// G=0x316a5219; 
+ (BOOL)_isCachedKeepAliveIntervalStillValid:(double)valid date:(id)date;	// 0x316a535d
+ (id)_keepAliveCachePath;	// 0x316a8439
+ (Class)growthAlgorithmClass;	// 0x316a683d
+ (id)intervalCacheDictionaries;	// 0x316a8239
- (id)initWithConnectionClass:(int)connectionClass delegate:(id)delegate serviceIdentifier:(id)identifier;	// 0x316a64e5
- (void)_adjustInterfaceAssertions;	// 0x316a54d5
- (void)_calloutWithEvent:(int)event;	// 0x316a572d
- (void)_clearTimers;	// 0x316a5705
- (void)_clearTimersReleasingPowerAssertion:(BOOL)assertion;	// 0x316a6c9d
- (id)_currentGrowthAlgorithm;	// 0x316a6259
- (void)_delayTimerFired;	// 0x316a58b9
- (double)_getCachedWWANKeepAliveInterval;	// 0x316a53ad
- (void)_intervalTimerFired;	// 0x316a5915
- (void)_loadPreferencesGeneratingEvent:(BOOL)event;	// 0x316a685d
- (void)_preferencesChanged;	// 0x316a63b5
- (void)_releasePowerAssertion;	// 0x316a7e65
- (void)_resolveStateWithAction:(int)action;	// 0x316a51b1
- (void)_saveWWANKeepAliveInterval:(double)interval;	// 0x316a7f65
- (void)_setupKeepAliveForReconnect;	// 0x316a7941
- (void)_setupTimerForPoll;	// 0x316a5b91
- (void)_setupTimerForPushWithKeepAliveInterval:(double)keepAliveInterval;	// 0x316a6d79
- (id)_stringForAction:(int)action;	// 0x316a5245
- (id)_stringForEvent:(int)event;	// 0x316a52a5
- (void)_takePowerAssertion;	// 0x316a7d61
- (void)_validateActionForCurrentStyle:(int)currentStyle;	// 0x316a7809
- (void)cancelPollingIntervalOverride;	// 0x316a5dd5
// declared property getter: - (double)currentKeepAliveInterval;	// 0x316a60fd
- (int)currentStyle;	// 0x316a62e1
- (void)dealloc;	// 0x316a63cd
// declared property getter: - (BOOL)fallBackToAlternateInterface;	// 0x316a530d
- (void)interfaceManagerInHomeCountryStatusChanged:(id)homeCountryStatusChanged;	// 0x316a5601
- (void)interfaceManagerInternetReachabilityChanged:(id)changed;	// 0x316a6b71
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)changed;	// 0x316a5619
// declared property getter: - (double)keepAliveGracePeriod;	// 0x316a531d
- (void)log:(id)log;	// 0x316a8209
- (void)logAtLevel:(int)level format:(id)format;	// 0x316a81d5
- (void)logAtLevel:(int)level format:(id)format arguments:(void *)arguments;	// 0x316a532d
// declared property getter: - (id)loggingIdentifier;	// 0x316a52fd
// declared property getter: - (double)maximumKeepAliveInterval;	// 0x316a6025
// declared property getter: - (double)minimumKeepAliveInterval;	// 0x316a60dd
// declared property getter: - (double)pollingInterval;	// 0x316a5219
- (void)resumeManagerWithAction:(int)action;	// 0x316a729d
// declared property setter: - (void)setFallBackToAlternateInterface:(BOOL)alternateInterface;	// 0x316a5d51
// declared property setter: - (void)setKeepAliveGracePeriod:(double)period;	// 0x316a5ee9
// declared property setter: - (void)setMaximumKeepAliveInterval:(double)interval;	// 0x316a5f8d
// declared property setter: - (void)setMinimumKeepAliveInterval:(double)interval;	// 0x316a6045
- (void)setOnlyAllowedStyle:(int)style;	// 0x316a62b1
- (void)setPollingIntervalOverride:(double)override;	// 0x316a5e41
- (BOOL)shouldClientScheduleReconnectDueToFailure;	// 0x316a7041
- (void)startManager;	// 0x316a6229
- (void)stopManager;	// 0x316a6121
@end

