/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOVLaneInformation : PBCodable {
	unsigned _style;	// 4 = 0x4
	unsigned _validityMask;	// 8 = 0x8
}
@property(assign, nonatomic) unsigned style;	// G=0x341cf1e5; S=0x341cf1f5; @synthesize=_style
@property(assign, nonatomic) unsigned validityMask;	// G=0x341cf205; S=0x341cf215; @synthesize=_validityMask
- (void)copyTo:(id)to;	// 0x341cf0e5
- (void)dealloc;	// 0x341ced01
- (id)description;	// 0x341ced2d
- (id)dictionaryRepresentation;	// 0x341ced9d
- (unsigned)hash;	// 0x341cf1a5
- (BOOL)isEqual:(id)equal;	// 0x341cf13d
- (BOOL)readFrom:(id)from;	// 0x341cf091
// declared property setter: - (void)setStyle:(unsigned)style;	// 0x341cf1f5
// declared property setter: - (void)setValidityMask:(unsigned)mask;	// 0x341cf215
// declared property getter: - (unsigned)style;	// 0x341cf1e5
// declared property getter: - (unsigned)validityMask;	// 0x341cf205
- (void)writeTo:(id)to;	// 0x341cf09d
@end

