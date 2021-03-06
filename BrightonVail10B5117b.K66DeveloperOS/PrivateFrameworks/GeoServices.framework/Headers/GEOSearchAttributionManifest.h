/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOSearchAttributionManifest : PBCodable {
	NSMutableArray *_searchAttributionSources;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *searchAttributionSources;	// G=0x341f0b5d; S=0x341f0b6d; @synthesize=_searchAttributionSources
- (void)addSearchAttributionSources:(id)sources;	// 0x341f0499
- (void)clearSearchAttributionSources;	// 0x341f0479
- (void)copyTo:(id)to;	// 0x341f0a4d
- (void)dealloc;	// 0x341f0435
- (id)description;	// 0x341f0545
- (id)dictionaryRepresentation;	// 0x341f05b5
- (unsigned)hash;	// 0x341f0b3d
- (BOOL)isEqual:(id)equal;	// 0x341f0acd
- (BOOL)readFrom:(id)from;	// 0x341f08fd
// declared property getter: - (id)searchAttributionSources;	// 0x341f0b5d
- (id)searchAttributionSourcesAtIndex:(unsigned)index;	// 0x341f0525
- (unsigned)searchAttributionSourcesCount;	// 0x341f0505
// declared property setter: - (void)setSearchAttributionSources:(id)sources;	// 0x341f0b6d
- (void)writeTo:(id)to;	// 0x341f0909
@end

