/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMMOldRequest.h"

@class GMMMapPoint;

__attribute__((visibility("hidden")))
@interface GMMHasTrafficRequest : GMMOldRequest {
	GMMMapPoint *_mapPoint;	// 4 = 0x4
}
@property(retain, nonatomic) GMMMapPoint *mapPoint;	// G=0x315a50d9; S=0x315a50e9; @synthesize=_mapPoint
- (void)dealloc;	// 0x315a4ff1
- (id)dictionaryRepresentation;	// 0x315a50d5
// declared property getter: - (id)mapPoint;	// 0x315a50d9
- (BOOL)readFrom:(id)from;	// 0x315a5051
- (unsigned)requestTypeCode;	// 0x315a503d
- (Class)responseClass;	// 0x315a5041
// declared property setter: - (void)setMapPoint:(id)point;	// 0x315a50e9
- (void)writeTo:(id)to;	// 0x315a506d
@end

