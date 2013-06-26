/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEONamedFeature : PBCodable {
	double _value;	// 4 = 0x4
	NSString *_name;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *name;	// G=0x33fce309; S=0x33fce319; @synthesize=_name
@property(assign, nonatomic) double value;	// G=0x33fce329; S=0x33fce341; @synthesize=_value
- (void)copyTo:(id)to;	// 0x33fce161
- (void)dealloc;	// 0x33fcddb9
- (id)description;	// 0x33fcddfd
- (id)dictionaryRepresentation;	// 0x33fcde6d
- (unsigned)hash;	// 0x33fce251
- (BOOL)isEqual:(id)equal;	// 0x33fce1bd
// declared property getter: - (id)name;	// 0x33fce309
- (BOOL)readFrom:(id)from;	// 0x33fce0f9
// declared property setter: - (void)setName:(id)name;	// 0x33fce319
// declared property setter: - (void)setValue:(double)value;	// 0x33fce341
// declared property getter: - (double)value;	// 0x33fce329
- (void)writeTo:(id)to;	// 0x33fce105
@end
