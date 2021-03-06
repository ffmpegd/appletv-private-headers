/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessageDelivery.h"
#import "FTMessageQueueDelegate.h"

@class IMRemoteURLConnection;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {
	IMRemoteURLConnection *_remoteConnection;	// 32 = 0x20
}
- (id)init;	// 0x309cb471
- (void)_cleanupURLConnection;	// 0x309ce6d1
- (void)_dequeueIfNeeded;	// 0x309cdc59
- (void)_notifyDelegateAboutError:(id)error forMessage:(id)message;	// 0x309cc3c1
- (id)_processResultData:(id)data forMessage:(id)message error:(id *)error;	// 0x309cc281
- (BOOL)_sendMessageAsynchronously:(id)asynchronously error:(id *)error;	// 0x309cc531
- (void)_serverBagLoaded:(id)loaded;	// 0x309cf08d
- (BOOL)_tryRetryMessageWithTimeInterval:(double)timeInterval;	// 0x309ce839
- (void)_updateWiFiAssertions;	// 0x309cc35d
- (id)_urlRequestWithURL:(id)url andData:(id)data message:(id)message;	// 0x309cb595
- (BOOL)busy;	// 0x309ce81d
- (void)cancelMessage:(id)message;	// 0x309cecd9
- (void)dealloc;	// 0x309cb501
- (void)invalidate;	// 0x309cc439
- (void)queue:(id)queue hitTimeoutForMessage:(id)message;	// 0x309ce9c9
- (BOOL)sendMessage:(id)message;	// 0x309cee21
@end

