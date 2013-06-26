/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableArray, NSLock, NSString;

@interface GEONetworkDefaults : NSObject {
	NSMutableArray *_completionHandlers;	// 4 = 0x4
	BOOL _isRegistering;	// 8 = 0x8
	NSDictionary *_networkDefaults;	// 12 = 0xc
	NSLock *_networkDefaultsLock;	// 16 = 0x10
	NSString *_cacheFilePath;	// 20 = 0x14
}
+ (id)sharedNetworkDefaults;	// 0x339046e1
- (id)init;	// 0x3390470d
- (void)_registrationComplete;	// 0x33978925
- (void)dealloc;	// 0x33978a05
- (BOOL)needsUpdate;	// 0x33904849
- (void)refreshNetworkDefaults;	// 0x33978abd
- (void)registerNetworkDefaults:(id)defaults;	// 0x33978c65
- (id)valueForKey:(id)key;	// 0x33978bb1
@end
