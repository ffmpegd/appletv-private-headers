/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOPlace, NSMutableArray, NSString, GEOAddress;

@interface GEOPlaceResult : PBCodable {
	double _confidence;	// 4 = 0x4
	NSMutableArray *_additionalPlaces;	// 12 = 0xc
	NSMutableArray *_namedFeatures;	// 16 = 0x10
	GEOPlace *_place;	// 20 = 0x14
	NSString *_quad;	// 24 = 0x18
	NSString *_suggestedQuery;	// 28 = 0x1c
	GEOAddress *_tokenEntity;	// 32 = 0x20
	NSMutableArray *_unmatchedStrings;	// 36 = 0x24
	XXStruct_ec15KC _has;	// 40 = 0x28
}
@property(retain, nonatomic) NSMutableArray *additionalPlaces;	// G=0x34172b91; S=0x341509d9; @synthesize=_additionalPlaces
@property(assign, nonatomic) double confidence;	// G=0x34172b79; S=0x34171e0d; @synthesize=_confidence
@property(assign, nonatomic) BOOL hasConfidence;	// G=0x34171e5d; S=0x34171e41; 
@property(readonly, assign, nonatomic) BOOL hasQuad;	// G=0x34171f55; 
@property(readonly, assign, nonatomic) BOOL hasSuggestedQuery;	// G=0x34150b45; 
@property(readonly, assign, nonatomic) BOOL hasTokenEntity;	// G=0x34171f3d; 
@property(retain, nonatomic) NSMutableArray *namedFeatures;	// G=0x34172bd1; S=0x34150a29; @synthesize=_namedFeatures
@property(retain, nonatomic) GEOPlace *place;	// G=0x34150b31; S=0x341509c9; @synthesize=_place
@property(retain, nonatomic) NSString *quad;	// G=0x34172bb1; S=0x34150a09; @synthesize=_quad
@property(retain, nonatomic) NSString *suggestedQuery;	// G=0x34150b61; S=0x341509e9; @synthesize=_suggestedQuery
@property(retain, nonatomic) GEOAddress *tokenEntity;	// G=0x34172ba1; S=0x341509f9; @synthesize=_tokenEntity
@property(retain, nonatomic) NSMutableArray *unmatchedStrings;	// G=0x34172bc1; S=0x34150a19; @synthesize=_unmatchedStrings
- (void)addAdditionalPlace:(id)place;	// 0x34171e91
- (void)addNamedFeature:(id)feature;	// 0x34172059
- (void)addUnmatchedString:(id)string;	// 0x34171f8d
- (id)additionalPlaceAtIndex:(unsigned)index;	// 0x34171f1d
// declared property getter: - (id)additionalPlaces;	// 0x34172b91
- (unsigned)additionalPlacesCount;	// 0x34171efd
- (void)clearAdditionalPlaces;	// 0x34171e71
- (void)clearNamedFeatures;	// 0x34172039
- (void)clearUnmatchedStrings;	// 0x34171f6d
// declared property getter: - (double)confidence;	// 0x34172b79
- (void)copyTo:(id)to;	// 0x341725a1
- (void)dealloc;	// 0x34150909
- (id)description;	// 0x34172105
- (id)dictionaryRepresentation;	// 0x34172175
// declared property getter: - (BOOL)hasConfidence;	// 0x34171e5d
// declared property getter: - (BOOL)hasQuad;	// 0x34171f55
// declared property getter: - (BOOL)hasSuggestedQuery;	// 0x34150b45
// declared property getter: - (BOOL)hasTokenEntity;	// 0x34171f3d
- (unsigned)hash;	// 0x34172a01
- (BOOL)isEqual:(id)equal;	// 0x34172819
- (id)namedFeatureAtIndex:(unsigned)index;	// 0x341720e5
// declared property getter: - (id)namedFeatures;	// 0x34172bd1
- (unsigned)namedFeaturesCount;	// 0x341720c5
// declared property getter: - (id)place;	// 0x34150b31
// declared property getter: - (id)quad;	// 0x34172bb1
- (BOOL)readFrom:(id)from;	// 0x34172591
// declared property setter: - (void)setAdditionalPlaces:(id)places;	// 0x341509d9
// declared property setter: - (void)setConfidence:(double)confidence;	// 0x34171e0d
// declared property setter: - (void)setHasConfidence:(BOOL)confidence;	// 0x34171e41
// declared property setter: - (void)setNamedFeatures:(id)features;	// 0x34150a29
// declared property setter: - (void)setPlace:(id)place;	// 0x341509c9
// declared property setter: - (void)setQuad:(id)quad;	// 0x34150a09
// declared property setter: - (void)setSuggestedQuery:(id)query;	// 0x341509e9
// declared property setter: - (void)setTokenEntity:(id)entity;	// 0x341509f9
// declared property setter: - (void)setUnmatchedStrings:(id)strings;	// 0x34150a19
// declared property getter: - (id)suggestedQuery;	// 0x34150b61
// declared property getter: - (id)tokenEntity;	// 0x34172ba1
- (id)unmatchedStringAtIndex:(unsigned)index;	// 0x34172019
// declared property getter: - (id)unmatchedStrings;	// 0x34172bc1
- (unsigned)unmatchedStringsCount;	// 0x34171ff9
- (void)writeTo:(id)to;	// 0x341513dd
@end

