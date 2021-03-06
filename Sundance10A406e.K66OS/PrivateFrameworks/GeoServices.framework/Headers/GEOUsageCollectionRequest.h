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
@property(retain, nonatomic) NSMutableArray *directionsFeedbackCollections;	// G=0x379aee6d; S=0x379aee7d; @synthesize=_directionsFeedbackCollections
@property(retain, nonatomic) NSMutableArray *placeSearchFeedbackCollections;	// G=0x379aee8d; S=0x379aee9d; @synthesize=_placeSearchFeedbackCollections
@property(retain, nonatomic) NSMutableArray *transitAppLaunchFeedbackCollections;	// G=0x379aeead; S=0x379aeebd; @synthesize=_transitAppLaunchFeedbackCollections
@property(retain, nonatomic) NSMutableArray *usageCollections;	// G=0x379aee4d; S=0x379aee5d; @synthesize=_usageCollections
- (void)addDirectionsFeedbackCollection:(id)collection;	// 0x379adc19
- (void)addPlaceSearchFeedbackCollection:(id)collection;	// 0x379534d5
- (void)addTransitAppLaunchFeedbackCollection:(id)collection;	// 0x379add45
- (void)addUsageCollection:(id)collection;	// 0x379507f9
- (void)clearDirectionsFeedbackCollections;	// 0x379adbf9
- (void)clearPlaceSearchFeedbackCollections;	// 0x379adcc5
- (void)clearTransitAppLaunchFeedbackCollections;	// 0x379add25
- (void)clearUsageCollections;	// 0x379adb99
- (void)copyTo:(id)to;	// 0x379aeb0d
- (void)dealloc;	// 0x379adb19
- (id)description;	// 0x379addf1
- (id)dictionaryRepresentation;	// 0x379ade61
- (id)directionsFeedbackCollectionAtIndex:(unsigned)index;	// 0x379adca5
// declared property getter: - (id)directionsFeedbackCollections;	// 0x379aee6d
- (unsigned)directionsFeedbackCollectionsCount;	// 0x379adc85
- (unsigned)hash;	// 0x379aedd1
- (BOOL)isEqual:(id)equal;	// 0x379aecd1
- (id)placeSearchFeedbackCollectionAtIndex:(unsigned)index;	// 0x379add05
// declared property getter: - (id)placeSearchFeedbackCollections;	// 0x379aee8d
- (unsigned)placeSearchFeedbackCollectionsCount;	// 0x379adce5
- (BOOL)readFrom:(id)from;	// 0x379ae679
- (unsigned)requestTypeCode;	// 0x379aeae9
- (Class)responseClass;	// 0x379aeaf1
// declared property setter: - (void)setDirectionsFeedbackCollections:(id)collections;	// 0x379aee7d
// declared property setter: - (void)setPlaceSearchFeedbackCollections:(id)collections;	// 0x379aee9d
// declared property setter: - (void)setTransitAppLaunchFeedbackCollections:(id)collections;	// 0x379aeebd
// declared property setter: - (void)setUsageCollections:(id)collections;	// 0x379aee5d
- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned)index;	// 0x379addd1
// declared property getter: - (id)transitAppLaunchFeedbackCollections;	// 0x379aeead
- (unsigned)transitAppLaunchFeedbackCollectionsCount;	// 0x379addb1
- (id)usageCollectionAtIndex:(unsigned)index;	// 0x379adbd9
// declared property getter: - (id)usageCollections;	// 0x379aee4d
- (unsigned)usageCollectionsCount;	// 0x379adbb9
- (void)writeTo:(id)to;	// 0x379ae685
@end

