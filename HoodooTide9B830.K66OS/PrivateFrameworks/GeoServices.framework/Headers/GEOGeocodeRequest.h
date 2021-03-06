/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOPlaceSearchRequest.h"
#import "GeoServices-Structs.h"

@class NSString;

@interface GEOGeocodeRequest : GEOPlaceSearchRequest {
	unsigned short _provider;	// 140 = 0x8c
	NSString *_logRequestToFile;	// 144 = 0x90
	NSString *_logResponseToFile;	// 148 = 0x94
}
@property(retain, nonatomic) NSString *logRequestToFile;	// G=0x35f3e3d1; S=0x35f3e3e1; @synthesize=_logRequestToFile
@property(retain, nonatomic) NSString *logResponseToFile;	// G=0x35f3e405; S=0x35f3e415; @synthesize=_logResponseToFile
@property(assign, nonatomic) unsigned short provider;	// G=0x35f3e3b1; S=0x35f3e3c1; @synthesize=_provider
- (id)init;	// 0x35f3db3d
- (id)initForwardGeocodeWithAddressDictionary:(id)addressDictionary;	// 0x35f3dc75
- (id)initForwardGeocodeWithAddressString:(id)addressString;	// 0x35f3dfb1
- (id)initReverseGeocodeWithCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x35f3dba1
- (void)dealloc;	// 0x35f3e0b1
- (unsigned)hash;	// 0x35f3e2a1
- (BOOL)isEqual:(id)equal;	// 0x35f3e111
// declared property getter: - (id)logRequestToFile;	// 0x35f3e3d1
// declared property getter: - (id)logResponseToFile;	// 0x35f3e405
// declared property getter: - (unsigned short)provider;	// 0x35f3e3b1
// declared property setter: - (void)setLogRequestToFile:(id)file;	// 0x35f3e3e1
// declared property setter: - (void)setLogResponseToFile:(id)file;	// 0x35f3e415
// declared property setter: - (void)setProvider:(unsigned short)provider;	// 0x35f3e3c1
@end

