/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOSubPremise : PBCodable {
	NSString *_name;	// 4 = 0x4
	int _type;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *name;	// G=0x37a8cd41; S=0x37a8cd51; @synthesize=_name
@property(assign, nonatomic) int type;	// G=0x37a8cd21; S=0x37a8cd31; @synthesize=_type
- (void)copyTo:(id)to;	// 0x37a8cbf9
- (void)dealloc;	// 0x37a8c851
- (id)description;	// 0x37a8c895
- (id)dictionaryRepresentation;	// 0x37a8c905
- (unsigned)hash;	// 0x37a8ccd9
- (BOOL)isEqual:(id)equal;	// 0x37a8cc51
// declared property getter: - (id)name;	// 0x37a8cd41
- (BOOL)readFrom:(id)from;	// 0x37a8cb9d
// declared property setter: - (void)setName:(id)name;	// 0x37a8cd51
// declared property setter: - (void)setType:(int)type;	// 0x37a8cd31
// declared property getter: - (int)type;	// 0x37a8cd21
- (void)writeTo:(id)to;	// 0x37a8cba9
@end
