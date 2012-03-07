/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <NSObject.h> // Unknown library

@class CLGeocoderInternal;

@interface CLGeocoder : NSObject {
@private
	CLGeocoderInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isGeocoding) BOOL geocoding;	// G=0x30fbc369; 
- (id)init;	// 0x30fbc245
- (void)_ensureMainThreadExecutionContextForBlock:(id)block;	// 0x30fbdc95
- (void)_notifyCancel;	// 0x30fbe3e5
- (void)_notifyError:(id)error;	// 0x30fbe439
- (void)_notifyNoResult;	// 0x30fbe391
- (void)_notifyPartialResult:(id)result;	// 0x30fbe339
- (void)_notifyResult:(id)result;	// 0x30fbe325
- (void)_notifyResult:(id)result error:(id)error;	// 0x30fbe239
- (id)_placemarkWithLocation:(id)location;	// 0x30fbe06d
- (id)_placemarkWithPlace:(id)place;	// 0x30fbdcc5
- (void)_request:(id)request didReturnError:(id)error;	// 0x30fbdad1
- (void)_request:(id)request didReturnError:(id)error partialResultForLocation:(id)location;	// 0x30fbd88d
- (void)_request:(id)request didReturnResponse:(id)response;	// 0x30fbd611
- (void)_setLoggingPropertiesForRequest:(id)request;	// 0x30fbdaf5
- (void)cancelGeocode;	// 0x30fbd4f1
- (void)dealloc;	// 0x30fbc2d5
- (void)geocodeAddressDictionary:(id)dictionary completionHandler:(id)handler;	// 0x30fbc99d
- (void)geocodeAddressString:(id)string completionHandler:(id)handler;	// 0x30fbcdd5
- (void)geocodeAddressString:(id)string inRegion:(id)region completionHandler:(id)handler;	// 0x30fbcdf5
// declared property getter: - (BOOL)isGeocoding;	// 0x30fbc369
- (void)reverseGeocodeLocation:(id)location completionHandler:(id)handler;	// 0x30fbc3c1
- (void)reverseGeocodeLocation:(id)location heading:(double)heading completionHandler:(id)handler;	// 0x30fbc3e9
- (void)reverseGeocodeLocation:(id)location heading:(double)heading localResultsOnly:(BOOL)only completionHandler:(id)handler;	// 0x30fbc419
- (void)reverseGeocodeLocation:(id)location localResultsOnly:(BOOL)only completionHandler:(id)handler;	// 0x30fbc391
@end
