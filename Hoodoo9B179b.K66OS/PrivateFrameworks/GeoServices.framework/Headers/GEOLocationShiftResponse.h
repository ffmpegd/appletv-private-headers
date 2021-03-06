/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOPixelPoint;

@interface GEOLocationShiftResponse : PBCodable {
	GEOPixelPoint *_shiftedPixel;	// 4 = 0x4
}
@property(readonly, assign) XXStruct_zYrK5D shiftedCoordinate;	// G=0x32d0f109; 
@property(retain, nonatomic) GEOPixelPoint *shiftedPixel;	// G=0x32d01399; S=0x32d013a9; @synthesize=_shiftedPixel
- (void)dealloc;	// 0x32d01075
- (id)description;	// 0x32d010b9
- (id)dictionaryRepresentation;	// 0x32d01129
- (BOOL)readFrom:(id)from;	// 0x32d01191
// declared property setter: - (void)setShiftedPixel:(id)pixel;	// 0x32d013a9
// declared property getter: - (XXStruct_zYrK5D)shiftedCoordinate;	// 0x32d0f109
// declared property getter: - (id)shiftedPixel;	// 0x32d01399
- (void)writeTo:(id)to;	// 0x32d01305
@end

