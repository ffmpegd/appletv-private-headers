/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library
#import "PCInterfaceUsabilityMonitorDelegate.h"
#import "PersistentConnection-Structs.h"
#import "PCInterfaceUsabilityMonitorProtocol.h"

@class CUTWeakReference, NSString, NSMutableArray;

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
	dispatch_queue_s *_delegateQueue;	// 4 = 0x4
	dispatch_queue_s *_ivarQueue;	// 8 = 0x8
	dispatch_queue_s *_monitorDelegateQueue;	// 12 = 0xc
	CUTWeakReference *_delegateReference;	// 16 = 0x10
	BOOL _demoOverride;	// 20 = 0x14
	int _previousLinkQuality;	// 24 = 0x18
	BOOL _trackUsability;	// 28 = 0x1c
	unsigned _thresholdOffTransitionCount;	// 32 = 0x20
	double _trackedTimeInterval;	// 36 = 0x24
	NSMutableArray *_interfaceMonitors;	// 44 = 0x2c
}
@property(assign, nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate;	// G=0x352cda81; S=0x352cdc55; 
@property(readonly, assign, nonatomic) int interfaceIdentifier;	// G=0x352cd341; 
@property(readonly, assign, nonatomic) BOOL isInterfaceHistoricallyUsable;	// G=0x352cd6b1; 
@property(readonly, assign, nonatomic) BOOL isInterfaceUsable;	// G=0x352cd501; 
@property(readonly, assign, nonatomic) BOOL isInternetReachable;	// G=0x352cd861; 
@property(readonly, assign, nonatomic) BOOL isPoorLinkQuality;	// G=0x352cda49; 
@property(readonly, assign, nonatomic) int linkQuality;	// G=0x352cd42d; 
@property(readonly, assign, nonatomic) NSString *linkQualityString;	// G=0x352cda11; 
- (id)initWithDelegateQueue:(dispatch_queue_s *)delegateQueue;	// 0x352ccc3d
- (void)_addMonitorWithInterfaceName:(id)interfaceName;	// 0x352ccf3d
- (void)_callDelegateOnIvarQueueWithBlock:(id)block;	// 0x352cdd55
- (void)_forwardConfigurationOnIvarQueue;	// 0x352ccfd5
- (int)_linkQualityOnIvarQueue;	// 0x352cd345
- (void)dealloc;	// 0x352ccde5
// declared property getter: - (id)delegate;	// 0x352cda81
// declared property getter: - (int)interfaceIdentifier;	// 0x352cd341
- (void)interfaceLinkQualityChanged:(id)changed previousLinkQuality:(int)quality;	// 0x352cde29
- (void)interfaceReachabilityChanged:(id)changed;	// 0x352cdfb9
// declared property getter: - (BOOL)isInterfaceHistoricallyUsable;	// 0x352cd6b1
// declared property getter: - (BOOL)isInterfaceUsable;	// 0x352cd501
// declared property getter: - (BOOL)isInternetReachable;	// 0x352cd861
// declared property getter: - (BOOL)isPoorLinkQuality;	// 0x352cda49
// declared property getter: - (int)linkQuality;	// 0x352cd42d
// declared property getter: - (id)linkQualityString;	// 0x352cda11
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x352cdc55
- (void)setThresholdOffTransitionCount:(unsigned)count;	// 0x352cd1e9
- (void)setTrackUsability:(BOOL)usability;	// 0x352cd101
- (void)setTrackedTimeInterval:(double)interval;	// 0x352cd28d
@end

