/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol IMConnectionMonitorDelegate;

@interface IMConnectionMonitor : NSObject {
	NSString *_remoteHost;	// 4 = 0x4
	id<IMConnectionMonitorDelegate> _delegate;	// 8 = 0x8
}
@property(assign, nonatomic) id<IMConnectionMonitorDelegate> delegate;	// G=0x34a86f55; S=0x34a86f65; @synthesize=_delegate
@property(assign, nonatomic, setter=setDataConnectionActive:) BOOL isDataConnectionActive;	// G=0x34a86f39; S=0x34a86f31; 
@property(readonly, assign, nonatomic) BOOL isImmediatelyReachable;	// G=0x34a86f41; 
@property(readonly, assign, nonatomic) NSString *remoteHost;	// G=0x34a86f45; @synthesize=_remoteHost
@property(readonly, assign, nonatomic) BOOL requiresDataConnectionActivation;	// G=0x34a86f3d; 
+ (id)alloc;	// 0x34a86e35
- (id)initWithRemoteHost:(id)remoteHost delegate:(id)delegate;	// 0x34a86e61
- (void)_setup;	// 0x34a86f25
- (void)clear;	// 0x34a86f35
- (void)dealloc;	// 0x34a86ed9
// declared property getter: - (id)delegate;	// 0x34a86f55
- (void)goConnectedWithLocalSocketAddress:(id)localSocketAddress remoteSocketAddress:(id)address;	// 0x34a86f29
- (void)goDisconnected;	// 0x34a86f2d
// declared property getter: - (BOOL)isDataConnectionActive;	// 0x34a86f39
// declared property getter: - (BOOL)isImmediatelyReachable;	// 0x34a86f41
// declared property getter: - (id)remoteHost;	// 0x34a86f45
// declared property getter: - (BOOL)requiresDataConnectionActivation;	// 0x34a86f3d
// declared property setter: - (void)setDataConnectionActive:(BOOL)active;	// 0x34a86f31
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34a86f65
@end

