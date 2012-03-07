/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebInspectorServerConnection;

__attribute__((visibility("hidden")))
@interface WebInspectorRemoteChannel : NSObject {
@private
	WebInspectorServerConnection *_remote;	// 4 = 0x4
	WebInspectorClient *_local;	// 8 = 0x8
}
+ (id)createChannelForPageId:(unsigned)pageId connection:(id)connection;	// 0x33a1d859
- (id)initWithRemote:(id)remote local:(WebInspectorClient *)local;	// 0x33a1d805
- (void)closeFromLocalSide;	// 0x33a1da1d
- (void)closeFromRemoteSide;	// 0x33a1da09
- (void)sendMessageToBackend:(id)backend;	// 0x33a1d8f1
- (void)sendMessageToFrontend:(id)frontend;	// 0x33a1d9e5
@end
