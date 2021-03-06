/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOPlaceSearchRequest.h"

@class NSString;

@interface GEOGeocodeRequest : GEOPlaceSearchRequest {
	unsigned short _geocodeProvider;	// 198 = 0xc6
	NSString *_logRequestToFile;	// 200 = 0xc8
	NSString *_logResponseToFile;	// 204 = 0xcc
}
@property(assign, nonatomic) unsigned short geocodeProvider;	// G=0x37955585; S=0x3795439d; @synthesize=_geocodeProvider
@property(retain, nonatomic) NSString *logRequestToFile;	// G=0x379558bd; S=0x3798b4a9; @synthesize=_logRequestToFile
@property(retain, nonatomic) NSString *logResponseToFile;	// G=0x379558cd; S=0x3798b4b9; @synthesize=_logResponseToFile
- (id)initForwardGeocodeWithAddressDictionary:(id)addressDictionary;	// 0x3798afb9
- (id)initForwardGeocodeWithAddressString:(id)addressString;	// 0x3798b31d
- (id)initReverseGeocodeWithCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x3798af8d
- (id)initReverseGeocodeWithCoordinate:(XXStruct_zYrK5D)coordinate includeBusinessOptions:(BOOL)options;	// 0x37954261
- (void)dealloc;	// 0x3798b445
// declared property getter: - (unsigned short)geocodeProvider;	// 0x37955585
// declared property getter: - (id)logRequestToFile;	// 0x379558bd
// declared property getter: - (id)logResponseToFile;	// 0x379558cd
// declared property setter: - (void)setGeocodeProvider:(unsigned short)provider;	// 0x3795439d
// declared property setter: - (void)setLogRequestToFile:(id)file;	// 0x3798b4a9
// declared property setter: - (void)setLogResponseToFile:(id)file;	// 0x3798b4b9
@end

