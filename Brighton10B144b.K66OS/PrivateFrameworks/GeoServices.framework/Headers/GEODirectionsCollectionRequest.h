/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest {
	NSMutableArray *_requestElements;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *requestElements;	// G=0x33fb0e4d; S=0x33fb0e5d; @synthesize=_requestElements
- (void)addRequestElements:(id)elements;	// 0x33fb0765
- (void)clearRequestElements;	// 0x33fb0745
- (void)copyTo:(id)to;	// 0x33fb0d3d
- (void)dealloc;	// 0x33fb0701
- (id)description;	// 0x33fb0811
- (id)dictionaryRepresentation;	// 0x33fb0881
- (unsigned)hash;	// 0x33fb0e2d
- (BOOL)isEqual:(id)equal;	// 0x33fb0dbd
- (BOOL)readFrom:(id)from;	// 0x33fb0bc9
// declared property getter: - (id)requestElements;	// 0x33fb0e4d
- (id)requestElementsAtIndex:(unsigned)index;	// 0x33fb07f1
- (unsigned)requestElementsCount;	// 0x33fb07d1
- (unsigned)requestTypeCode;	// 0x33fb0d19
- (Class)responseClass;	// 0x33fb0d21
// declared property setter: - (void)setRequestElements:(id)elements;	// 0x33fb0e5d
- (void)writeTo:(id)to;	// 0x33fb0bd5
@end
