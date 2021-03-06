/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEONetworkDefaults : NSObject {
@private
	NSMutableArray *_completionHandlers;	// 4 = 0x4
@protected
	BOOL _isRegistering;	// 8 = 0x8
	NSString *_cacheFilePath;	// 12 = 0xc
}
+ (id)sharedNetworkDefaults;	// 0x30227681
- (id)init;	// 0x302276ad
- (void)_registrationComplete;	// 0x3029aa5d
- (void)dealloc;	// 0x3029ab3d
- (BOOL)needsUpdate;	// 0x30227731
- (void)registerNetworkDefaults:(id)defaults;	// 0x3029abd1
@end

