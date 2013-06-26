/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebInspectorServerWebViewConnection;

@interface WebInspectorRemoteChannel : NSObject {
	WebInspectorServerWebViewConnection *_remote;	// 4 = 0x4
	WebInspectorClient *_local;	// 8 = 0x8
}
+ (id)createChannelForPageId:(unsigned)pageId connection:(id)connection;	// 0x365ebe4d
- (id)initWithRemote:(id)remote local:(WebInspectorClient *)local;	// 0x365ebee9
- (void)closeFromLocalSide;	// 0x365ebf3d
- (void)closeFromRemoteSide;	// 0x365ebf5d
- (void)sendMessageToBackend:(id)backend;	// 0x365ebf91
- (void)sendMessageToFrontend:(id)frontend;	// 0x365ebf71
@end
