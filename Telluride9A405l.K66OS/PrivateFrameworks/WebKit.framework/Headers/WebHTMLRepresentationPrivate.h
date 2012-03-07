/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WAKView, WebDataSource;
@protocol WebPluginManualLoader;

__attribute__((visibility("hidden")))
@interface WebHTMLRepresentationPrivate : NSObject {
@private
	WebDataSource *dataSource;	// 4 = 0x4
	BOOL hasSentResponseToPlugin;	// 8 = 0x8
	BOOL includedInWebKitStatistics;	// 9 = 0x9
	id<WebPluginManualLoader> manualLoader;	// 12 = 0xc
	WAKView *pluginView;	// 16 = 0x10
}
@end

