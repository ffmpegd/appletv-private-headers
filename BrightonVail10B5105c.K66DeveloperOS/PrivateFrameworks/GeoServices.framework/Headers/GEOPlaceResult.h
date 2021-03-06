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
@property(retain, nonatomic) NSMutableArray *additionalPlaces;	// G=0x33940c91; S=0x3391ead9; @synthesize=_additionalPlaces
@property(assign, nonatomic) double confidence;	// G=0x33940c79; S=0x3393ff0d; @synthesize=_confidence
@property(assign, nonatomic) BOOL hasConfidence;	// G=0x3393ff5d; S=0x3393ff41; 
@property(readonly, assign, nonatomic) BOOL hasQuad;	// G=0x33940055; 
@property(readonly, assign, nonatomic) BOOL hasSuggestedQuery;	// G=0x3391ec45; 
@property(readonly, assign, nonatomic) BOOL hasTokenEntity;	// G=0x3394003d; 
@property(retain, nonatomic) NSMutableArray *namedFeatures;	// G=0x33940cd1; S=0x3391eb29; @synthesize=_namedFeatures
@property(retain, nonatomic) GEOPlace *place;	// G=0x3391ec31; S=0x3391eac9; @synthesize=_place
@property(retain, nonatomic) NSString *quad;	// G=0x33940cb1; S=0x3391eb09; @synthesize=_quad
@property(retain, nonatomic) NSString *suggestedQuery;	// G=0x3391ec61; S=0x3391eae9; @synthesize=_suggestedQuery
@property(retain, nonatomic) GEOAddress *tokenEntity;	// G=0x33940ca1; S=0x3391eaf9; @synthesize=_tokenEntity
@property(retain, nonatomic) NSMutableArray *unmatchedStrings;	// G=0x33940cc1; S=0x3391eb19; @synthesize=_unmatchedStrings
- (void)addAdditionalPlace:(id)place;	// 0x3393ff91
- (void)addNamedFeature:(id)feature;	// 0x33940159
- (void)addUnmatchedString:(id)string;	// 0x3394008d
- (id)additionalPlaceAtIndex:(unsigned)index;	// 0x3394001d
// declared property getter: - (id)additionalPlaces;	// 0x33940c91
- (unsigned)additionalPlacesCount;	// 0x3393fffd
- (void)clearAdditionalPlaces;	// 0x3393ff71
- (void)clearNamedFeatures;	// 0x33940139
- (void)clearUnmatchedStrings;	// 0x3394006d
// declared property getter: - (double)confidence;	// 0x33940c79
- (void)copyTo:(id)to;	// 0x339406a1
- (void)dealloc;	// 0x3391ea09
- (id)description;	// 0x33940205
- (id)dictionaryRepresentation;	// 0x33940275
// declared property getter: - (BOOL)hasConfidence;	// 0x3393ff5d
// declared property getter: - (BOOL)hasQuad;	// 0x33940055
// declared property getter: - (BOOL)hasSuggestedQuery;	// 0x3391ec45
// declared property getter: - (BOOL)hasTokenEntity;	// 0x3394003d
- (unsigned)hash;	// 0x33940b01
- (BOOL)isEqual:(id)equal;	// 0x33940919
- (id)namedFeatureAtIndex:(unsigned)index;	// 0x339401e5
// declared property getter: - (id)namedFeatures;	// 0x33940cd1
- (unsigned)namedFeaturesCount;	// 0x339401c5
// declared property getter: - (id)place;	// 0x3391ec31
// declared property getter: - (id)quad;	// 0x33940cb1
- (BOOL)readFrom:(id)from;	// 0x33940691
// declared property setter: - (void)setAdditionalPlaces:(id)places;	// 0x3391ead9
// declared property setter: - (void)setConfidence:(double)confidence;	// 0x3393ff0d
// declared property setter: - (void)setHasConfidence:(BOOL)confidence;	// 0x3393ff41
// declared property setter: - (void)setNamedFeatures:(id)features;	// 0x3391eb29
// declared property setter: - (void)setPlace:(id)place;	// 0x3391eac9
// declared property setter: - (void)setQuad:(id)quad;	// 0x3391eb09
// declared property setter: - (void)setSuggestedQuery:(id)query;	// 0x3391eae9
// declared property setter: - (void)setTokenEntity:(id)entity;	// 0x3391eaf9
// declared property setter: - (void)setUnmatchedStrings:(id)strings;	// 0x3391eb19
// declared property getter: - (id)suggestedQuery;	// 0x3391ec61
// declared property getter: - (id)tokenEntity;	// 0x33940ca1
- (id)unmatchedStringAtIndex:(unsigned)index;	// 0x33940119
// declared property getter: - (id)unmatchedStrings;	// 0x33940cc1
- (unsigned)unmatchedStringsCount;	// 0x339400f9
- (void)writeTo:(id)to;	// 0x3391f4dd
@end

