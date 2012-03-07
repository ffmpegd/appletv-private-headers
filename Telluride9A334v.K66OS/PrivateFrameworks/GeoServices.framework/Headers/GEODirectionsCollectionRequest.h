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
@property(retain, nonatomic) NSMutableArray *requestElements;	// G=0x32c90415; S=0x32c90425; @synthesize=_requestElements
- (void)addRequestElements:(id)elements;	// 0x32c8fee9
- (void)dealloc;	// 0x32c8fea5
- (id)description;	// 0x32c8ff8d
- (id)dictionaryRepresentation;	// 0x32c8fffd
- (BOOL)readFrom:(id)from;	// 0x32c90169
// declared property getter: - (id)requestElements;	// 0x32c90415
- (id)requestElementsAtIndex:(unsigned)index;	// 0x32c8ff6d
- (unsigned)requestElementsCount;	// 0x32c8ff4d
- (unsigned)requestTypeCode;	// 0x32c903f1
- (Class)responseClass;	// 0x32c903f9
// declared property setter: - (void)setRequestElements:(id)elements;	// 0x32c90425
- (void)writeTo:(id)to;	// 0x32c902dd
@end

