/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOUsageCollection : PBCodable {
	XXStruct_t9EeIA _probeID;	// 4 = 0x4
	XXStruct_t9EeIA _sessionID;	// 20 = 0x14
	XXStruct_2ta5gB *_tileUsages;	// 36 = 0x24
	unsigned _tileUsagesCount;	// 40 = 0x28
	unsigned _tileUsagesSpace;	// 44 = 0x2c
	double _timestamp;	// 48 = 0x30
	int _cellWifi;	// 56 = 0x38
	NSString *_countryCode;	// 60 = 0x3c
	int _geoService;	// 64 = 0x40
	int _requestDataSize;	// 68 = 0x44
	int _responseDataSize;	// 72 = 0x48
	int _responseTime;	// 76 = 0x4c
	struct {
		unsigned course : 1;
		unsigned heading : 1;
		unsigned horizontalAccuracy : 1;
		unsigned speed : 1;
		unsigned timestamp : 1;
		unsigned verticalAccuracy : 1;
		unsigned altitude : 1;
		unsigned type : 1;
	} _has;	// 80 = 0x50
}
@property(assign, nonatomic) int cellWifi;	// G=0x37a61359; S=0x379fdc89; @synthesize=_cellWifi
@property(retain, nonatomic) NSString *countryCode;	// G=0x37a61369; S=0x379fdc09; @synthesize=_countryCode
@property(assign, nonatomic) int geoService;	// G=0x37a61319; S=0x379fdb5d; @synthesize=_geoService
@property(assign, nonatomic) BOOL hasCellWifi;	// G=0x37a5fb31; S=0x37a5fb11; 
@property(readonly, assign, nonatomic) BOOL hasCountryCode;	// G=0x37a5fb45; 
@property(assign, nonatomic) BOOL hasGeoService;	// G=0x37a5fa65; S=0x37a5fa45; 
@property(assign, nonatomic) BOOL hasProbeID;	// G=0x37a5fbad; S=0x37a5fb91; 
@property(assign, nonatomic) BOOL hasRequestDataSize;	// G=0x37a5fa99; S=0x37a5fa79; 
@property(assign, nonatomic) BOOL hasResponseDataSize;	// G=0x37a5facd; S=0x37a5faad; 
@property(assign, nonatomic) BOOL hasResponseTime;	// G=0x37a5fafd; S=0x37a5fae1; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x37a5fb7d; S=0x37a5fb5d; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x37a5fbe5; S=0x37a5fbc5; 
@property(assign, nonatomic) XXStruct_t9EeIA probeID;	// G=0x37a6139d; S=0x379fdcd9; @synthesize=_probeID
@property(assign, nonatomic) int requestDataSize;	// G=0x37a61329; S=0x379fdb89; @synthesize=_requestDataSize
@property(assign, nonatomic) int responseDataSize;	// G=0x37a61339; S=0x379fdbb5; @synthesize=_responseDataSize
@property(assign, nonatomic) int responseTime;	// G=0x37a61349; S=0x379fdbe1; @synthesize=_responseTime
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x37a61379; S=0x379fdd1d; @synthesize=_sessionID
@property(readonly, assign, nonatomic) XXStruct_2ta5gB *tileUsages;	// G=0x37a5fc09; 
@property(readonly, assign, nonatomic) unsigned tileUsagesCount;	// G=0x37a5fbf9; 
@property(assign, nonatomic) double timestamp;	// G=0x37a613c1; S=0x379fdd61; @synthesize=_timestamp
- (void)addTileUsage:(XXStruct_2ta5gB)usage;	// 0x37a03ccd
// declared property getter: - (int)cellWifi;	// 0x37a61359
- (void)clearTileUsages;	// 0x37a5fc19
- (void)copyTo:(id)to;	// 0x37a60af9
// declared property getter: - (id)countryCode;	// 0x37a61369
- (void)dealloc;	// 0x37a5f9f1
- (id)description;	// 0x37a5fd69
- (id)dictionaryRepresentation;	// 0x37a5fdd9
// declared property getter: - (int)geoService;	// 0x37a61319
// declared property getter: - (BOOL)hasCellWifi;	// 0x37a5fb31
// declared property getter: - (BOOL)hasCountryCode;	// 0x37a5fb45
// declared property getter: - (BOOL)hasGeoService;	// 0x37a5fa65
// declared property getter: - (BOOL)hasProbeID;	// 0x37a5fbad
// declared property getter: - (BOOL)hasRequestDataSize;	// 0x37a5fa99
// declared property getter: - (BOOL)hasResponseDataSize;	// 0x37a5facd
// declared property getter: - (BOOL)hasResponseTime;	// 0x37a5fafd
// declared property getter: - (BOOL)hasSessionID;	// 0x37a5fb7d
// declared property getter: - (BOOL)hasTimestamp;	// 0x37a5fbe5
- (unsigned)hash;	// 0x37a610d1
- (BOOL)isEqual:(id)equal;	// 0x37a60e21
// declared property getter: - (XXStruct_t9EeIA)probeID;	// 0x37a6139d
- (BOOL)readFrom:(id)from;	// 0x37a607b9
// declared property getter: - (int)requestDataSize;	// 0x37a61329
// declared property getter: - (int)responseDataSize;	// 0x37a61339
// declared property getter: - (int)responseTime;	// 0x37a61349
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x37a61379
// declared property setter: - (void)setCellWifi:(int)wifi;	// 0x379fdc89
// declared property setter: - (void)setCountryCode:(id)code;	// 0x379fdc09
// declared property setter: - (void)setGeoService:(int)service;	// 0x379fdb5d
// declared property setter: - (void)setHasCellWifi:(BOOL)wifi;	// 0x37a5fb11
// declared property setter: - (void)setHasGeoService:(BOOL)service;	// 0x37a5fa45
// declared property setter: - (void)setHasProbeID:(BOOL)anId;	// 0x37a5fb91
// declared property setter: - (void)setHasRequestDataSize:(BOOL)size;	// 0x37a5fa79
// declared property setter: - (void)setHasResponseDataSize:(BOOL)size;	// 0x37a5faad
// declared property setter: - (void)setHasResponseTime:(BOOL)time;	// 0x37a5fae1
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x37a5fb5d
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x37a5fbc5
// declared property setter: - (void)setProbeID:(XXStruct_t9EeIA)anId;	// 0x379fdcd9
// declared property setter: - (void)setRequestDataSize:(int)size;	// 0x379fdb89
// declared property setter: - (void)setResponseDataSize:(int)size;	// 0x379fdbb5
// declared property setter: - (void)setResponseTime:(int)time;	// 0x379fdbe1
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x379fdd1d
- (void)setTileUsages:(XXStruct_2ta5gB *)usages count:(unsigned)count;	// 0x37a5fd19
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x379fdd61
- (XXStruct_2ta5gB)tileUsageAtIndex:(unsigned)index;	// 0x37a5fc59
// declared property getter: - (XXStruct_2ta5gB *)tileUsages;	// 0x37a5fc09
// declared property getter: - (unsigned)tileUsagesCount;	// 0x37a5fbf9
// declared property getter: - (double)timestamp;	// 0x37a613c1
- (void)writeTo:(id)to;	// 0x37a607c5
@end
