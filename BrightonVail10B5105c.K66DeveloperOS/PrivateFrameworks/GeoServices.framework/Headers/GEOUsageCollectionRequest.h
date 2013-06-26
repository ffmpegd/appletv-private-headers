/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray;

@interface GEOUsageCollectionRequest : PBRequest {
	NSMutableArray *_directionsFeedbackCollections;	// 4 = 0x4
	NSMutableArray *_placeSearchFeedbackCollections;	// 8 = 0x8
	NSMutableArray *_transitAppLaunchFeedbackCollections;	// 12 = 0xc
	NSMutableArray *_usageCollections;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *directionsFeedbackCollections;	// G=0x3397ddb1; S=0x3397ddc1; @synthesize=_directionsFeedbackCollections
@property(retain, nonatomic) NSMutableArray *placeSearchFeedbackCollections;	// G=0x3397ddd1; S=0x3397dde1; @synthesize=_placeSearchFeedbackCollections
@property(retain, nonatomic) NSMutableArray *transitAppLaunchFeedbackCollections;	// G=0x3397ddf1; S=0x3397de01; @synthesize=_transitAppLaunchFeedbackCollections
@property(retain, nonatomic) NSMutableArray *usageCollections;	// G=0x3397dd91; S=0x3397dda1; @synthesize=_usageCollections
- (void)addDirectionsFeedbackCollection:(id)collection;	// 0x3397cb5d
- (void)addPlaceSearchFeedbackCollection:(id)collection;	// 0x33921335
- (void)addTransitAppLaunchFeedbackCollection:(id)collection;	// 0x3397cc89
- (void)addUsageCollection:(id)collection;	// 0x3391e671
- (void)clearDirectionsFeedbackCollections;	// 0x3397cb3d
- (void)clearPlaceSearchFeedbackCollections;	// 0x3397cc09
- (void)clearTransitAppLaunchFeedbackCollections;	// 0x3397cc69
- (void)clearUsageCollections;	// 0x3397cadd
- (void)copyTo:(id)to;	// 0x3397da51
- (void)dealloc;	// 0x3397ca5d
- (id)description;	// 0x3397cd35
- (id)dictionaryRepresentation;	// 0x3397cda5
- (id)directionsFeedbackCollectionAtIndex:(unsigned)index;	// 0x3397cbe9
// declared property getter: - (id)directionsFeedbackCollections;	// 0x3397ddb1
- (unsigned)directionsFeedbackCollectionsCount;	// 0x3397cbc9
- (unsigned)hash;	// 0x3397dd15
- (BOOL)isEqual:(id)equal;	// 0x3397dc15
- (id)placeSearchFeedbackCollectionAtIndex:(unsigned)index;	// 0x3397cc49
// declared property getter: - (id)placeSearchFeedbackCollections;	// 0x3397ddd1
- (unsigned)placeSearchFeedbackCollectionsCount;	// 0x3397cc29
- (BOOL)readFrom:(id)from;	// 0x3397d5bd
- (unsigned)requestTypeCode;	// 0x3397da2d
- (Class)responseClass;	// 0x3397da35
// declared property setter: - (void)setDirectionsFeedbackCollections:(id)collections;	// 0x3397ddc1
// declared property setter: - (void)setPlaceSearchFeedbackCollections:(id)collections;	// 0x3397dde1
// declared property setter: - (void)setTransitAppLaunchFeedbackCollections:(id)collections;	// 0x3397de01
// declared property setter: - (void)setUsageCollections:(id)collections;	// 0x3397dda1
- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned)index;	// 0x3397cd15
// declared property getter: - (id)transitAppLaunchFeedbackCollections;	// 0x3397ddf1
- (unsigned)transitAppLaunchFeedbackCollectionsCount;	// 0x3397ccf5
- (id)usageCollectionAtIndex:(unsigned)index;	// 0x3397cb1d
// declared property getter: - (id)usageCollections;	// 0x3397dd91
- (unsigned)usageCollectionsCount;	// 0x3397cafd
- (void)writeTo:(id)to;	// 0x3397d5c9
@end
