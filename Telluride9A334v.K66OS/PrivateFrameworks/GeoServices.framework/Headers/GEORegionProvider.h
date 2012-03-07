/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

@interface GEORegionProvider : PBCodable {
	NSMutableArray *_regions;	// 4 = 0x4
	NSString *_provider;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL hasProvider;	// G=0x32c8f755; 
@property(retain, nonatomic) NSString *provider;	// G=0x32c8fc89; S=0x32c8fc99; @synthesize=_provider
@property(retain, nonatomic) NSMutableArray *regions;	// G=0x32c8fc55; S=0x32c8fc65; @synthesize=_regions
- (void)addRegion:(id)region;	// 0x32c8f6b1
- (void)dealloc;	// 0x32c8f659
- (id)description;	// 0x32c8f76d
- (id)dictionaryRepresentation;	// 0x32c8f7dd
// declared property getter: - (BOOL)hasProvider;	// 0x32c8f755
// declared property getter: - (id)provider;	// 0x32c8fc89
- (BOOL)readFrom:(id)from;	// 0x32c8f979
- (id)regionAtIndex:(unsigned)index;	// 0x32c8f735
// declared property getter: - (id)regions;	// 0x32c8fc55
- (unsigned)regionsCount;	// 0x32c8f715
// declared property setter: - (void)setProvider:(id)provider;	// 0x32c8fc99
// declared property setter: - (void)setRegions:(id)regions;	// 0x32c8fc65
- (void)writeTo:(id)to;	// 0x32c8fb1d
@end

