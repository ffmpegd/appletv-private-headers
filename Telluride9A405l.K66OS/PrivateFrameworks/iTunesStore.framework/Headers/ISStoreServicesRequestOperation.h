/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {
@private
	SSRequest *_request;	// 60 = 0x3c
}
@property(readonly, assign) SSRequest *request;	// G=0x33dbef15; 
- (id)initWithRequest:(id)request;	// 0x33dbee29
- (void)_beginObservingNotifications;	// 0x33dbf25d
- (void)_delayedStartRequest;	// 0x33dbf181
- (void)_delayedStopRequest;	// 0x33dbf209
- (void)_endObservingNotifications;	// 0x33dbf2d1
- (void)_requestStateChangedNotification:(id)notification;	// 0x33dbf0c9
- (void)_timer:(id)timer;	// 0x33dbf24d
- (void)cancel;	// 0x33dbef75
- (void)dealloc;	// 0x33dbeeb5
// declared property getter: - (id)request;	// 0x33dbef15
- (void)run;	// 0x33dbefcd
- (void)stopRunLoop;	// 0x33dbf089
@end

