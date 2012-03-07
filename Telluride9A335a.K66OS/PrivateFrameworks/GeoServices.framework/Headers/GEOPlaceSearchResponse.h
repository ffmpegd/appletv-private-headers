/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, GEOMapRegion;

@interface GEOPlaceSearchResponse : PBCodable {
	int _status;	// 4 = 0x4
	NSMutableArray *_placeResults;	// 8 = 0x8
	GEOMapRegion *_mapRegion;	// 12 = 0xc
	NSMutableArray *_searchs;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x31cf5ff9; 
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x31cf6855; S=0x31cf6865; @synthesize=_mapRegion
@property(retain, nonatomic) NSMutableArray *placeResults;	// G=0x31cf6821; S=0x31cf6831; @synthesize=_placeResults
@property(retain, nonatomic) NSMutableArray *searchs;	// G=0x31cf6889; S=0x31cf6899; @synthesize=_searchs
@property(assign, nonatomic) int status;	// G=0x31cf6801; S=0x31cf6811; @synthesize=_status
- (void)addPlaceResult:(id)result;	// 0x31cf5f55
- (void)addSearch:(id)search;	// 0x31cf6011
- (void)dealloc;	// 0x31cf5ee9
- (id)description;	// 0x31cf60b5
- (id)dictionaryRepresentation;	// 0x31cf6125
// declared property getter: - (BOOL)hasMapRegion;	// 0x31cf5ff9
// declared property getter: - (id)mapRegion;	// 0x31cf6855
- (id)placeResultAtIndex:(unsigned)index;	// 0x31cf5fd9
// declared property getter: - (id)placeResults;	// 0x31cf6821
- (unsigned)placeResultsCount;	// 0x31cf5fb9
- (BOOL)readFrom:(id)from;	// 0x31cf6345
- (id)searchAtIndex:(unsigned)index;	// 0x31cf6095
// declared property getter: - (id)searchs;	// 0x31cf6889
- (unsigned)searchsCount;	// 0x31cf6075
// declared property setter: - (void)setMapRegion:(id)region;	// 0x31cf6865
// declared property setter: - (void)setPlaceResults:(id)results;	// 0x31cf6831
// declared property setter: - (void)setSearchs:(id)searchs;	// 0x31cf6899
// declared property setter: - (void)setStatus:(int)status;	// 0x31cf6811
// declared property getter: - (int)status;	// 0x31cf6801
- (void)writeTo:(id)to;	// 0x31cf65a5
@end

