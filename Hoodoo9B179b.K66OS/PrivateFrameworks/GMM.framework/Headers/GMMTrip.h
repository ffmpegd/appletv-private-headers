/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMTrip : PBCodable {
	NSMutableArray *_routes;	// 4 = 0x4
	NSString *_tripSummary;	// 8 = 0x8
	BOOL _hasDetailLevel;	// 12 = 0xc
	int _detailLevel;	// 16 = 0x10
}
@property(assign, nonatomic) int detailLevel;	// G=0x31cfeac5; S=0x31cfeae9; @synthesize=_detailLevel
@property(assign, nonatomic) BOOL hasDetailLevel;	// G=0x31cfefe9; S=0x31cfeff9; @synthesize=_hasDetailLevel
@property(readonly, assign, nonatomic) BOOL hasTripSummary;	// G=0x31cfeaad; 
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x31cfef81; S=0x31cfef91; @synthesize=_routes
@property(retain, nonatomic) NSString *tripSummary;	// G=0x31cfefb5; S=0x31cfefc5; @synthesize=_tripSummary
- (void)addRoute:(id)route;	// 0x31cfea09
- (id)altDescription;	// 0x31d17991
- (void)dealloc;	// 0x31cfe9b1
- (id)description;	// 0x31ce3729
- (id)description;	// 0x31cfeb0d
// declared property getter: - (int)detailLevel;	// 0x31cfeac5
- (id)dictionaryRepresentation;	// 0x31cfeb7d
// declared property getter: - (BOOL)hasDetailLevel;	// 0x31cfefe9
// declared property getter: - (BOOL)hasTripSummary;	// 0x31cfeaad
- (BOOL)readFrom:(id)from;	// 0x31cfec55
- (id)routeAtIndex:(unsigned)index;	// 0x31cfea8d
// declared property getter: - (id)routes;	// 0x31cfef81
- (unsigned)routesCount;	// 0x31cfea6d
// declared property setter: - (void)setDetailLevel:(int)level;	// 0x31cfeae9
// declared property setter: - (void)setHasDetailLevel:(BOOL)level;	// 0x31cfeff9
// declared property setter: - (void)setRoutes:(id)routes;	// 0x31cfef91
// declared property setter: - (void)setTripSummary:(id)summary;	// 0x31cfefc5
// declared property getter: - (id)tripSummary;	// 0x31cfefb5
- (void)writeTo:(id)to;	// 0x31cfee19
@end
