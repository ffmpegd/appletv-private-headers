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
@property(readonly, assign, nonatomic, getter=isGeocoding) BOOL geocoding;	// G=0x30461369; 
- (id)init;	// 0x30461245
- (void)_ensureMainThreadExecutionContextForBlock:(id)block;	// 0x30462c95
- (void)_notifyCancel;	// 0x304633e5
- (void)_notifyError:(id)error;	// 0x30463439
- (void)_notifyNoResult;	// 0x30463391
- (void)_notifyPartialResult:(id)result;	// 0x30463339
- (void)_notifyResult:(id)result;	// 0x30463325
- (void)_notifyResult:(id)result error:(id)error;	// 0x30463239
- (id)_placemarkWithLocation:(id)location;	// 0x3046306d
- (id)_placemarkWithPlace:(id)place;	// 0x30462cc5
- (void)_request:(id)request didReturnError:(id)error;	// 0x30462ad1
- (void)_request:(id)request didReturnError:(id)error partialResultForLocation:(id)location;	// 0x3046288d
- (void)_request:(id)request didReturnResponse:(id)response;	// 0x30462611
- (void)_setLoggingPropertiesForRequest:(id)request;	// 0x30462af5
- (void)cancelGeocode;	// 0x304624f1
- (void)dealloc;	// 0x304612d5
- (void)geocodeAddressDictionary:(id)dictionary completionHandler:(id)handler;	// 0x3046199d
- (void)geocodeAddressString:(id)string completionHandler:(id)handler;	// 0x30461dd5
- (void)geocodeAddressString:(id)string inRegion:(id)region completionHandler:(id)handler;	// 0x30461df5
// declared property getter: - (BOOL)isGeocoding;	// 0x30461369
- (void)reverseGeocodeLocation:(id)location completionHandler:(id)handler;	// 0x304613c1
- (void)reverseGeocodeLocation:(id)location heading:(double)heading completionHandler:(id)handler;	// 0x304613e9
- (void)reverseGeocodeLocation:(id)location heading:(double)heading localResultsOnly:(BOOL)only completionHandler:(id)handler;	// 0x30461419
- (void)reverseGeocodeLocation:(id)location localResultsOnly:(BOOL)only completionHandler:(id)handler;	// 0x30461391
@end

