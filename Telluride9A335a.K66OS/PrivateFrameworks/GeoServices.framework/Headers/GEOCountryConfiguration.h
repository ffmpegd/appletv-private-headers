/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSURLConnection, NSDictionary, NSString;

@interface GEOCountryConfiguration : NSObject <NSURLConnectionDelegate> {
	NSURLConnection *_connection;	// 4 = 0x4
	NSMutableData *_responseData;	// 8 = 0x8
	NSString *_countryCode;	// 12 = 0xc
	NSDictionary *_oldProvidersInfo;	// 16 = 0x10
	NSString *_oldCountryCode;	// 20 = 0x14
	BOOL _isObservingReachability;	// 24 = 0x18
	BOOL _isUpdating;	// 25 = 0x19
}
@property(copy, nonatomic) NSString *countryCode;	// G=0x31cfb249; S=0x31cfb6cd; @synthesize=_countryCode
+ (id)sharedConfiguration;	// 0x31cfaae1
- (void)_checkCountryCode;	// 0x31cfaeb9
- (void)_checkCountryProviders;	// 0x31cfb019
- (void)_reachabilityChanged:(id)changed;	// 0x31cfac2d
- (void)_registerNetworkDefaults;	// 0x31cfafad
- (void)_useCountryCodeProvider:(id)provider;	// 0x31cfb4f1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x31cfb2a1
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x31cfb3e5
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x31cfb2f5
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x31cfb2f1
- (void)connectionDidFinishLoading:(id)connection;	// 0x31cfb405
// declared property getter: - (id)countryCode;	// 0x31cfb249
- (id)countryDefaultForKey:(id)key;	// 0x31cfb66d
- (void)dealloc;	// 0x31cfab4d
- (id)defaultForKey:(id)key defaultValue:(id)value;	// 0x31cfb641
// declared property setter: - (void)setCountryCode:(id)code;	// 0x31cfb6cd
- (void)toggleCountry;	// 0x31cfb5a5
- (void)updateProvidersForCurrentCountry;	// 0x31cfaccd
@end

