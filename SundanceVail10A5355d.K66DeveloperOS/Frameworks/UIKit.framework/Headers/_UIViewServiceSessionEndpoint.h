/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, XPCEndpoint;

__attribute__((visibility("hidden")))
@interface _UIViewServiceSessionEndpoint : NSObject {
	XPCEndpoint *_serviceSessionEndpoint;	// 4 = 0x4
	NSString *_serviceBundleIdentifier;	// 8 = 0x8
}
- (id)initWithXPCEndpoint:(id)xpcendpoint toViewServiceWithBundleIdentifier:(id)bundleIdentifier;	// 0x33dd643d
- (id)connectToDeputyOfType:(id)type connectionHandler:(id)handler;	// 0x33dd6519
- (void)dealloc;	// 0x33dd64b5
@end

