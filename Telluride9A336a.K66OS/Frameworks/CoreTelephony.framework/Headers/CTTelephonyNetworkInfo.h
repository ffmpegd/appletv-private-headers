/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library

@class CTCarrier;

@interface CTTelephonyNetworkInfo : NSObject {
@private
	void *_internal;	// 4 = 0x4
	CTCarrier *_subscriberCellularProvider;	// 8 = 0x8
	id _subscriberCellularProviderDidUpdateNotifier;	// 12 = 0xc
}
@property(retain) CTCarrier *subscriberCellularProvider;	// G=0x324d5ee5; S=0x324d5ef9; @synthesize=_subscriberCellularProvider
@property(copy, nonatomic) id subscriberCellularProviderDidUpdateNotifier;	// G=0x324d5559; S=0x324d5569; 
- (id)init;	// 0x324d53a5
- (void)cleanUpServerConnection;	// 0x324d5355
- (void)cleanUpServerConnectionNoLock;	// 0x324d5315
- (void)dealloc;	// 0x324d54ad
- (BOOL)getAllowsVOIP:(BOOL *)voip withCTError:(XXStruct_K5nmsA *)cterror;	// 0x324d57e5
- (BOOL)getCarrierName:(id)name withCTError:(XXStruct_K5nmsA *)cterror;	// 0x324d561d
- (BOOL)getMobileCountryCode:(id)code andIsoCountryCode:(id)code2 withCTError:(XXStruct_K5nmsA *)cterror;	// 0x324d56a5
- (BOOL)getMobileNetworkCode:(id)code withCTError:(XXStruct_K5nmsA *)cterror;	// 0x324d575d
- (void)handleNotificationFromConnection:(void *)connection ofType:(id)type withInfo:(id)info;	// 0x324d5bbd
- (void)postUpdatesIfNecessary;	// 0x324d5dfd
- (void)reestablishServerConnectionIfNeeded;	// 0x324d51d5
// declared property setter: - (void)setSubscriberCellularProvider:(id)provider;	// 0x324d5ef9
// declared property setter: - (void)setSubscriberCellularProviderDidUpdateNotifier:(id)updateNotifier;	// 0x324d5569
- (BOOL)setUpServerConnection;	// 0x324d4fc1
// declared property getter: - (id)subscriberCellularProvider;	// 0x324d5ee5
// declared property getter: - (id)subscriberCellularProviderDidUpdateNotifier;	// 0x324d5559
- (BOOL)updateNetworkInfoAndShouldNotifyClient:(BOOL *)updateNetworkInfoAnd;	// 0x324d5859
@end

