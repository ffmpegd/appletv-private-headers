/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library
#import "PersistentConnection-Structs.h"
#import "PCInterfaceUsabilityMonitorDelegate.h"

@class NSString, NSRecursiveLock, PCPersistentTimer, NSTimer, PCNonCellularUsabilityMonitor, PCWWANUsabilityMonitor;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceUsabilityMonitorDelegate> {
	NSRecursiveLock *_lock;	// 4 = 0x4
	CFDictionaryRef _delegatesAndRunLoops;	// 8 = 0x8
	CFSetRef _WWANInterfaceAssertionDelegates;	// 12 = 0xc
	NSTimer *_WWANInterfaceAssertionDisableTimer;	// 16 = 0x10
	CFSetRef _WiFiAutoAssociationDelegates;	// 20 = 0x14
	PCPersistentTimer *_WiFiAutoAssociationDisableTimer;	// 24 = 0x18
	CFSetRef _wakeOnWiFiDelegates;	// 28 = 0x1c
	PCPersistentTimer *_wakeOnWiFiDisableTimer;	// 32 = 0x20
	PCWWANUsabilityMonitor *_wwanMonitor;	// 36 = 0x24
	PCNonCellularUsabilityMonitor *_wifiMonitor;	// 40 = 0x28
	void *_ctServerConnection;	// 44 = 0x2c
	void *_interfaceAssertion;	// 48 = 0x30
	void *_wifiManager;	// 52 = 0x34
	long _WWANContextIdentifier;	// 56 = 0x38
	NSString *_WWANInterfaceName;	// 60 = 0x3c
	BOOL _isWWANInterfaceUp;	// 64 = 0x40
	NSTimer *_inCallWWANOverrideTimer;	// 68 = 0x44
	BOOL _isWWANInterfaceDataActive;	// 72 = 0x48
	BOOL _isWWANInHomeCountry;	// 73 = 0x49
	BOOL _hasWWANStatusIndicator;	// 74 = 0x4a
	BOOL _isPowerStateDetectionSupported;	// 75 = 0x4b
	BOOL _isWWANInterfaceInProlongedHighPowerState;	// 76 = 0x4c
	BOOL _isWWANInterfaceActivationPermitted;	// 77 = 0x4d
	double _lastActivationTime;	// 80 = 0x50
	int _wwanRSSI;	// 88 = 0x58
	BOOL _isInCall;	// 92 = 0x5c
	BOOL _isWakeOnWiFiSupported;	// 93 = 0x5d
	BOOL _isWakeOnWiFiEnabled;	// 94 = 0x5e
	BOOL _shouldOverrideOnCallBehavior;	// 95 = 0x5f
}
@property(readonly, assign) NSString *WWANInterfaceName;	// G=0x3654506d; 
@property(readonly, assign) BOOL areAllNetworkInterfacesDisabled;	// G=0x36545441; 
@property(readonly, assign, nonatomic) NSString *currentLinkQualityString;	// G=0x36544b0d; 
@property(readonly, assign) BOOL doesWWANInterfaceExist;	// G=0x365450d9; 
@property(readonly, assign) BOOL isInCall;	// G=0x36545249; 
@property(readonly, assign) BOOL isInternetReachable;	// G=0x365452f1; 
@property(readonly, assign) BOOL isInternetReachableViaWiFi;	// G=0x36545341; 
@property(readonly, assign) BOOL isPowerStateDetectionSupported;	// G=0x36545129; 
@property(readonly, assign) BOOL isWWANBetterThanWiFi;	// G=0x36544f89; 
@property(readonly, assign) BOOL isWWANInHomeCountry;	// G=0x36545201; 
@property(readonly, assign) BOOL isWWANInterfaceActivationPermitted;	// G=0x365451b9; 
@property(readonly, assign) BOOL isWWANInterfaceInProlongedHighPowerState;	// G=0x36545171; 
@property(readonly, assign) BOOL isWWANInterfaceUp;	// G=0x36545025; 
@property(readonly, assign) BOOL isWakeOnWiFiSupported;	// G=0x365453f9; 
+ (id)sharedInstance;	// 0x36542da9
- (id)init;	// 0x36542e1d
// declared property getter: - (id)WWANInterfaceName;	// 0x3654506d
- (void)_adjustWakeOnWiFi;	// 0x36546329
- (void)_adjustWakeOnWiFiLocked;	// 0x36546375
- (void)_adjustWiFiAutoAssociation;	// 0x36545f81
- (void)_adjustWiFiAutoAssociationLocked;	// 0x36545fcd
- (BOOL)_allowBindingToWWAN;	// 0x365468cd
- (void)_clearInCallWWANOverrideTimerLocked;	// 0x36544761
- (void)_createCTConnection;	// 0x365432dd
- (void)_createWiFiManager;	// 0x365459b9
- (void)_ctConnectionWasInvalidated;	// 0x36543849
- (void)_inCallWWANOverrideTimerFired;	// 0x36544701
- (BOOL)_isInternetReachableLocked;	// 0x36545291
- (BOOL)_isWiFiUsable;	// 0x3654539d
- (void)_mainThreadDelayedInvalidation;	// 0x365437bd
- (void)_performCalloutsForSelectorValue:(id)selectorValue;	// 0x36544df1
- (void)_populateWakeOnWiFiCapability;	// 0x36545c01
- (void)_populateWakeOnWiFiCapabilityLocked;	// 0x36545c4d
- (void)_scheduleCalloutsForSelector:(SEL)selector;	// 0x36544bcd
- (void)_serverCallback:(id)callback info:(id)info;	// 0x36543a39
- (void)_serverCallbackLocked:(id)locked info:(id)info;	// 0x36543a99
- (void)_updateWWANInterfaceAssertions;	// 0x365457d5
- (void)_updateWWANInterfaceAssertionsLocked;	// 0x36545821
- (void)_updateWWANInterfaceUpState;	// 0x36544ac1
- (void)_updateWWANInterfaceUpStateLocked;	// 0x36544871
- (BOOL)_wantsWWANInterfaceAssertion;	// 0x36545739
- (BOOL)_wantsWakeOnWiFiEnabled;	// 0x365462f1
- (BOOL)_wifiIsPoorLinkQuality;	// 0x36544ba9
- (BOOL)_wwanIsPoorLinkQuality;	// 0x36544b85
- (BOOL)_wwanLinkQualityBelowThresholdAndWoWAvailableLocked;	// 0x365447f1
- (void)addDelegate:(id)delegate callbackRunLoop:(id)loop;	// 0x36543231
// declared property getter: - (BOOL)areAllNetworkInterfacesDisabled;	// 0x36545441
- (void)bindCFStream:(CFReadStreamRef)stream toWWANInterface:(BOOL)wwaninterface;	// 0x3654697d
- (void)bindCFStreamToWWANInterface:(CFReadStreamRef)wwaninterface;	// 0x36546acd
// declared property getter: - (id)currentLinkQualityString;	// 0x36544b0d
- (void)dealloc;	// 0x365430cd
- (id)dhcpHalfLeaseExpirationDate;	// 0x36546699
- (id)dhcpT1RenewalDate;	// 0x365464b1
// declared property getter: - (BOOL)doesWWANInterfaceExist;	// 0x365450d9
- (void)enableWakeOnWiFi:(BOOL)fi forDelegate:(id)delegate;	// 0x36546169
- (void)enableWiFiAutoAssociation:(BOOL)association forDelegate:(id)delegate;	// 0x36545e09
- (void)handleMachMessage:(void *)message;	// 0x36543a31
- (void)interfaceLinkQualityChanged:(id)changed previousLinkQuality:(int)quality;	// 0x365439b9
- (void)interfaceReachabilityChanged:(id)changed;	// 0x365439f5
// declared property getter: - (BOOL)isInCall;	// 0x36545249
// declared property getter: - (BOOL)isInternetReachable;	// 0x365452f1
// declared property getter: - (BOOL)isInternetReachableViaWiFi;	// 0x36545341
// declared property getter: - (BOOL)isPowerStateDetectionSupported;	// 0x36545129
// declared property getter: - (BOOL)isWWANBetterThanWiFi;	// 0x36544f89
// declared property getter: - (BOOL)isWWANInHomeCountry;	// 0x36545201
// declared property getter: - (BOOL)isWWANInterfaceActivationPermitted;	// 0x365451b9
// declared property getter: - (BOOL)isWWANInterfaceInProlongedHighPowerState;	// 0x36545171
// declared property getter: - (BOOL)isWWANInterfaceUp;	// 0x36545025
// declared property getter: - (BOOL)isWakeOnWiFiSupported;	// 0x365453f9
- (void)keepWWANInterfaceUp:(BOOL)up forDelegate:(id)delegate;	// 0x365455b9
- (void)removeDelegate:(id)delegate;	// 0x3654328d
- (id)urlConnectionBoundToWWANInterface:(BOOL)wwaninterface withRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x36546ae1
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x36546d7d
@end

