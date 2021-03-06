/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library
#import "PCLoggingDelegate.h"

@class PCPersistentTimer, NSRunLoop, NSString, PCDarwinNotificationRunLoopSource;
@protocol PCGrowthAlgorithm, PCConnectionManagerDelegate;

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
@property(readonly, assign, nonatomic) double currentKeepAliveInterval;	// G=0x3516cda9; 
@property(assign, nonatomic) BOOL fallBackToAlternateInterface;	// G=0x3516f53d; S=0x3516d4ad; @synthesize=_fallBackToAlternateInterface
@property(assign, nonatomic) double keepAliveGracePeriod;	// G=0x3516f525; S=0x3516d061; @synthesize=_keepAliveGracePeriod
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x3516f54d; @synthesize=_serviceIdentifier
@property(assign) double maximumKeepAliveInterval;	// G=0x3516cf8d; S=0x3516cfad; 
@property(assign, nonatomic) double minimumKeepAliveInterval;	// G=0x3516ceb9; S=0x3516ced9; 
@property(readonly, assign, nonatomic) double pollingInterval;	// G=0x3516d10d; 
+ (BOOL)_isCachedKeepAliveIntervalStillValid:(double)valid date:(id)date;	// 0x3516f351
+ (id)_keepAliveCachePath;	// 0x3516f311
+ (Class)growthAlgorithmClass;	// 0x3516b8b1
+ (id)intervalCacheDictionaries;	// 0x3516f0d9
- (id)initWithConnectionClass:(int)connectionClass delegate:(id)delegate serviceIdentifier:(id)identifier;	// 0x3516b8d1
- (void)_adjustInterfaceAssertions;	// 0x3516e941
- (void)_calloutWithEvent:(int)event;	// 0x3516e329
- (void)_clearTimers;	// 0x3516e4e1
- (void)_clearTimersReleasingPowerAssertion:(BOOL)assertion;	// 0x3516e509
- (id)_currentGrowthAlgorithm;	// 0x3516c1c5
- (void)_delayTimerFired;	// 0x3516e2c1
- (double)_getCachedWWANKeepAliveInterval;	// 0x3516efd9
- (void)_intervalTimerFired;	// 0x3516dfe9
- (void)_loadPreferencesGeneratingEvent:(BOOL)event;	// 0x3516bdd9
- (void)_preferencesChanged;	// 0x3516bdc1
- (void)_releasePowerAssertion;	// 0x3516ebd5
- (void)_resolveStateWithAction:(int)action;	// 0x3516cc05
- (void)_saveWWANKeepAliveInterval:(double)interval;	// 0x3516ec95
- (void)_setupKeepAliveForReconnect;	// 0x3516daf1
- (void)_setupTimerForPoll;	// 0x3516d911
- (void)_setupTimerForPushWithKeepAliveInterval:(double)keepAliveInterval;	// 0x3516d541
- (id)_stringForAction:(int)action;	// 0x3516f451
- (id)_stringForEvent:(int)event;	// 0x3516f4c1
- (id)_stringForStyle:(int)style;	// 0x3516f425
- (void)_takePowerAssertionWithTimeout:(double)timeout;	// 0x3516ea79
- (void)_validateActionForCurrentStyle:(int)currentStyle;	// 0x3516c9fd
- (void)cancelPollingIntervalOverride;	// 0x3516d1e9
// declared property getter: - (double)currentKeepAliveInterval;	// 0x3516cda9
- (int)currentStyle;	// 0x3516c0a9
- (void)dealloc;	// 0x3516bc89
// declared property getter: - (BOOL)fallBackToAlternateInterface;	// 0x3516f53d
- (void)interfaceManagerInHomeCountryStatusChanged:(id)homeCountryStatusChanged;	// 0x3516e6ed
- (void)interfaceManagerInternetReachabilityChanged:(id)changed;	// 0x3516e701
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)changed;	// 0x3516e5e9
// declared property getter: - (double)keepAliveGracePeriod;	// 0x3516f525
- (void)log:(id)log;	// 0x3516f399
- (void)logAtLevel:(int)level format:(id)format;	// 0x3516f3cd
- (void)logAtLevel:(int)level format:(id)format arguments:(void *)arguments;	// 0x3516f3f5
// declared property getter: - (id)loggingIdentifier;	// 0x3516f54d
// declared property getter: - (double)maximumKeepAliveInterval;	// 0x3516cf8d
// declared property getter: - (double)minimumKeepAliveInterval;	// 0x3516ceb9
// declared property getter: - (double)pollingInterval;	// 0x3516d10d
- (void)resumeManagerWithAction:(int)action;	// 0x3516c265
// declared property setter: - (void)setFallBackToAlternateInterface:(BOOL)alternateInterface;	// 0x3516d4ad
// declared property setter: - (void)setKeepAliveGracePeriod:(double)period;	// 0x3516d061
// declared property setter: - (void)setMaximumKeepAliveInterval:(double)interval;	// 0x3516cfad
// declared property setter: - (void)setMinimumKeepAliveInterval:(double)interval;	// 0x3516ced9
- (void)setOnlyAllowedStyle:(int)style;	// 0x3516c195
- (void)setPollingIntervalOverride:(double)override;	// 0x3516d145
- (BOOL)shouldClientScheduleReconnectDueToFailure;	// 0x3516d251
- (void)startManager;	// 0x3516c22d
- (void)stopManager;	// 0x3516cc81
@end

