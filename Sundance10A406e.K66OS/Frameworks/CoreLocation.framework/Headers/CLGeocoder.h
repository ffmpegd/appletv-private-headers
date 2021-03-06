/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <NSObject.h> // Unknown library

@class CLGeocoderInternal;

@interface CLGeocoder : NSObject {
	CLGeocoderInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isGeocoding) BOOL geocoding;	// G=0x3684db41; 
- (id)init;	// 0x3684da21
- (void)_ensureMainThreadExecutionContextForBlock:(id)block;	// 0x3684f37d
- (void)_notifyCancel;	// 0x3684fad1
- (void)_notifyError:(id)error;	// 0x3684fb25
- (void)_notifyNoResult;	// 0x3684fa7d
- (void)_notifyPartialResult:(id)result;	// 0x3684fa25
- (void)_notifyResult:(id)result;	// 0x3684fa11
- (void)_notifyResult:(id)result error:(id)error;	// 0x3684f929
- (id)_placemarkWithLocation:(id)location;	// 0x3684f761
- (id)_placemarkWithPlace:(id)place;	// 0x3684f3b1
- (void)_request:(id)request didReturnError:(id)error;	// 0x3684f1c5
- (void)_request:(id)request didReturnError:(id)error partialResultForLocation:(id)location;	// 0x3684efe1
- (void)_request:(id)request didReturnResponse:(id)response;	// 0x3684ed71
- (void)_setLoggingPropertiesForRequest:(id)request;	// 0x3684f1e9
- (void)cancelGeocode;	// 0x3684ec59
- (void)dealloc;	// 0x3684dab1
- (void)geocodeAddressDictionary:(id)dictionary completionHandler:(id)handler;	// 0x3684e161
- (void)geocodeAddressString:(id)string completionHandler:(id)handler;	// 0x3684e581
- (void)geocodeAddressString:(id)string inRegion:(id)region completionHandler:(id)handler;	// 0x3684e5a1
// declared property getter: - (BOOL)isGeocoding;	// 0x3684db41
- (void)reverseGeocodeLocation:(id)location completionHandler:(id)handler;	// 0x3684dba1
- (void)reverseGeocodeLocation:(id)location heading:(double)heading completionHandler:(id)handler;	// 0x3684dbc9
- (void)reverseGeocodeLocation:(id)location heading:(double)heading localResultsOnly:(BOOL)only completionHandler:(id)handler;	// 0x3684dbf9
- (void)reverseGeocodeLocation:(id)location localResultsOnly:(BOOL)only completionHandler:(id)handler;	// 0x3684db6d
@end

