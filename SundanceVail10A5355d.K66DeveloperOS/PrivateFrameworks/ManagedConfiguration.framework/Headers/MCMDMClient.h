/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class CPDistributedMessagingCenter;

@interface MCMDMClient : NSObject {
	CPDistributedMessagingCenter *_messageCenter;	// 4 = 0x4
}
+ (id)sharedClient;	// 0x36246cd1
- (id)init;	// 0x36246d49
- (void).cxx_destruct;	// 0x36247445
- (BOOL)authenticateWithCheckInURL:(id)url identity:(SecIdentity *)identity topic:(id)topic useDevelopmentAPNS:(BOOL)apns signMessage:(BOOL)message outError:(id *)error;	// 0x36246dd1
- (BOOL)checkOutCheckInURL:(id)url identity:(SecIdentity *)identity topic:(id)topic signMessage:(BOOL)message outError:(id *)error;	// 0x362470a9
- (void)notifyNewConfiguration;	// 0x36247375
- (void)removeManagedAppsAccordingToFlags;	// 0x36247405
- (void)scheduleTokenUpdate;	// 0x362473a5
- (void)simulatePush;	// 0x362473d5
@end

