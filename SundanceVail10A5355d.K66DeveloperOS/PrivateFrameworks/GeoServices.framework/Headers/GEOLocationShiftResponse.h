/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library


@interface GEOLocationShiftResponse : PBCodable {
	XXStruct_jtcFHA _shiftedPixel;	// 4 = 0x4
}
@property(readonly, assign) XXStruct_zYrK5D shiftedCoordinate;	// G=0x34555dcd; 
@property(assign, nonatomic) XXStruct_jtcFHA shiftedPixel;	// G=0x3454757d; S=0x345475b1; @synthesize=_shiftedPixel
- (void)copyTo:(id)to;	// 0x345474a9
- (void)dealloc;	// 0x345471c1
- (id)description;	// 0x345471ed
- (id)dictionaryRepresentation;	// 0x3454725d
- (unsigned)hash;	// 0x34547569
- (BOOL)isEqual:(id)equal;	// 0x34547511
- (BOOL)readFrom:(id)from;	// 0x34547415
// declared property setter: - (void)setShiftedPixel:(XXStruct_jtcFHA)pixel;	// 0x345475b1
// declared property getter: - (XXStruct_zYrK5D)shiftedCoordinate;	// 0x34555dcd
// declared property getter: - (XXStruct_jtcFHA)shiftedPixel;	// 0x3454757d
- (void)writeTo:(id)to;	// 0x34547421
@end
