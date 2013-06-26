/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GEOSearchAttributionServerProxy.h"

@class GEOSearchAttributionManifest;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionServerRemoteProxy : NSObject <GEOSearchAttributionServerProxy> {
	GEOSearchAttributionManifest *_manifest;	// 4 = 0x4
}
- (id)_manifest;	// 0x302e5335
- (void)dealloc;	// 0x302e52e9
- (void)loadAttributionInfoForIdentifier:(id)identifier version:(unsigned)version completionHandler:(id)handler errorHandler:(id)handler4;	// 0x302e53ad
@end
