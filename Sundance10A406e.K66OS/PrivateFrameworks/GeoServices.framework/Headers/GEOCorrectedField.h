/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEOCorrectedField : PBCodable {
	NSString *_correctedValue;	// 4 = 0x4
	NSString *_displayName;	// 8 = 0x8
	NSString *_objectName;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *correctedValue;	// G=0x379e82fd; S=0x379e830d; @synthesize=_correctedValue
@property(retain, nonatomic) NSString *displayName;	// G=0x379e82bd; S=0x379e82cd; @synthesize=_displayName
@property(readonly, assign, nonatomic) BOOL hasCorrectedValue;	// G=0x379e7d89; 
@property(readonly, assign, nonatomic) BOOL hasObjectName;	// G=0x379e7d71; 
@property(retain, nonatomic) NSString *objectName;	// G=0x379e82dd; S=0x379e82ed; @synthesize=_objectName
- (void)copyTo:(id)to;	// 0x379e80e1
// declared property getter: - (id)correctedValue;	// 0x379e82fd
- (void)dealloc;	// 0x379e7d05
- (id)description;	// 0x379e7da1
- (id)dictionaryRepresentation;	// 0x379e7e11
// declared property getter: - (id)displayName;	// 0x379e82bd
// declared property getter: - (BOOL)hasCorrectedValue;	// 0x379e7d89
// declared property getter: - (BOOL)hasObjectName;	// 0x379e7d71
- (unsigned)hash;	// 0x379e8261
- (BOOL)isEqual:(id)equal;	// 0x379e8191
// declared property getter: - (id)objectName;	// 0x379e82dd
- (BOOL)readFrom:(id)from;	// 0x379e806d
// declared property setter: - (void)setCorrectedValue:(id)value;	// 0x379e830d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x379e82cd
// declared property setter: - (void)setObjectName:(id)name;	// 0x379e82ed
- (void)writeTo:(id)to;	// 0x379e8079
@end
