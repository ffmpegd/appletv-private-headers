/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMapTable;

@interface GEORequestThrottler : NSObject {
	NSMapTable *_throttleMap;	// 4 = 0x4
}
+ (id)sharedThrottler;	// 0x3453a679
- (id)init;	// 0x3453a719
- (void)_countryProvidersDidChange:(id)_countryProviders;	// 0x3453a6e5
- (BOOL)allowRequest:(unsigned)request toURL:(id)url;	// 0x3453a921
- (void)clear;	// 0x3453a85d
- (void)dealloc;	// 0x3453a7e1
@end
