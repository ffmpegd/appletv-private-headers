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
@property(retain, nonatomic) NSMutableArray *requestElements;	// G=0x36728415; S=0x36728425; @synthesize=_requestElements
- (void)addRequestElements:(id)elements;	// 0x36727ee9
- (void)dealloc;	// 0x36727ea5
- (id)description;	// 0x36727f8d
- (id)dictionaryRepresentation;	// 0x36727ffd
- (BOOL)readFrom:(id)from;	// 0x36728169
// declared property getter: - (id)requestElements;	// 0x36728415
- (id)requestElementsAtIndex:(unsigned)index;	// 0x36727f6d
- (unsigned)requestElementsCount;	// 0x36727f4d
- (unsigned)requestTypeCode;	// 0x367283f1
- (Class)responseClass;	// 0x367283f9
// declared property setter: - (void)setRequestElements:(id)elements;	// 0x36728425
- (void)writeTo:(id)to;	// 0x367282dd
@end

