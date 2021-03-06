/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>


@interface GEOPolyLocationShiftResponse : PBCodable {
	struct {
		double *list;
		unsigned count;
		unsigned size;
	} _parameters;	// 4 = 0x4
	double _radius;	// 16 = 0x10
	int _status;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) double *parameters;	// G=0x30fc13dd; 
@property(readonly, assign, nonatomic) unsigned parametersCount;	// G=0x30fc13c9; 
@property(assign, nonatomic) double radius;	// G=0x30fc1c31; S=0x30fc1c49; @synthesize=_radius
@property(assign, nonatomic) int status;	// G=0x30fc1c11; S=0x30fc1c21; @synthesize=_status
- (void)addParameters:(double)parameters;	// 0x30fc1401
- (void)clearParameters;	// 0x30fc13ed
- (void)copyTo:(id)to;	// 0x30fc19e5
- (void)dealloc;	// 0x30fc1389
- (id)description;	// 0x30fc14dd
- (id)dictionaryRepresentation;	// 0x30fc154d
- (unsigned)hash;	// 0x30fc1b49
- (BOOL)isEqual:(id)equal;	// 0x30fc1ab5
// declared property getter: - (double *)parameters;	// 0x30fc13dd
- (double)parametersAtIndex:(unsigned)index;	// 0x30fc1419
// declared property getter: - (unsigned)parametersCount;	// 0x30fc13c9
// declared property getter: - (double)radius;	// 0x30fc1c31
- (BOOL)readFrom:(id)from;	// 0x30fc1921
- (void)setParameters:(double *)parameters count:(unsigned)count;	// 0x30fc14c5
// declared property setter: - (void)setRadius:(double)radius;	// 0x30fc1c49
// declared property setter: - (void)setStatus:(int)status;	// 0x30fc1c21
// declared property getter: - (int)status;	// 0x30fc1c11
- (void)writeTo:(id)to;	// 0x30fc192d
@end

