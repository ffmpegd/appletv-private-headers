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
	NSMutableArray *_mapsUsageFeedbackCollections;	// 8 = 0x8
	NSMutableArray *_placeSearchFeedbackCollections;	// 12 = 0xc
	NSMutableArray *_transitAppLaunchFeedbackCollections;	// 16 = 0x10
	NSMutableArray *_usageCollections;	// 20 = 0x14
}
@property(retain, nonatomic) NSMutableArray *directionsFeedbackCollections;	// G=0x33fceafd; S=0x33fceb0d; @synthesize=_directionsFeedbackCollections
@property(retain, nonatomic) NSMutableArray *mapsUsageFeedbackCollections;	// G=0x33fceb5d; S=0x33fceb6d; @synthesize=_mapsUsageFeedbackCollections
@property(retain, nonatomic) NSMutableArray *placeSearchFeedbackCollections;	// G=0x33fceb1d; S=0x33fceb2d; @synthesize=_placeSearchFeedbackCollections
@property(retain, nonatomic) NSMutableArray *transitAppLaunchFeedbackCollections;	// G=0x33fceb3d; S=0x33fceb4d; @synthesize=_transitAppLaunchFeedbackCollections
@property(retain, nonatomic) NSMutableArray *usageCollections;	// G=0x33fceadd; S=0x33fceaed; @synthesize=_usageCollections
- (void)addDirectionsFeedbackCollection:(id)collection;	// 0x33fcd489
- (void)addMapsUsageFeedbackCollection:(id)collection;	// 0x33fcd681
- (void)addPlaceSearchFeedbackCollection:(id)collection;	// 0x33f71161
- (void)addTransitAppLaunchFeedbackCollection:(id)collection;	// 0x33fcd5b5
- (void)addUsageCollection:(id)collection;	// 0x33f6e551
- (void)clearDirectionsFeedbackCollections;	// 0x33fcd469
- (void)clearMapsUsageFeedbackCollections;	// 0x33fcd661
- (void)clearPlaceSearchFeedbackCollections;	// 0x33fcd535
- (void)clearTransitAppLaunchFeedbackCollections;	// 0x33fcd595
- (void)clearUsageCollections;	// 0x33fcd409
- (void)copyTo:(id)to;	// 0x33fce6e5
- (void)dealloc;	// 0x33fcd375
- (id)description;	// 0x33fcd72d
- (id)dictionaryRepresentation;	// 0x33fcd79d
- (id)directionsFeedbackCollectionAtIndex:(unsigned)index;	// 0x33fcd515
// declared property getter: - (id)directionsFeedbackCollections;	// 0x33fceafd
- (unsigned)directionsFeedbackCollectionsCount;	// 0x33fcd4f5
- (unsigned)hash;	// 0x33fcea49
- (BOOL)isEqual:(id)equal;	// 0x33fce915
- (id)mapsUsageFeedbackCollectionAtIndex:(unsigned)index;	// 0x33fcd70d
// declared property getter: - (id)mapsUsageFeedbackCollections;	// 0x33fceb5d
- (unsigned)mapsUsageFeedbackCollectionsCount;	// 0x33fcd6ed
- (id)placeSearchFeedbackCollectionAtIndex:(unsigned)index;	// 0x33fcd575
// declared property getter: - (id)placeSearchFeedbackCollections;	// 0x33fceb1d
- (unsigned)placeSearchFeedbackCollectionsCount;	// 0x33fcd555
- (BOOL)readFrom:(id)from;	// 0x33fce151
- (unsigned)requestTypeCode;	// 0x33fce6c1
- (Class)responseClass;	// 0x33fce6c9
// declared property setter: - (void)setDirectionsFeedbackCollections:(id)collections;	// 0x33fceb0d
// declared property setter: - (void)setMapsUsageFeedbackCollections:(id)collections;	// 0x33fceb6d
// declared property setter: - (void)setPlaceSearchFeedbackCollections:(id)collections;	// 0x33fceb2d
// declared property setter: - (void)setTransitAppLaunchFeedbackCollections:(id)collections;	// 0x33fceb4d
// declared property setter: - (void)setUsageCollections:(id)collections;	// 0x33fceaed
- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned)index;	// 0x33fcd641
// declared property getter: - (id)transitAppLaunchFeedbackCollections;	// 0x33fceb3d
- (unsigned)transitAppLaunchFeedbackCollectionsCount;	// 0x33fcd621
- (id)usageCollectionAtIndex:(unsigned)index;	// 0x33fcd449
// declared property getter: - (id)usageCollections;	// 0x33fceadd
- (unsigned)usageCollectionsCount;	// 0x33fcd429
- (void)writeTo:(id)to;	// 0x33fce15d
@end

