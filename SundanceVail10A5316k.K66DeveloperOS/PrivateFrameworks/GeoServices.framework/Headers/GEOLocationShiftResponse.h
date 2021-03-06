/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library


@interface GEOLocationShiftResponse : PBCodable {
@private
	XXStruct_jtcFHA _shiftedPixel;	// 4 = 0x4
}
@property(readonly, assign) XXStruct_zYrK5D shiftedCoordinate;	// G=0x34b2b97d; 
@property(assign, nonatomic) XXStruct_jtcFHA shiftedPixel;	// G=0x34b1c605; S=0x34b1c639; @synthesize=_shiftedPixel
- (void)copyTo:(id)to;	// 0x34b1c531
- (void)dealloc;	// 0x34b1c249
- (id)description;	// 0x34b1c275
- (id)dictionaryRepresentation;	// 0x34b1c2e5
- (unsigned)hash;	// 0x34b1c5f1
- (BOOL)isEqual:(id)equal;	// 0x34b1c599
- (BOOL)readFrom:(id)from;	// 0x34b1c49d
// declared property setter: - (void)setShiftedPixel:(XXStruct_jtcFHA)pixel;	// 0x34b1c639
// declared property getter: - (XXStruct_zYrK5D)shiftedCoordinate;	// 0x34b2b97d
// declared property getter: - (XXStruct_jtcFHA)shiftedPixel;	// 0x34b1c605
- (void)writeTo:(id)to;	// 0x34b1c4a9
@end

