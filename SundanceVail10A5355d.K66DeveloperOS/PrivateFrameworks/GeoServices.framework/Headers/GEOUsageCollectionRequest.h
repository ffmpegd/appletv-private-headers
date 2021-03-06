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
@property(retain, nonatomic) NSMutableArray *directionsFeedbackCollections;	// G=0x345751c9; S=0x345751d9; @synthesize=_directionsFeedbackCollections
@property(retain, nonatomic) NSMutableArray *placeSearchFeedbackCollections;	// G=0x345751e9; S=0x345751f9; @synthesize=_placeSearchFeedbackCollections
@property(retain, nonatomic) NSMutableArray *transitAppLaunchFeedbackCollections;	// G=0x34575209; S=0x34575219; @synthesize=_transitAppLaunchFeedbackCollections
@property(retain, nonatomic) NSMutableArray *usageCollections;	// G=0x345751a9; S=0x345751b9; @synthesize=_usageCollections
- (void)addDirectionsFeedbackCollection:(id)collection;	// 0x34573f09
- (void)addPlaceSearchFeedbackCollection:(id)collection;	// 0x34573fd5
- (void)addTransitAppLaunchFeedbackCollection:(id)collection;	// 0x345740a1
- (void)addUsageCollection:(id)collection;	// 0x34573e3d
- (void)clearDirectionsFeedbackCollections;	// 0x34573ee9
- (void)clearPlaceSearchFeedbackCollections;	// 0x34573fb5
- (void)clearTransitAppLaunchFeedbackCollections;	// 0x34574081
- (void)clearUsageCollections;	// 0x34573e1d
- (void)copyTo:(id)to;	// 0x34574e69
- (void)dealloc;	// 0x34573d9d
- (id)description;	// 0x3457414d
- (id)dictionaryRepresentation;	// 0x345741bd
- (id)directionsFeedbackCollectionAtIndex:(unsigned)index;	// 0x34573f95
// declared property getter: - (id)directionsFeedbackCollections;	// 0x345751c9
- (unsigned)directionsFeedbackCollectionsCount;	// 0x34573f75
- (unsigned)hash;	// 0x3457512d
- (BOOL)isEqual:(id)equal;	// 0x3457502d
- (id)placeSearchFeedbackCollectionAtIndex:(unsigned)index;	// 0x34574061
// declared property getter: - (id)placeSearchFeedbackCollections;	// 0x345751e9
- (unsigned)placeSearchFeedbackCollectionsCount;	// 0x34574041
- (BOOL)readFrom:(id)from;	// 0x345749d5
- (unsigned)requestTypeCode;	// 0x34574e45
- (Class)responseClass;	// 0x34574e4d
// declared property setter: - (void)setDirectionsFeedbackCollections:(id)collections;	// 0x345751d9
// declared property setter: - (void)setPlaceSearchFeedbackCollections:(id)collections;	// 0x345751f9
// declared property setter: - (void)setTransitAppLaunchFeedbackCollections:(id)collections;	// 0x34575219
// declared property setter: - (void)setUsageCollections:(id)collections;	// 0x345751b9
- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned)index;	// 0x3457412d
// declared property getter: - (id)transitAppLaunchFeedbackCollections;	// 0x34575209
- (unsigned)transitAppLaunchFeedbackCollectionsCount;	// 0x3457410d
- (id)usageCollectionAtIndex:(unsigned)index;	// 0x34573ec9
// declared property getter: - (id)usageCollections;	// 0x345751a9
- (unsigned)usageCollectionsCount;	// 0x34573ea9
- (void)writeTo:(id)to;	// 0x345749e1
@end

