/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import </libobjc.A.h>

@class NSLock, NSMapTable;

@interface GEOGeocodeRequester : NSObject {
	NSMapTable *_pendingGeocodes;	// 4 = 0x4
	NSMapTable *_pendingBatchGeocodes;	// 8 = 0x8
	NSLock *_pendingGeocodesLock;	// 12 = 0xc
	NSMapTable *_providers;	// 16 = 0x10
}
+ (void)_countryProvidersDidChange:(id)_countryProviders;	// 0x30f0c9d5
+ (id)sharedGeocodeRequester;	// 0x30eae82d
- (id)init;	// 0x30eae891
- (void)batchReverseGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x30f0c509
- (void)cancelBatchReverseGeocode:(id)geocode;	// 0x30f0c921
- (void)cancelGeocode:(id)geocode;	// 0x30f0c455
- (void)dealloc;	// 0x30f0bb75
- (void)forwardGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x30f0bc01
- (void)registerProvider:(Class)provider;	// 0x30eae999
- (void)reverseGeocode:(id)geocode success:(id)success networkActivity:(id)activity error:(id)error;	// 0x30eae9f1
@end

