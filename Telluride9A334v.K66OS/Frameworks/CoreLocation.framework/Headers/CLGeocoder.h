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
@property(readonly, assign, nonatomic, getter=isGeocoding) BOOL geocoding;	// G=0x31c17369; 
- (id)init;	// 0x31c17245
- (void)_ensureMainThreadExecutionContextForBlock:(id)block;	// 0x31c18c95
- (void)_notifyCancel;	// 0x31c193e5
- (void)_notifyError:(id)error;	// 0x31c19439
- (void)_notifyNoResult;	// 0x31c19391
- (void)_notifyPartialResult:(id)result;	// 0x31c19339
- (void)_notifyResult:(id)result;	// 0x31c19325
- (void)_notifyResult:(id)result error:(id)error;	// 0x31c19239
- (id)_placemarkWithLocation:(id)location;	// 0x31c1906d
- (id)_placemarkWithPlace:(id)place;	// 0x31c18cc5
- (void)_request:(id)request didReturnError:(id)error;	// 0x31c18ad1
- (void)_request:(id)request didReturnError:(id)error partialResultForLocation:(id)location;	// 0x31c1888d
- (void)_request:(id)request didReturnResponse:(id)response;	// 0x31c18611
- (void)_setLoggingPropertiesForRequest:(id)request;	// 0x31c18af5
- (void)cancelGeocode;	// 0x31c184f1
- (void)dealloc;	// 0x31c172d5
- (void)geocodeAddressDictionary:(id)dictionary completionHandler:(id)handler;	// 0x31c1799d
- (void)geocodeAddressString:(id)string completionHandler:(id)handler;	// 0x31c17dd5
- (void)geocodeAddressString:(id)string inRegion:(id)region completionHandler:(id)handler;	// 0x31c17df5
// declared property getter: - (BOOL)isGeocoding;	// 0x31c17369
- (void)reverseGeocodeLocation:(id)location completionHandler:(id)handler;	// 0x31c173c1
- (void)reverseGeocodeLocation:(id)location heading:(double)heading completionHandler:(id)handler;	// 0x31c173e9
- (void)reverseGeocodeLocation:(id)location heading:(double)heading localResultsOnly:(BOOL)only completionHandler:(id)handler;	// 0x31c17419
- (void)reverseGeocodeLocation:(id)location localResultsOnly:(BOOL)only completionHandler:(id)handler;	// 0x31c17391
@end

